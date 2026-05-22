/*
 * XREFs of _dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy::s_lock__ @ 0x1801D26C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy::s_lock__()
{
  DeleteCriticalSection(&VirtualTouchpadControllerProxy::s_lock);
}
