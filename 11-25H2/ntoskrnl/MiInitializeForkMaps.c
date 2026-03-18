/*
 * XREFs of MiInitializeForkMaps @ 0x140AB7B44
 * Callers:
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 * Callees:
 *     MiMapSinglePage @ 0x140225164 (MiMapSinglePage.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiInitializeForkMaps(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // esi
  __m128i si128; // xmm0
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  v10 = 0LL;
  memset_0(a3, 0, 0xC8uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(__m128i *)(a3 + 1) = si128;
  a3[3] = si128.m128i_i64[0];
  *a3 = a2;
  MiInitializePageColorBase(a1 + 1024, 3, 0, (__int64)&v10);
  MiCreateUltraThreadContext((__int64)(a3 + 9), (__int64)&v10, 8, 0LL);
  if ( *((_BYTE *)a3 + 192) )
    return 1LL;
  v8 = MiMapSinglePage(0LL, 0LL, 1073741856, 2);
  a3[7] = v8;
  LOBYTE(v6) = v8 != 0;
  return v6;
}
