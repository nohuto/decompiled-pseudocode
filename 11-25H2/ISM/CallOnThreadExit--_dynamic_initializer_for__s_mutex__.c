/*
 * XREFs of CallOnThreadExit::_dynamic_initializer_for__s_mutex__ @ 0x180009D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int CallOnThreadExit::_dynamic_initializer_for__s_mutex__()
{
  _Mtx_init_in_situ((_Mtx_t)&unk_180246E98, 2);
  return atexit((void (__cdecl *)())CallOnThreadExit::_dynamic_atexit_destructor_for__s_mutex__);
}
