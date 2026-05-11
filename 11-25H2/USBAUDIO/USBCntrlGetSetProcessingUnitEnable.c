/*
 * XREFs of USBCntrlGetSetProcessingUnitEnable @ 0x140039AC0
 * Callers:
 *     TopologyProcessExtensionUnit @ 0x140031A20 (TopologyProcessExtensionUnit.c)
 *     TopologyProcessProcessUnit @ 0x140031F00 (TopologyProcessProcessUnit.c)
 * Callees:
 *     USBCntrlGetSetProcessingUnitValue @ 0x140039AF0 (USBCntrlGetSetProcessingUnitValue.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitEnable(int a1, int a2, int a3, __int64 a4)
{
  return USBCntrlGetSetProcessingUnitValue(a1, a2, a3, 1, a4, 1);
}
