/*
 * XREFs of XmBswapOp @ 0x1405770A0
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x14046959C (XmStoreResult.c)
 */

_WORD *__fastcall XmBswapOp(__int64 a1)
{
  return XmStoreResult(a1, _byteswap_ulong(*(_DWORD *)(a1 + 108)));
}
