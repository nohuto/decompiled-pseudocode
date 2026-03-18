/*
 * XREFs of DifDllInitializeWrapper @ 0x140698F6C
 * Callers:
 *     MiIssueDllInitializeCall @ 0x1407D77CC (MiIssueDllInitializeCall.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetDriversGetVerifierData @ 0x140B97E9C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall DifDllInitializeWrapper(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *APIThunkContextById; // rsi
  __int64 VerifierData; // r12
  BOOLEAN v8; // bp
  __int64 *i; // rbx
  unsigned int v10; // eax
  unsigned int v11; // ebp
  BOOLEAN v12; // di
  _QWORD **v13; // rsi
  _QWORD *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h]

  v16 = 0LL;
  APIThunkContextById = 0LL;
  v17 = 0LL;
  VerifierData = VfTargetDriversGetVerifierData(a3);
  if ( VerifierData )
  {
    APIThunkContextById = DifGetAPIThunkContextById(0x80000000);
    if ( APIThunkContextById )
    {
      if ( (v8 = 0, *(_QWORD *)&v16 = a3, *((_QWORD *)&v16 + 1) = a1, *(_QWORD *)&v17 = a2, !VfDifRunningWithoutReboot)
        && (VfOptionFlags & 0x800) == 0
        || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
      {
        for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
        {
          if ( i != (__int64 *)16 )
            guard_dispatch_icall_no_overrides(&v16);
        }
        if ( v8 )
          ExReleaseRundownProtection_0(&DifRebootlessRundown);
      }
    }
  }
  v10 = guard_dispatch_icall_no_overrides(a1);
  v11 = v10;
  if ( VerifierData )
  {
    DWORD2(v17) = v10;
    if ( APIThunkContextById )
    {
      if ( (v12 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
        || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
      {
        v13 = (_QWORD **)(APIThunkContextById + 6);
        for ( j = *v13; j != v13; j = (_QWORD *)*j )
        {
          if ( j != (_QWORD *)16 )
            guard_dispatch_icall_no_overrides(&v16);
        }
        if ( v12 )
          ExReleaseRundownProtection_0(&DifRebootlessRundown);
      }
    }
  }
  return v11;
}
