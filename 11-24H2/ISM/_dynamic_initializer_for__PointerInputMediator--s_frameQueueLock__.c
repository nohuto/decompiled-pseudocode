/*
 * XREFs of _dynamic_initializer_for__PointerInputMediator::s_frameQueueLock__ @ 0x18000A180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__PointerInputMediator::s_frameQueueLock__()
{
  _Mtx_init_in_situ((_Mtx_t)&PointerInputMediator::s_frameQueueLock, 2);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueueLock__);
}
