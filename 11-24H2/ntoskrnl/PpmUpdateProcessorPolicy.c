/*
 * XREFs of PpmUpdateProcessorPolicy @ 0x140A5A6D8
 * Callers:
 *     PpmPerfReApplyStates @ 0x14074FB74 (PpmPerfReApplyStates.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140AC75E0 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140AC77C4 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14029B69C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 *     PpmUpdateTargetProcessorPolicy @ 0x1404A7D2C (PpmUpdateTargetProcessorPolicy.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int16 __fastcall PpmUpdateProcessorPolicy(_WORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int i; // ebx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  _DWORD v19[4]; // [rsp+20h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX v20; // [rsp+30h] [rbp-D0h] BYREF

  v19[0] = 0;
  memset_0(&v20.8, 0, sizeof(v20.8));
  LOWORD(CurrentPrcb) = PpmAllowedActions & *a1;
  v7 = &PpmCurrentProfile[0][61 * dword_140F0BA4C];
  LOWORD(v19[0]) = (_WORD)CurrentPrcb;
  if ( !a2 && (v19[0] & 0x400) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( _bittest64((const signed __int64 *)&CurrentPrcb->FeatureBits, 0x27u) )
    {
      v17 = __readmsr(0xDB0u);
      CurrentPrcb = (struct _KPRCB *)(v17 & 0xFFFFFFFFFFFFFFFEuLL);
      v4 = v17 | 1;
      if ( *((_BYTE *)v7 + 176) )
        CurrentPrcb = (struct _KPRCB *)v4;
      __writemsr(0xDB0u, (unsigned __int64)CurrentPrcb);
    }
  }
  v19[0] &= ~0x400u;
  if ( LOWORD(v19[0]) )
  {
    v8 = 10000LL * *((unsigned int *)v7 + 19);
    if ( v8 <= (unsigned int)KeMaximumIncrement )
    {
      v9 = 0LL;
    }
    else
    {
      v8 -= (unsigned int)KeMaximumIncrement;
      v9 = v8 / 0x2710;
    }
    PpmPerfTimeWindow = v9;
    if ( !PpmPerfControlStartPolicyUpdate
      || (LODWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides(v8, v9, v4, v5), (int)CurrentPrcb >= 0) )
    {
      if ( a2 )
      {
        v10 = *(__int64 **)a2;
      }
      else
      {
        a2 = PpmPerfDomainHead;
        v10 = &PpmPerfDomainHead;
      }
      *(_QWORD *)&v20.Count = 2097153LL;
      memset_0(&v20.8, 0, sizeof(v20.8));
      while ( (__int64 *)a2 != v10 )
      {
        KiOrAffinityEx((struct _KAFFINITY_EX *)(a2 + 24), &v20, &v20, v20.Size);
        for ( i = 0; i < *(_DWORD *)(a2 + 296); ++i )
        {
          v16 = *(_QWORD *)(a2 + 312) + 1192LL * i;
          if ( *(_DWORD *)(v16 + 16) )
            PpmUpdateTargetProcessorPolicy(a2, (_QWORD *)v16, v19, (__int64)(v7 + 5));
        }
        a2 = *(_QWORD *)a2;
      }
      PopExecuteOnTargetProcessors(
        (__int64)&PpmPerfStatesRegistered,
        (__int64)PpmUpdateProcessorPolicyCallback,
        (__int64)v19,
        (__int64)(v7 + 5));
      LOWORD(CurrentPrcb) = PpmPerfControlCompletePolicyUpdate;
      if ( PpmPerfControlCompletePolicyUpdate )
        LOWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides(v12, v11, v13, v14);
    }
  }
  return (__int16)CurrentPrcb;
}
