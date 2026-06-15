/*
 * XREFs of ?AddRef@?$CComObject@VCAudioPump@@@ATL@@W7EAAKXZ @ 0x140064550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CAudioPump>::AddRef(__int64 a1)
{
  return ATL::CComObject<CAudioPump>::AddRef(a1 - 8);
}
