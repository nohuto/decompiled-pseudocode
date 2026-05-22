/*
 * XREFs of ??1?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@QEAA@XZ @ 0x1800EF75C
 * Callers:
 *     ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800F3E24 (--1KeyboardOverriderDispatcher@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXXZ @ 0x1800F2B50 (-_Tidy@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<KeyboardEvent>::~deque<KeyboardEvent>(char **a1)
{
  char *v2; // rcx

  std::deque<KeyboardEvent>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
