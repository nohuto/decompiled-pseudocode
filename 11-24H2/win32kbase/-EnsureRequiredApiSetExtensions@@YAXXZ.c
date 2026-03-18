/*
 * XREFs of ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x140154660
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall EnsureRequiredApiSetExtensions(__int64 a1, __int64 a2)
{
  int (*v2)(void); // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int (*v8)(void); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1568LL);
  if ( !v2 || v2() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"xxxUnlockMenuState", 0LL, 0LL);
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48) + 1136LL);
  if ( !v5 || v5() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"HasHidTable", 0LL, 0LL);
  v8 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 1304LL);
  if ( !v8 || v8() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"LockQCursor", 0LL, 0LL);
}
