/*
 * XREFs of DifKeRaiseIrqlToDpcLevelWrapper @ 0x140622B30
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char DifKeRaiseIrqlToDpcLevelWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 *v1; // rdi
  int v2; // eax
  BOOLEAN v3; // si
  __int64 *i; // rbx
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v6; // si
  _QWORD **v7; // rdi
  _QWORD *j; // rbx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v10 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(270);
  v1 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v2 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v2 & 0x18) != 0 )
    {
      *(_QWORD *)&v10 = retaddr;
    }
    else if ( (v2 & 4) != 0 )
    {
      *(_QWORD *)&v10 = DifGetReturnAddressForWrappers();
    }
    v3 = 0;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v3 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v1[4]; i != v1 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v10);
      }
      if ( v3 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  BYTE8(v10) = CurrentIrql;
  if ( v1 )
  {
    if ( (v6 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v7 = (_QWORD **)(v1 + 6);
      for ( j = *v7; j != v7; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v10);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return BYTE8(v10);
}
