/*
 * XREFs of ?AddRef@?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x14005C7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComAggObject<CAudioDeviceGraph>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 8));
}
