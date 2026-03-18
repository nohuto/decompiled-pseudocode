/*
 * XREFs of DifExReleaseFastResourceWrapper @ 0x140614A10
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifExReleaseFastResourceWrapper(ULONG_PTR BugCheckParameter2, __int64 *BugCheckParameter3)
{
  __int64 *APIThunkContextById; // rax
  __int64 v5; // r8
  __int64 *v6; // rsi
  int v7; // eax
  BOOLEAN v8; // bp
  __int64 *i; // rbx
  BOOLEAN v10; // di
  _QWORD **v11; // rsi
  _QWORD *j; // rbx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v14; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v13 = 0LL;
  v14 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(452);
  v6 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v7 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v7 & 0x18) != 0 )
    {
      *(_QWORD *)&v13 = retaddr;
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_QWORD *)&v13 = DifGetReturnAddressForWrappers();
    }
    v8 = 0;
    v14 = BugCheckParameter2;
    *((_QWORD *)&v13 + 1) = BugCheckParameter3;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v6[4]; i != v6 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v13);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  ExReleaseFastResource(BugCheckParameter2, BugCheckParameter3, v5);
  if ( v6 )
  {
    if ( (v10 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v10 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v11 = (_QWORD **)(v6 + 6);
      for ( j = *v11; j != v11; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v13);
      }
      if ( v10 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
