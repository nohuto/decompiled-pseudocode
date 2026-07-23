/*
 * XREFs of LZ4_compressBound @ 0x14043A0C0
 * Callers:
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x1405FEF20 (LZ4_compress_HC_extStateHC_fastReset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LZ4_compressBound(signed int a1)
{
  if ( (unsigned int)a1 > 0x7E000000 )
    return 0LL;
  else
    return a1
         + ((int)((unsigned __int64)(2155905153LL * a1) >> 32) >> 7)
         + ((unsigned int)((unsigned __int64)(2155905153LL * a1) >> 32) >> 31)
         + 16;
}
