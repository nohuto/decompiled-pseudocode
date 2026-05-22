/*
 * XREFs of _dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueueLock__ @ 0x1801D26E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueueLock__()
{
  _Mtx_destroy_in_situ((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
}
