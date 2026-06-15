/*
 * XREFs of _dynamic_atexit_destructor_for__g_csAudioActivityPayload__ @ 0x140097A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_csAudioActivityPayload__()
{
  DeleteCriticalSection(&g_csAudioActivityPayload);
}
