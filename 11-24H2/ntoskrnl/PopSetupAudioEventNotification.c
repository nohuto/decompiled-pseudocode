/*
 * XREFs of PopSetupAudioEventNotification @ 0x140748D7C
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140A19320 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupAudioEventNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (unsigned int)&v1,
           (unsigned int)&WNF_SEB_AUDIO_ACTIVITY,
           1,
           0,
           (__int64)PopWnfAudioCallback,
           0LL);
}
