/*
 * XREFs of _dynamic_initializer_for__g_csAudioActivityPayload__ @ 0x140002B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_csAudioActivityPayload__()
{
  InitializeCriticalSectionEx(&g_csAudioActivityPayload, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_csAudioActivityPayload__);
}
