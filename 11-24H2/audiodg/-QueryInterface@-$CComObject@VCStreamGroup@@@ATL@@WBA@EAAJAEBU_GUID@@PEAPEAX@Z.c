/*
 * XREFs of ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400658A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CStreamGroup>::QueryInterface(__int64 a1, const struct _GUID *a2, char **a3)
{
  return ATL::CComObject<CStreamGroup>::QueryInterface((CStreamGroup *)(a1 - 16), a2, a3);
}
