/*
 * XREFs of KeCopyPage @ 0x1406A8140
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiScrubPage @ 0x1403F0F94 (MiScrubPage.c)
 *     MiInitializeImageProtos @ 0x140453928 (MiInitializeImageProtos.c)
 *     MiCopyKstack @ 0x1406696F8 (MiCopyKstack.c)
 *     MiSlowRotateCopy @ 0x14066CA94 (MiSlowRotateCopy.c)
 *     MiCopyFilePage @ 0x14066EE80 (MiCopyFilePage.c)
 *     MiCopyMemoryPagefileData @ 0x140682A90 (MiCopyMemoryPagefileData.c)
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 *     MiRevertRelocatedImagePfn @ 0x140946F00 (MiRevertRelocatedImagePfn.c)
 *     KeCopyPage$thunk$17553164197770287351 @ 0x140BAF010 (KeCopyPage$thunk$17553164197770287351.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCopyPage(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm3

  result = -4096LL;
  v3 = a2 + 4096;
  v4 = a1 + 4096;
  do
  {
    v5 = *(__m128i *)(v3 + result + 16);
    v6 = *(__m128i *)(v3 + result + 32);
    v7 = *(__m128i *)(v3 + result + 48);
    _mm_stream_si128((__m128i *)(v4 + result), *(__m128i *)(v3 + result));
    _mm_stream_si128((__m128i *)(v4 + result + 16), v5);
    _mm_stream_si128((__m128i *)(v4 + result + 32), v6);
    _mm_stream_si128((__m128i *)(v4 + result + 48), v7);
    result += 64LL;
  }
  while ( result );
  _mm_sfence();
  return result;
}
