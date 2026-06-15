/*
 * XREFs of McGenEventUnregister_EventUnregister @ 0x18002B404
 * Callers:
 *     DllMain @ 0x18001ACE0 (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister_EventUnregister()
{
  ULONG result; // eax

  if ( !AUDIO_EVENT_PROVIDER_Context )
    return 0;
  result = EventUnregister(AUDIO_EVENT_PROVIDER_Context);
  AUDIO_EVENT_PROVIDER_Context = 0LL;
  return result;
}
