/*
 * XREFs of ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00BE650
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsCleanupW32ThreadLocksSupported @ 0x1C0050FBC (IsCleanupW32ThreadLocksSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void EnsureRequiredApiSetExtensions(void)
{
  if ( !qword_1C0295448 || (int)qword_1C0295448() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PushW32ThreadLock", 0LL, 0LL);
  if ( !qword_1C0295458 || (int)qword_1C0295458() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopW32ThreadLock", 0LL, 0LL);
  if ( !qword_1C0295540 || (int)qword_1C0295540() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeW32ThreadLock", 0LL, 0LL);
  if ( !qword_1C0295550 || (int)qword_1C0295550() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeAlwaysW32ThreadLock", 0LL, 0LL);
  if ( (int)IsCleanupW32ThreadLocksSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"CleanupW32ThreadLocks", 0LL, 0LL);
  if ( !qword_1C0295680 || (int)qword_1C0295680() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"xxxUnlockMenuState", 0LL, 0LL);
  if ( !qword_1C0295488 || (int)qword_1C0295488() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"HasHidTable", 0LL, 0LL);
  if ( !qword_1C0295560 || (int)qword_1C0295560() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"LockQCursor", 0LL, 0LL);
}
