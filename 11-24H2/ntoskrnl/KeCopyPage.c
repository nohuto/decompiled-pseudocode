/*
 * XREFs of KeCopyPage @ 0x1406B3410
 * Callers:
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiInitializeImageProtos @ 0x140313060 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiScrubPage @ 0x1403F5970 (MiScrubPage.c)
 *     MiCopyKstack @ 0x140675158 (MiCopyKstack.c)
 *     MiSlowRotateCopy @ 0x1406783E4 (MiSlowRotateCopy.c)
 *     MiCopyFilePage @ 0x14067A640 (MiCopyFilePage.c)
 *     MiCopyMemoryPagefileData @ 0x14068E320 (MiCopyMemoryPagefileData.c)
 *     MiValidateImagePfn @ 0x140957464 (MiValidateImagePfn.c)
 *     MiRevertRelocatedImagePfn @ 0x140957834 (MiRevertRelocatedImagePfn.c)
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 *     KeCopyPage$thunk$17553164197770287351 @ 0x140BC0010 (KeCopyPage$thunk$17553164197770287351.c)
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
