/*
 * XREFs of ?GetPresentFlags@CLegacyRenderTarget@@MEBAIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801FDB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetPresentFlags(__int64 a1, _QWORD *a2)
{
  return *a2 == a2[1] ? 2 : 0;
}
