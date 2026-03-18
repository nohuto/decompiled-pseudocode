/*
 * XREFs of PpmReapplyPerfPolicy @ 0x140AC77C4
 * Callers:
 *     PpmPerfProcCapFloorSettingCallback @ 0x140758F20 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmInfoApplySettingUpdate @ 0x1409BDA78 (PpmInfoApplySettingUpdate.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A4706C (PpmCompareAndApplyPolicySettings.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC7948 (PpmReinitializeHeteroEngine.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x140457958 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B38A4 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x1404ED2F4 (PpmParkApplyPolicy.c)
 *     PpmPerfResizeHistoryAll @ 0x14074FC08 (PpmPerfResizeHistoryAll.c)
 *     PopInitializeHeteroProcessors @ 0x140A2A138 (PopInitializeHeteroProcessors.c)
 *     PpmUpdateProcessorPolicy @ 0x140A5A6D8 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckReInit @ 0x140A72240 (PpmCheckReInit.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC66D0 (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AC75E0 (PpmCheckInitProcessors.c)
 */

void __fastcall PpmReapplyPerfPolicy(_WORD *a1)
{
  __int64 *v1; // rdi
  unsigned __int64 v3; // rsi
  char v4; // bp
  unsigned int v5; // ecx
  char v6; // al
  unsigned int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // di
  char v13; // si

  v1 = PpmCurrentProfile[0];
  v3 = 61LL * dword_140F0BA4C;
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
    v6 = PopInitializeHeteroProcessors((*(_DWORD *)a1 & 0x800) != 0);
    if ( (*(_DWORD *)a1 & 0x800) != 0 || v6 )
    {
      v4 = 1;
      v7 = *(_DWORD *)a1 & 0xFFFFDFF5 | 0x2008;
      if ( (*a1 & 0x8000) == 0 )
        v7 = *(_DWORD *)a1 | 0x200A;
      *(_DWORD *)a1 = v7 | 4;
    }
  }
  if ( LODWORD(v1[v3 + 65]) != PpmHeteroContainmentPolicy )
  {
    PpmHeteroContainmentPolicy = v1[v3 + 65];
    PpmHeteroHgsCheckContainmentDecision();
  }
  PpmUpdateProcessorPolicy(a1, 0LL);
  if ( (*(_DWORD *)a1 & 4) != 0 )
    PpmParkApplyPolicy(v9, v8, v10, v11);
  if ( (*(_DWORD *)a1 & 0x10) != 0 )
    PpmPerfResizeHistoryAll();
  if ( (*(_DWORD *)a1 & 8) != 0 )
    PpmCheckReInit();
  v12 = 1;
  v13 = 0;
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v12 = 0;
    v13 = 1;
    PpmPerfUpdateDomainPolicy(v4);
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    if ( v13 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v8, v10);
    if ( (*(_DWORD *)a1 & 0x2000) != 0 )
      PpmCheckInitProcessors(1, (*(_DWORD *)a1 >> 14) & 1);
    else
      PpmCheckApplyParkConstraints();
  }
  else if ( v12 )
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
}
