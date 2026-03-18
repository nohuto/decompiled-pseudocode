/*
 * XREFs of DifExDeleteFastResourceWrapper @ 0x140611450
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExpIsFastResourceOwned @ 0x1403DCB00 (ExpIsFastResourceOwned.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifExDeleteFastResourceWrapper(ULONG_PTR BugCheckParameter2)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v3; // rsi
  int v4; // eax
  BOOLEAN v5; // bp
  __int64 *i; // rdi
  unsigned __int8 CurrentIrql; // al
  BOOLEAN v8; // di
  _QWORD **v9; // rsi
  _QWORD *j; // rbx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v11 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(449);
  v3 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v4 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v4 & 0x18) != 0 )
    {
      *(_QWORD *)&v11 = retaddr;
    }
    else if ( (v4 & 4) != 0 )
    {
      *(_QWORD *)&v11 = DifGetReturnAddressForWrappers();
    }
    v5 = 0;
    *((_QWORD *)&v11 + 1) = BugCheckParameter2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v3[4]; i != v3 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v11);
      }
      if ( v5 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( ExpIsFastResourceOwned((_QWORD *)BugCheckParameter2) )
    KeBugCheckEx(0x1C6u, 4uLL, BugCheckParameter2, 0LL, 0LL);
  *(_WORD *)(BugCheckParameter2 + 26) &= 0xFFBEu;
  if ( v3 )
  {
    if ( (v8 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v9 = (_QWORD **)(v3 + 6);
      for ( j = *v9; j != v9; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v11);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
