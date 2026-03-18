/*
 * XREFs of ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x1402155D4
 * Callers:
 *     ActivateKSTInputProcessingHelper @ 0x1402155F0 (ActivateKSTInputProcessingHelper.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140215790 (DeactivateKSTInputProcessingHelper.c)
 *     UserKSTInitialize @ 0x140215930 (UserKSTInitialize.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 */

bool __fastcall ShouldKSTInitializeHidSensor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned int)IsCurrentProcessDwm(a1, a2, a3, a4) == 0;
}
