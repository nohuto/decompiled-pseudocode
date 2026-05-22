/*
 * XREFs of ??1?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@QEAA@XZ @ 0x1800EE4AC
 * Callers:
 *     ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800F2154 (--1KeyboardOverriderDispatcher@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXXZ @ 0x1800F0FB0 (-_Tidy@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<KeyboardEvent>::~deque<KeyboardEvent>(char **a1)
{
  char *v2; // rcx

  std::deque<KeyboardEvent>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
