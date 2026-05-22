/*
 * XREFs of _dynamic_initializer_for__DelegatedInkCanvasProcessor::s_contextLock__ @ 0x18000A440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__DelegatedInkCanvasProcessor::s_contextLock__()
{
  _Mtx_init_in_situ((_Mtx_t)&DelegatedInkCanvasProcessor::s_contextLock, 2);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__DelegatedInkCanvasProcessor::s_contextLock__);
}
