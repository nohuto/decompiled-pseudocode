/*
 * XREFs of DifExInitializeFastResourceWrapper @ 0x140612A00
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     ExInitializeFastResource2 @ 0x140490B40 (ExInitializeFastResource2.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifExInitializeFastResourceWrapper(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // r14d
  __int64 *APIThunkContextById; // rax
  __int64 *v5; // rsi
  int v6; // eax
  BOOLEAN v7; // bp
  __int64 *i; // rbx
  BOOLEAN v9; // di
  _QWORD **v10; // rsi
  _QWORD *j; // rbx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v13; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v12 = 0LL;
  v13 = 0LL;
  v3 = BugCheckParameter3;
  APIThunkContextById = DifGetAPIThunkContextById(446);
  v5 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v6 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v6 & 0x18) != 0 )
    {
      *(_QWORD *)&v12 = retaddr;
    }
    else if ( (v6 & 4) != 0 )
    {
      *(_QWORD *)&v12 = DifGetReturnAddressForWrappers();
    }
    v7 = 0;
    v13 = BugCheckParameter2;
    DWORD2(v12) = v3;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v5[4]; i != v5 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v12);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  ExInitializeFastResource2(BugCheckParameter2, v3, -1);
  if ( v5 )
  {
    if ( (v9 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v9 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v10 = (_QWORD **)(v5 + 6);
      for ( j = *v10; j != v10; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v12);
      }
      if ( v9 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
