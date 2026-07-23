/*
 * XREFs of LZ4_initStreamHC @ 0x180152F88
 * Callers:
 *     LZ4_compress_HC_extStateHC @ 0x180152EA4 (LZ4_compress_HC_extStateHC.c)
 *     LZ4_resetStreamHC_fast @ 0x180152FC8 (LZ4_resetStreamHC_fast.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

_WORD *__fastcall LZ4_initStreamHC(_WORD *a1)
{
  _WORD *result; // rax

  if ( !a1 || ((unsigned __int8)a1 & 7) != 0 )
    return 0LL;
  memset_thunk_772440563353939046(a1, 0, 0x40030uLL);
  result = a1;
  a1[131090] = 9;
  return result;
}
