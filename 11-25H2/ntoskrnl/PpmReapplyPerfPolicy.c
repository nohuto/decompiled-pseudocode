/*
 * XREFs of PpmReapplyPerfPolicy @ 0x140A3EE58
 * Callers:
 *     PpmPerfProcCapFloorSettingCallback @ 0x14074CCC0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmInfoApplySettingUpdate @ 0x140965D6C (PpmInfoApplySettingUpdate.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A3EC4C (PpmCompareAndApplyPolicySettings.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC1DDC (PpmReinitializeHeteroEngine.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x1404AF124 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B3F74 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 *     PpmPerfResizeHistoryAll @ 0x140743B38 (PpmPerfResizeHistoryAll.c)
 *     PopInitializeHeteroProcessors @ 0x140A2061C (PopInitializeHeteroProcessors.c)
 *     PpmCheckReInit @ 0x140A4D648 (PpmCheckReInit.c)
 *     PpmUpdateProcessorPolicy @ 0x140A56B1C (PpmUpdateProcessorPolicy.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A69270 (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 */

void __fastcall PpmReapplyPerfPolicy(unsigned int *a1)
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
  char v11; // di
  char v12; // si

  v1 = PpmCurrentProfile[0];
  v3 = 61LL * dword_140F0B70C;
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
      *a1 |= 0x4800u;
    }
  }
  if ( (*a1 & 0x1800) != 0 )
  {
    v6 = PopInitializeHeteroProcessors((*a1 & 0x800) != 0);
    if ( (*a1 & 0x800) != 0 || v6 )
    {
      v4 = 1;
      v7 = *a1 & 0xFFFFDFF5 | 0x2008;
      if ( (*(_WORD *)a1 & 0x8000) == 0 )
        v7 = *a1 | 0x200A;
      *a1 = v7 | 4;
    }
  }
  if ( LODWORD(v1[v3 + 65]) != PpmHeteroContainmentPolicy )
  {
    PpmHeteroContainmentPolicy = v1[v3 + 65];
    PpmHeteroHgsCheckContainmentDecision();
  }
  PpmUpdateProcessorPolicy(a1, 0LL);
  if ( (*a1 & 4) != 0 )
    PpmParkApplyPolicy();
  if ( (*a1 & 0x10) != 0 )
    PpmPerfResizeHistoryAll();
  if ( (*a1 & 8) != 0 )
    PpmCheckReInit(v9, v8);
  v11 = 1;
  v12 = 0;
  if ( (*a1 & 2) != 0 )
  {
    LOBYTE(v9) = v4;
    v11 = 0;
    v12 = 1;
    PpmPerfUpdateDomainPolicy(v9);
  }
  if ( (*a1 & 4) != 0 )
  {
    if ( v12 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v8, v10);
    if ( (*a1 & 0x2000) != 0 )
      PpmCheckInitProcessors(1LL, (*a1 >> 14) & 1, v10);
    else
      PpmCheckApplyParkConstraints();
  }
  else if ( v11 )
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
}
