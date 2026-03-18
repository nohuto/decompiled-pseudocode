/*
 * XREFs of KeZeroPages @ 0x1406B3390
 * Callers:
 *     MiTryZeroMemory @ 0x14020BD20 (MiTryZeroMemory.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14021EFA0 (MiFillPhysicalPages.c)
 *     MiZeroLargePage @ 0x140308BDC (MiZeroLargePage.c)
 *     MiZeroWithUltraSpace @ 0x140308F60 (MiZeroWithUltraSpace.c)
 *     MiDoGangAssignment @ 0x1403A8984 (MiDoGangAssignment.c)
 *     MiFillMemory @ 0x14040A5D0 (MiFillMemory.c)
 *     MiPageNotZero @ 0x140673EAC (MiPageNotZero.c)
 *     MxMapVa @ 0x140C53144 (MxMapVa.c)
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
