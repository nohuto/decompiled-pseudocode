/*
 * XREFs of _dynamic_atexit_destructor_for__DelegatedInkCanvasProcessor::s_contextLock__ @ 0x1801DA2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__DelegatedInkCanvasProcessor::s_contextLock__()
{
  _Mtx_destroy_in_situ((_Mtx_t)&DelegatedInkCanvasProcessor::s_contextLock);
}
