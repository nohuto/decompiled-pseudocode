/*
 * XREFs of ?AddRef@?$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ @ 0x14005C8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CAudioProcessor>::AddRef(__int64 a1)
{
  return ATL::CComObject<CStreamInstance>::AddRef(a1 - 16);
}
