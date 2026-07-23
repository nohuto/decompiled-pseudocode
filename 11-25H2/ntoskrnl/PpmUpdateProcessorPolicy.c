/*
 * XREFs of PpmUpdateProcessorPolicy @ 0x140A56B1C
 * Callers:
 *     PpmPerfReApplyStates @ 0x140743AA4 (PpmPerfReApplyStates.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140272B6C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 *     PpmUpdateTargetProcessorPolicy @ 0x1404A739C (PpmUpdateTargetProcessorPolicy.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int16 __fastcall PpmUpdateProcessorPolicy(_WORD *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  unsigned int i; // ebx
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r8
  _DWORD v15[4]; // [rsp+20h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX v16; // [rsp+30h] [rbp-D0h] BYREF

  v15[0] = 0;
  memset_0(&v16.8, 0, sizeof(v16.8));
  LOWORD(CurrentPrcb) = PpmAllowedActions & *a1;
  v5 = &PpmCurrentProfile[0][61 * dword_140F0B70C];
  LOWORD(v15[0]) = (_WORD)CurrentPrcb;
  if ( !a2 && (v15[0] & 0x400) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( _bittest64((const signed __int64 *)&CurrentPrcb->FeatureBits, 0x27u) )
    {
      v12 = __readmsr(0xDB0u);
      CurrentPrcb = (struct _KPRCB *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
      v13 = v12 | 1;
      if ( *((_BYTE *)v5 + 176) )
        CurrentPrcb = (struct _KPRCB *)v13;
      __writemsr(0xDB0u, (unsigned __int64)CurrentPrcb);
    }
  }
  v15[0] &= ~0x400u;
  if ( LOWORD(v15[0]) )
  {
    v6 = 10000LL * *((unsigned int *)v5 + 19);
    if ( v6 <= KeMaximumIncrement )
    {
      LODWORD(v7) = 0;
    }
    else
    {
      v6 -= KeMaximumIncrement;
      v7 = v6 / 0x2710;
    }
    PpmPerfTimeWindow = v7;
    if ( !PpmPerfControlStartPolicyUpdate
      || (LODWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides(v6), (int)CurrentPrcb >= 0) )
    {
      if ( a2 )
      {
        v8 = *(__int64 **)a2;
      }
      else
      {
        a2 = PpmPerfDomainHead;
        v8 = &PpmPerfDomainHead;
      }
      *(_QWORD *)&v16.Count = 2097153LL;
      memset_0(&v16.8, 0, sizeof(v16.8));
      while ( (__int64 *)a2 != v8 )
      {
        KiOrAffinityEx((struct _KAFFINITY_EX *)(a2 + 24), &v16, &v16, v16.Size);
        for ( i = 0; i < *(_DWORD *)(a2 + 296); ++i )
        {
          v11 = *(_QWORD *)(a2 + 312) + 1192LL * i;
          if ( *(_DWORD *)(v11 + 16) )
            PpmUpdateTargetProcessorPolicy(a2, (_QWORD *)v11, v15, (__int64)(v5 + 5));
        }
        a2 = *(_QWORD *)a2;
      }
      PopExecuteOnTargetProcessors(
        (__int64)&PpmPerfStatesRegistered,
        (__int64)PpmUpdateProcessorPolicyCallback,
        (__int64)v15,
        (__int64)(v5 + 5));
      LOWORD(CurrentPrcb) = PpmPerfControlCompletePolicyUpdate;
      if ( PpmPerfControlCompletePolicyUpdate )
        LOWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides(v9);
    }
  }
  return (__int16)CurrentPrcb;
}
