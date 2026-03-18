/*
 * XREFs of LZ4_compress_HC_extStateHC_fastReset @ 0x1405F55A0
 * Callers:
 *     LZ4_compress_HC_extStateHC @ 0x1404D97E4 (LZ4_compress_HC_extStateHC.c)
 * Callees:
 *     LZ4_compressBound @ 0x1404430B0 (LZ4_compressBound.c)
 *     LZ4HC_compress_generic @ 0x1405EB03C (LZ4HC_compress_generic.c)
 *     LZ4HC_init_internal @ 0x1405F53C0 (LZ4HC_init_internal.c)
 *     LZ4_resetStreamHC_fast @ 0x1405F5624 (LZ4_resetStreamHC_fast.c)
 */

__int64 __fastcall LZ4_compress_HC_extStateHC_fastReset(__int64 a1, unsigned int *a2, _BYTE *a3, int a4, int a5)
{
  __int64 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = a4;
  if ( (a1 & 7) != 0 )
    return 0LL;
  LZ4_resetStreamHC_fast();
  LZ4HC_init_internal(a1, (__int64)a2);
  if ( a5 >= (int)LZ4_compressBound(v10) )
    return LZ4HC_compress_generic(a1, a2, a3, &v10, a5, v9, 0);
  else
    return LZ4HC_compress_generic(a1, a2, a3, &v10, a5, v9, 1);
}
