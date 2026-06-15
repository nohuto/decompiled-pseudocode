/*
 * XREFs of McGenEventRegister_EventRegister @ 0x18002D9B4
 * Callers:
 *     DllMain @ 0x18001ABB0 (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister_EventRegister()
{
  ULONG result; // eax

  result = 0;
  if ( !AUDIO_EVENT_PROVIDER_Context )
    return EventRegister(
             &AUDIO_EVENT_PROVIDER,
             (PENABLECALLBACK)McGenControlCallbackV2,
             &AUDIO_EVENT_PROVIDER_Context,
             &AUDIO_EVENT_PROVIDER_Context);
  return result;
}
