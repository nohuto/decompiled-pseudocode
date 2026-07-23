/*
 * XREFs of MiCreateInitialPfns @ 0x14066D630
 * Callers:
 *     MiInitializeNewPfns @ 0x14066CDA4 (MiInitializeNewPfns.c)
 *     MxInsertFreePages @ 0x140C54EE0 (MxInsertFreePages.c)
 *     MxInsertEnclaveBootPages @ 0x140C5A354 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     MiCopyPfnEntryRaw @ 0x1404386A0 (MiCopyPfnEntryRaw.c)
 */

__int64 __fastcall MiCreateInitialPfns(__int64 a1, __int64 a2, __int64 *a3)
{
  __m128i *v3; // r10
  __int64 v4; // r9
  __int64 result; // rax
  __m128i *v6; // rcx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  __m128i v13; // [rsp+20h] [rbp-38h] BYREF
  __m128i v14; // [rsp+30h] [rbp-28h] BYREF
  __m128i v15; // [rsp+40h] [rbp-18h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  MiCopyPfnEntryRaw((__int64)&v13, a3);
  result = 48 * v4;
  v6 = &v3[3 * v4];
  if ( (unsigned __int64)(48 * v4) <= 0x1000 )
  {
    if ( v3 != v6 )
    {
      v10 = _mm_loadu_si128(&v15);
      v11 = _mm_loadu_si128(&v14);
      v12 = _mm_loadu_si128(&v13);
      do
      {
        *v3 = v12;
        v3[1] = v11;
        v3[2] = v10;
        v3 += 3;
      }
      while ( v3 != v6 );
    }
  }
  else
  {
    if ( v3 != v6 )
    {
      v7 = _mm_loadu_si128(&v15);
      v8 = _mm_loadu_si128(&v14);
      v9 = _mm_loadu_si128(&v13);
      do
      {
        _mm_stream_si128(v3, v9);
        _mm_stream_si128(v3 + 1, v8);
        _mm_stream_si128(v3 + 2, v7);
        v3 += 3;
      }
      while ( v3 != v6 );
    }
    _mm_sfence();
  }
  return result;
}
