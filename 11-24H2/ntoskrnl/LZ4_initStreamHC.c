/*
 * XREFs of LZ4_initStreamHC @ 0x1404F7844
 * Callers:
 *     LZ4_compress_HC_extStateHC @ 0x1404D1CB4 (LZ4_compress_HC_extStateHC.c)
 *     LZ4_resetStreamHC_fast @ 0x1405FEFA4 (LZ4_resetStreamHC_fast.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_WORD *__fastcall LZ4_initStreamHC(_WORD *a1)
{
  _WORD *result; // rax

  if ( !a1 || ((unsigned __int8)a1 & 7) != 0 )
    return 0LL;
  memset_0(a1, 0, 0x40030uLL);
  result = a1;
  a1[131090] = 9;
  return result;
}
