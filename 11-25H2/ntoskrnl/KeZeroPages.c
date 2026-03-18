/*
 * XREFs of KeZeroPages @ 0x1406A80C0
 * Callers:
 *     MiTryZeroMemory @ 0x140210860 (MiTryZeroMemory.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiZeroWithUltraSpace @ 0x140224410 (MiZeroWithUltraSpace.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14024D8D0 (MiFillPhysicalPages.c)
 *     MiFillMemory @ 0x1404067B0 (MiFillMemory.c)
 *     MiDoGangAssignment @ 0x1404D4858 (MiDoGangAssignment.c)
 *     MiPageNotZero @ 0x14066844C (MiPageNotZero.c)
 *     MxMapVa @ 0x140C41F14 (MxMapVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroPages(__m128i *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 128LL;
  v3 = a2 >> 7;
  do
  {
    _mm_stream_si128(a1, (__m128i)0LL);
    _mm_stream_si128(a1 + 1, (__m128i)0LL);
    _mm_stream_si128(a1 + 2, (__m128i)0LL);
    _mm_stream_si128(a1 + 3, (__m128i)0LL);
    a1 += 8;
    _mm_stream_si128(a1 - 4, (__m128i)0LL);
    _mm_stream_si128(a1 - 3, (__m128i)0LL);
    --v3;
    _mm_stream_si128(a1 - 2, (__m128i)0LL);
    _mm_stream_si128(a1 - 1, (__m128i)0LL);
  }
  while ( v3 );
  _mm_sfence();
  return result;
}
