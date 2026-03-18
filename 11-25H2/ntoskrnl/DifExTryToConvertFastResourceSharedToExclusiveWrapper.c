/*
 * XREFs of DifExTryToConvertFastResourceSharedToExclusiveWrapper @ 0x140615560
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14064AB90 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall DifExTryToConvertFastResourceSharedToExclusiveWrapper(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v5; // rsi
  int v6; // eax
  BOOLEAN v7; // bp
  __int64 *i; // rbx
  BOOLEAN v9; // di
  _QWORD **v10; // rsi
  _QWORD *j; // rbx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v13 = 0LL;
  v14 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(458);
  v5 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v6 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v6 & 0x18) != 0 )
    {
      *(_QWORD *)&v13 = retaddr;
    }
    else if ( (v6 & 4) != 0 )
    {
      *(_QWORD *)&v13 = DifGetReturnAddressForWrappers();
    }
    v7 = 0;
    *(_QWORD *)&v14 = BugCheckParameter2;
    *((_QWORD *)&v13 + 1) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v5[4]; i != v5 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v13);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  BYTE8(v14) = ExTryToConvertFastResourceSharedToExclusive(BugCheckParameter2, a2);
  if ( v5 )
  {
    if ( (v9 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v9 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v10 = (_QWORD **)(v5 + 6);
      for ( j = *v10; j != v10; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v13);
      }
      if ( v9 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return BYTE8(v14);
}
