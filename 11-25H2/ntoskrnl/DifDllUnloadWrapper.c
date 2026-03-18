/*
 * XREFs of DifDllUnloadWrapper @ 0x1406990E0
 * Callers:
 *     MiUnloadApproved @ 0x1407D79F4 (MiUnloadApproved.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetDriversGetVerifierData @ 0x140B97E9C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall DifDllUnloadWrapper(__int64 a1)
{
  __int64 *APIThunkContextById; // rdi
  __int64 v3; // rcx
  __int64 VerifierData; // r15
  BOOLEAN v5; // bp
  __int64 *i; // rbx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // eax
  BOOLEAN v10; // si
  __int64 *v11; // r14
  __int64 *j; // rdi
  _OWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF

  v14[0] = 0LL;
  APIThunkContextById = 0LL;
  VerifierData = VfTargetDriversGetVerifierData(a1);
  if ( !VerifierData )
    goto LABEL_13;
  APIThunkContextById = DifGetAPIThunkContextById(-2147483647);
  if ( !APIThunkContextById )
    goto LABEL_13;
  v5 = 0;
  *(_QWORD *)&v14[0] = a1;
  if ( VfDifRunningWithoutReboot || (VfOptionFlags & 0x800) != 0 )
  {
    v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown);
    if ( !v5 )
      goto LABEL_13;
  }
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      guard_dispatch_icall_no_overrides(v14);
  }
  if ( v5 )
  {
    ExReleaseRundownProtection_0(&DifRebootlessRundown);
    v8 = guard_dispatch_icall_no_overrides(v7);
    DWORD2(v14[0]) = v8;
  }
  else
  {
LABEL_13:
    v9 = guard_dispatch_icall_no_overrides(v3);
    v8 = v9;
    if ( !VerifierData )
      return v8;
    DWORD2(v14[0]) = v9;
    if ( !APIThunkContextById )
      return v8;
  }
  v10 = 0;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v10 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    v11 = APIThunkContextById + 6;
    for ( j = (__int64 *)APIThunkContextById[6]; j != v11; j = (__int64 *)*j )
    {
      if ( j != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v14);
    }
    if ( v10 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
  return v8;
}
