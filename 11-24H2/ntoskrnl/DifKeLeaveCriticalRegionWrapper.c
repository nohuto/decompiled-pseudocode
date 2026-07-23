/*
 * XREFs of DifKeLeaveCriticalRegionWrapper @ 0x14062CB20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void DifKeLeaveCriticalRegionWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 *v2; // rdi
  int v3; // eax
  BOOLEAN v4; // si
  __int64 *i; // rbx
  __int64 v6; // rdx
  BOOLEAN v7; // si
  _QWORD **v8; // rdi
  _QWORD *j; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp+8h] BYREF

  ReturnAddressForWrappers = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(274);
  v2 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_16;
  v3 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v3 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else if ( (v3 & 4) != 0 )
  {
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v4 = 0;
  if ( VfDifRunningWithoutReboot || (VfOptionFlags & 0x800) != 0 )
  {
    v4 = ExAcquireRundownProtection_0(&DifRebootlessRundown);
    if ( !v4 )
      goto LABEL_16;
  }
  for ( i = (__int64 *)v2[4]; i != v2 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers, v1);
  }
  if ( v4 )
  {
    ExReleaseRundownProtection_0(&DifRebootlessRundown);
    KeLeaveCriticalRegion();
  }
  else
  {
LABEL_16:
    KeLeaveCriticalRegion();
    if ( !v2 )
      return;
  }
  v7 = 0;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    v8 = (_QWORD **)(v2 + 6);
    for ( j = *v8; j != v8; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers, v6);
    }
    if ( v7 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
}
