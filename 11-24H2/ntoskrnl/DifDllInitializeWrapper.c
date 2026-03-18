/*
 * XREFs of DifDllInitializeWrapper @ 0x1406A419C
 * Callers:
 *     MiIssueDllInitializeCall @ 0x1407E7684 (MiIssueDllInitializeCall.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetDriversGetVerifierData @ 0x140BA7E7C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall DifDllInitializeWrapper(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *APIThunkContextById; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 VerifierData; // r12
  BOOLEAN v11; // bp
  __int64 *i; // rbx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebp
  BOOLEAN v18; // di
  _QWORD **v19; // rsi
  _QWORD *j; // rbx
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int128 v23; // [rsp+30h] [rbp-28h]

  v22 = 0LL;
  APIThunkContextById = 0LL;
  v23 = 0LL;
  VerifierData = VfTargetDriversGetVerifierData(a3);
  if ( VerifierData )
  {
    APIThunkContextById = DifGetAPIThunkContextById(0x80000000);
    if ( APIThunkContextById )
    {
      if ( (v11 = 0, *(_QWORD *)&v22 = a3, *((_QWORD *)&v22 + 1) = a1, *(_QWORD *)&v23 = a2, !VfDifRunningWithoutReboot)
        && (VfOptionFlags & 0x800) == 0
        || (v11 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
      {
        for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
        {
          if ( i != (__int64 *)16 )
            guard_dispatch_icall_no_overrides(&v22, v7, v8, v9);
        }
        if ( v11 )
          ExReleaseRundownProtection_0(&DifRebootlessRundown);
      }
    }
  }
  v13 = guard_dispatch_icall_no_overrides(a1, v7, v8, v9);
  v17 = v13;
  if ( VerifierData )
  {
    DWORD2(v23) = v13;
    if ( APIThunkContextById )
    {
      if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
        || (v18 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
      {
        v19 = (_QWORD **)(APIThunkContextById + 6);
        for ( j = *v19; j != v19; j = (_QWORD *)*j )
        {
          if ( j != (_QWORD *)16 )
            guard_dispatch_icall_no_overrides(&v22, v14, v15, v16);
        }
        if ( v18 )
          ExReleaseRundownProtection_0(&DifRebootlessRundown);
      }
    }
  }
  return v17;
}
