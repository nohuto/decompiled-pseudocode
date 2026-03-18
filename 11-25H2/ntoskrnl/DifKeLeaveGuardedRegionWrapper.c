/*
 * XREFs of DifKeLeaveGuardedRegionWrapper @ 0x1406226F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void DifKeLeaveGuardedRegionWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 *v1; // rdi
  int v2; // eax
  BOOLEAN v3; // si
  __int64 *i; // rbx
  BOOLEAN v5; // si
  _QWORD **v6; // rdi
  _QWORD *j; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp+8h] BYREF

  ReturnAddressForWrappers = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(273);
  v1 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_16;
  v2 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v2 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else if ( (v2 & 4) != 0 )
  {
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v3 = 0;
  if ( VfDifRunningWithoutReboot || (VfOptionFlags & 0x800) != 0 )
  {
    v3 = ExAcquireRundownProtection_0(&DifRebootlessRundown);
    if ( !v3 )
      goto LABEL_16;
  }
  for ( i = (__int64 *)v1[4]; i != v1 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers);
  }
  if ( v3 )
  {
    ExReleaseRundownProtection_0(&DifRebootlessRundown);
    KeLeaveGuardedRegion();
  }
  else
  {
LABEL_16:
    KeLeaveGuardedRegion();
    if ( !v1 )
      return;
  }
  v5 = 0;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    v6 = (_QWORD **)(v1 + 6);
    for ( j = *v6; j != v6; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers);
    }
    if ( v5 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
}
