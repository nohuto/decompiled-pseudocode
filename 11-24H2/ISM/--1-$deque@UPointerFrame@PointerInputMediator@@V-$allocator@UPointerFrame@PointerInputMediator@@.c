/*
 * XREFs of ??1?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA@XZ @ 0x180095884
 * Callers:
 *     _dynamic_atexit_destructor_for__PointerInputMediator::s_frameLookaside__ @ 0x1801DA210 (_dynamic_atexit_destructor_for__PointerInputMediator--s_frameLookaside__.c)
 *     _dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueue__ @ 0x1801DA270 (_dynamic_atexit_destructor_for__PointerInputMediator--s_frameQueue__.c)
 * Callees:
 *     ?_Tidy@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXXZ @ 0x1800958B0 (-_Tidy@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 */

void __fastcall std::deque<PointerInputMediator::PointerFrame>::~deque<PointerInputMediator::PointerFrame>(char **a1)
{
  char *v2; // rcx

  std::deque<PointerInputMediator::PointerFrame>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
