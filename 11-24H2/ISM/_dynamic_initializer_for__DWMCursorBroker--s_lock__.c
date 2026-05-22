/*
 * XREFs of _dynamic_initializer_for__DWMCursorBroker::s_lock__ @ 0x18000A220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__DWMCursorBroker::s_lock__()
{
  _Mtx_init_in_situ((_Mtx_t)&DWMCursorBroker::s_lock, 258);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__DWMCursorBroker::s_lock__);
}
