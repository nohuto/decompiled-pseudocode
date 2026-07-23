/*
 * XREFs of LZ4_initStream @ 0x18011CDD4
 * Callers:
 *     LZ4_compress_fast_extState @ 0x180109D3C (LZ4_compress_fast_extState.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void *__fastcall LZ4_initStream(void *a1)
{
  if ( !a1 || ((unsigned __int8)a1 & 7) != 0 )
    return 0LL;
  memset_thunk_772440563353939046(a1, 0, 0x4020uLL);
  return a1;
}
