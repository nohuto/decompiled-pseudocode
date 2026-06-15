/*
 * XREFs of ?AddRef@?$CComObject@VCAudioPump@@@ATL@@UEAAKXZ @ 0x1400566C0
 * Callers:
 *     ?AddRef@?$CComObject@VCAudioPump@@@ATL@@W7EAAKXZ @ 0x1400645C0 (-AddRef@-$CComObject@VCAudioPump@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CAudioPump>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 16));
}
