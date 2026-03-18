/*
 * XREFs of PopInitVideoWnfState @ 0x140C1C168
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

__int64 PopInitVideoWnfState()
{
  int v1; // [rsp+50h] [rbp+8h] BYREF

  ZwUpdateWnfStateData((__int64)&WNF_PO_VIDEO_INITIALIALIZED, (__int64)&PopVideoInitialized);
  ZwUpdateWnfStateData(
    (__int64)&WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
    (__int64)&PopVideoHighPrecisionBrightnessEnabled);
  v1 = 100;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_BRIGHTNESS_ALS_OFFSET, (__int64)&v1);
}
