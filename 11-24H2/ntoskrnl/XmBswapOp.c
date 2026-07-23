/*
 * XREFs of XmBswapOp @ 0x140574530
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

_WORD *__fastcall XmBswapOp(__int64 a1)
{
  return XmStoreResult(a1, _byteswap_ulong(*(_DWORD *)(a1 + 108)));
}
