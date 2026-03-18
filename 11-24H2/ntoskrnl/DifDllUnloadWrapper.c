/*
 * XREFs of DifDllUnloadWrapper @ 0x1406A4310
 * Callers:
 *     MiUnloadApproved @ 0x1407E78AC (MiUnloadApproved.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetDriversGetVerifierData @ 0x140BA7E7C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall DifDllUnloadWrapper(__int64 a1)
{
  __int64 *APIThunkContextById; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 VerifierData; // r15
  BOOLEAN v8; // bp
  __int64 *i; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  BOOLEAN v19; // si
  __int64 *v20; // r14
  __int64 *j; // rdi
  _OWORD v23[2]; // [rsp+20h] [rbp-28h] BYREF

  v23[0] = 0LL;
  APIThunkContextById = 0LL;
  VerifierData = VfTargetDriversGetVerifierData(a1);
  if ( !VerifierData )
    goto LABEL_13;
  APIThunkContextById = DifGetAPIThunkContextById(-2147483647);
  if ( !APIThunkContextById )
    goto LABEL_13;
  v8 = 0;
  *(_QWORD *)&v23[0] = a1;
  if ( VfDifRunningWithoutReboot || (VfOptionFlags & 0x800) != 0 )
  {
    v8 = ExAcquireRundownProtection(&DifRebootlessRundown);
    if ( !v8 )
      goto LABEL_13;
  }
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      guard_dispatch_icall_no_overrides(v23, v3, v5, v6);
  }
  if ( v8 )
  {
    ExReleaseRundownProtection_0(&DifRebootlessRundown);
    v15 = guard_dispatch_icall_no_overrides(v11, v10, v12, v13);
    DWORD2(v23[0]) = v15;
  }
  else
  {
LABEL_13:
    v18 = guard_dispatch_icall_no_overrides(v4, v3, v5, v6);
    v15 = v18;
    if ( !VerifierData )
      return v15;
    DWORD2(v23[0]) = v18;
    if ( !APIThunkContextById )
      return v15;
  }
  v19 = 0;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    v20 = APIThunkContextById + 6;
    for ( j = (__int64 *)APIThunkContextById[6]; j != v20; j = (__int64 *)*j )
    {
      if ( j != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v23, v14, v16, v17);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
  return v15;
}
