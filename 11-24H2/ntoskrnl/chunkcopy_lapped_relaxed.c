/*
 * XREFs of chunkcopy_lapped_relaxed @ 0x1406019BC
 * Callers:
 *     inflate_fast_chunk_ @ 0x140601B7C (inflate_fast_chunk_.c)
 * Callees:
 *     chunkcopy_core @ 0x1405F3E0C (chunkcopy_core.c)
 *     chunkset_core_0 @ 0x1406019EC (chunkset_core_0.c)
 */

_OWORD *__fastcall chunkcopy_lapped_relaxed(_OWORD *a1, unsigned int a2, unsigned int a3)
{
  if ( a2 >= a3 || a2 >= 0x10 )
    return chunkcopy_core(a1, (_OWORD *)((char *)a1 - a2), a3);
  else
    return (_OWORD *)chunkset_core_0();
}
