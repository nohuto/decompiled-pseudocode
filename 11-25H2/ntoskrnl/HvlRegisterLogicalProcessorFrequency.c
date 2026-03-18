/*
 * XREFs of HvlRegisterLogicalProcessorFrequency @ 0x1404BEEC0
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1403E955C (PpmScaleIdleStateValues.c)
 * Callees:
 *     HvlpSetPowerProperty @ 0x1404BEF1C (HvlpSetPowerProperty.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HvlRegisterLogicalProcessorFrequency(int a1, int a2)
{
  _DWORD v5[138]; // [rsp+20h] [rbp-228h] BYREF

  v5[1] = 0;
  memset_0(v5, 0, 0x214uLL);
  v5[0] = 2;
  v5[2] = a1;
  v5[4] = a2;
  return HvlpSetPowerProperty(v5);
}
