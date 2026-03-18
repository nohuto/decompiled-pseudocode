/*
 * XREFs of DifExEnterPriorityRegionAndAcquireResourceSharedWrapper @ 0x1406122E0
 * Callers:
 *     <none>
 * Callees:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140293DB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall DifExEnterPriorityRegionAndAcquireResourceSharedWrapper(ULONG_PTR BugCheckParameter2)
{
  __int64 *APIThunkContextById; // rax
  struct _KTHREAD *v3; // rdx
  __int64 *v4; // rsi
  int v5; // eax
  BOOLEAN v6; // di
  __int64 *i; // rbx
  BOOLEAN v8; // di
  _QWORD **v9; // rsi
  _QWORD *j; // rbx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  PVOID v13; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v12 = 0LL;
  v13 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(402);
  v4 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v5 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v5 & 0x18) != 0 )
    {
      *(_QWORD *)&v12 = retaddr;
    }
    else if ( (v5 & 4) != 0 )
    {
      *(_QWORD *)&v12 = DifGetReturnAddressForWrappers();
    }
    v6 = 0;
    *((_QWORD *)&v12 + 1) = BugCheckParameter2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v4[4]; i != v4 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v12);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  v13 = ExEnterPriorityRegionAndAcquireResourceShared(BugCheckParameter2, v3);
  if ( v4 )
  {
    if ( (v8 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v9 = (_QWORD **)(v4 + 6);
      for ( j = *v9; j != v9; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v12);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v13;
}
