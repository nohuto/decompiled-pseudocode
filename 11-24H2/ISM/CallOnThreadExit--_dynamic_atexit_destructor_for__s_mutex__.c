/*
 * XREFs of CallOnThreadExit::_dynamic_atexit_destructor_for__s_mutex__ @ 0x1801DA130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CallOnThreadExit::_dynamic_atexit_destructor_for__s_mutex__()
{
  _Mtx_destroy_in_situ((_Mtx_t)&unk_180250E60);
}
