/*
 * XREFs of ?AddRef@?$CComObject@VCAudioPump@@@ATL@@UEAAKXZ @ 0x1400565F0
 * Callers:
 *     ?AddRef@?$CComObject@VCAudioPump@@@ATL@@W7EAAKXZ @ 0x140064550 (-AddRef@-$CComObject@VCAudioPump@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CAudioPump>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 16));
}
