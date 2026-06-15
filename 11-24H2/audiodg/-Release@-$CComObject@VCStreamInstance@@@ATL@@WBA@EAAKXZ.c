/*
 * XREFs of ?Release@?$CComObject@VCStreamInstance@@@ATL@@WBA@EAAKXZ @ 0x14005DC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CStreamInstance>::Release(__int64 a1)
{
  return ATL::CComObject<CStreamInstance>::Release((volatile int *)(a1 - 16));
}
