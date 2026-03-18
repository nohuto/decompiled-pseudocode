/*
 * XREFs of DifKeLeaveGuardedRegionWrapper @ 0x14062E6B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void DifKeLeaveGuardedRegionWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 *v4; // rdi
  int v5; // eax
  BOOLEAN v6; // si
  __int64 *i; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  BOOLEAN v11; // si
  _QWORD **v12; // rdi
  _QWORD *j; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp+8h] BYREF

  ReturnAddressForWrappers = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(273);
  v4 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_16;
  v5 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v5 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else if ( (v5 & 4) != 0 )
  {
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v6 = 0;
  if ( VfDifRunningWithoutReboot || (VfOptionFlags & 0x800) != 0 )
  {
    v6 = ExAcquireRundownProtection(&DifRebootlessRundown);
    if ( !v6 )
      goto LABEL_16;
  }
  for ( i = (__int64 *)v4[4]; i != v4 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers, v1, v2, v3);
  }
  if ( v6 )
  {
    ExReleaseRundownProtection_0(&DifRebootlessRundown);
    KeLeaveGuardedRegion();
  }
  else
  {
LABEL_16:
    KeLeaveGuardedRegion();
    if ( !v4 )
      return;
  }
  v11 = 0;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v11 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    v12 = (_QWORD **)(v4 + 6);
    for ( j = *v12; j != v12; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers, v8, v9, v10);
    }
    if ( v11 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
}
