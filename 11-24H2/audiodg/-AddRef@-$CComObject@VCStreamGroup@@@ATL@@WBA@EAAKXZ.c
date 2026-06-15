/*
 * XREFs of ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x140065260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CStreamGroup>::AddRef(__int64 a1)
{
  return ATL::CComObject<CStreamGroup>::AddRef(a1 - 16);
}
