/*
 * XREFs of DifExDeletePagedLookasideListWrapper @ 0x1406118E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExDeletePagedLookasideList @ 0x1404760B0 (ExDeletePagedLookasideList.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifExDeletePagedLookasideListWrapper(PPAGED_LOOKASIDE_LIST Lookaside)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v3; // rdi
  int v4; // eax
  BOOLEAN v5; // si
  __int64 *i; // rbx
  BOOLEAN v7; // si
  _QWORD **v8; // rdi
  _QWORD *j; // rbx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v10 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(408);
  v3 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v4 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v4 & 0x18) != 0 )
    {
      *(_QWORD *)&v10 = retaddr;
    }
    else if ( (v4 & 4) != 0 )
    {
      *(_QWORD *)&v10 = DifGetReturnAddressForWrappers();
    }
    v5 = 0;
    *((_QWORD *)&v10 + 1) = Lookaside;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v3[4]; i != v3 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v10);
      }
      if ( v5 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  ExDeletePagedLookasideList(Lookaside);
  if ( v3 )
  {
    if ( (v7 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v8 = (_QWORD **)(v3 + 6);
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v10);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
