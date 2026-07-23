/*
 * XREFs of PpmReapplyPerfPolicy @ 0x140AC5250
 * Callers:
 *     PpmPerfProcCapFloorSettingCallback @ 0x1407573A0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmInfoApplySettingUpdate @ 0x1409A40C8 (PpmInfoApplySettingUpdate.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A3CFDC (PpmCompareAndApplyPolicySettings.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC53D4 (PpmReinitializeHeteroEngine.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x14044BDC4 (PpmCheckApplyParkConstraints.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14044C408 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     PpmPerfResizeHistoryAll @ 0x14074DF2C (PpmPerfResizeHistoryAll.c)
 *     PpmUpdateProcessorPolicy @ 0x140A51F98 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AC506C (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 */

LONG __fastcall PpmReapplyPerfPolicy(_WORD *a1)
{
  __int64 *v1; // rdi
  unsigned __int64 v3; // rsi
  char v4; // bp
  unsigned int v5; // ecx
  __int64 v6; // rcx
  char v7; // al
  unsigned int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // di
  char v14; // si
  LONG result; // eax

  v1 = PpmCurrentProfile[0];
  v3 = 61LL * dword_140F0B38C;
  v4 = 0;
  v5 = HIDWORD(PpmCurrentProfile[0][v3 + 62]);
  if ( v5 > 4 )
    v5 = 0;
  if ( v5 != PpmHeteroDesiredPolicy )
  {
    PpmHeteroDesiredPolicy = v5;
    if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 )
      v5 = 0;
    if ( v5 != PpmHeteroPolicy )
    {
      PpmHeteroPolicy = v5;
      *(_DWORD *)a1 |= 0x4800u;
    }
  }
  if ( (*(_DWORD *)a1 & 0x1800) != 0 )
  {
    v6 = *(_DWORD *)a1 >> 11;
    LOBYTE(v6) = (*(_DWORD *)a1 & 0x800) != 0;
    v7 = PopInitializeHeteroProcessors(v6);
    if ( (*(_DWORD *)a1 & 0x800) != 0 || v7 )
    {
      v4 = 1;
      v8 = *(_DWORD *)a1 & 0xFFFFDFF5 | 0x2008;
      if ( (*a1 & 0x8000) == 0 )
        v8 = *(_DWORD *)a1 | 0x200A;
      *(_DWORD *)a1 = v8 | 4;
    }
  }
  if ( LODWORD(v1[v3 + 65]) != PpmHeteroContainmentPolicy )
  {
    PpmHeteroContainmentPolicy = v1[v3 + 65];
    PpmHeteroHgsCheckContainmentDecision();
  }
  PpmUpdateProcessorPolicy(a1, 0LL);
  if ( (*(_DWORD *)a1 & 4) != 0 )
    PpmParkApplyPolicy(v10, v9, v11, v12);
  if ( (*(_DWORD *)a1 & 0x10) != 0 )
    PpmPerfResizeHistoryAll();
  if ( (*(_DWORD *)a1 & 8) != 0 )
    PpmCheckReInit();
  v13 = 1;
  v14 = 0;
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v13 = 0;
    v14 = 1;
    PpmPerfUpdateDomainPolicy(v4);
  }
  result = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    if ( v14 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v9, v11);
    if ( (*(_DWORD *)a1 & 0x2000) != 0 )
      return PpmCheckInitProcessors(1, (*(_DWORD *)a1 >> 14) & 1);
    else
      return PpmCheckApplyParkConstraints();
  }
  else if ( v13 )
  {
    return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  return result;
}
