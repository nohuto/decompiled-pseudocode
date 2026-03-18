/*
 * XREFs of DifExDeleteFastResourceWrapper @ 0x14061D410
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ExpIsFastResourceOwned @ 0x1403E1460 (ExpIsFastResourceOwned.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifExDeleteFastResourceWrapper(ULONG_PTR BugCheckParameter2)
{
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rsi
  int v7; // eax
  BOOLEAN v8; // bp
  __int64 *i; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  BOOLEAN v14; // di
  _QWORD **v15; // rsi
  _QWORD *j; // rbx
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(449);
  v6 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v7 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v7 & 0x18) != 0 )
    {
      *(_QWORD *)&v17 = retaddr;
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_QWORD *)&v17 = DifGetReturnAddressForWrappers();
    }
    v8 = 0;
    *((_QWORD *)&v17 + 1) = BugCheckParameter2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v6[4]; i != v6 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v17, v3, v4, v5);
      }
      if ( v8 )
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
  if ( v6 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v15 = (_QWORD **)(v6 + 6);
      for ( j = *v15; j != v15; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v17, v11, v12, v13);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
