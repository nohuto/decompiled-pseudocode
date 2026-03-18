/*
 * XREFs of DifKeRaiseIrqlToDpcLevelWrapper @ 0x14062EAF0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char DifKeRaiseIrqlToDpcLevelWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 *v4; // rdi
  int v5; // eax
  BOOLEAN v6; // si
  __int64 *i; // rbx
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rdx
  BOOLEAN v10; // si
  _QWORD **v11; // rdi
  _QWORD *j; // rbx
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v14 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(270);
  v4 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v5 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v5 & 0x18) != 0 )
    {
      *(_QWORD *)&v14 = retaddr;
    }
    else if ( (v5 & 4) != 0 )
    {
      *(_QWORD *)&v14 = DifGetReturnAddressForWrappers();
    }
    v6 = 0;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v4[4]; i != v4 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v14, v1, v2, v3);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  v9 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  BYTE8(v14) = CurrentIrql;
  if ( v4 )
  {
    if ( (v10 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v10 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v11 = (_QWORD **)(v4 + 6);
      for ( j = *v11; j != v11; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v14, v9, v2, v3);
      }
      if ( v10 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return BYTE8(v14);
}
