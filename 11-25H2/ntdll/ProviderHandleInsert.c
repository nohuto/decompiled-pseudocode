/*
 * XREFs of ProviderHandleInsert @ 0x180045860
 * Callers:
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 */

__int64 __fastcall ProviderHandleInsert(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  volatile __int64 *v7; // r8
  unsigned int v8; // esi
  unsigned int v10; // ebp
  _QWORD *Heap; // r10
  unsigned int v12; // r9d
  __m128i v13; // xmm0
  __m128i si128; // xmm5
  __m128 v15; // xmm6
  unsigned int v16; // r15d
  __m128 v17; // xmm4
  __m128i v18; // xmm7
  __int64 v19; // rcx
  __m128i v20; // xmm3
  __m128i v21; // xmm2
  __m128i v22; // xmm2
  __m128i v23; // xmm2
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx

  RtlAcquireSRWLockExclusive(&stru_1801D02E8);
  v5 = dword_1801D02E0;
  v6 = 0;
  if ( !dword_1801D02E0
    || (unsigned int)dword_1801D02E0 >> 4 >= dword_18019C7E0[((unsigned __int64)(unsigned int)dword_1801D02E0 >> 1) & 7] )
  {
    if ( (unsigned __int8)byte_1801D02E4 >= 8u
      || (v10 = dword_18019C7E0[(unsigned __int8)byte_1801D02E4],
          (Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8LL * v10)) == 0LL) )
    {
      v8 = 14;
      goto LABEL_4;
    }
    v12 = 0;
    v5 = (2 * (byte_1801D02E4 & 7)) | 1;
    v13 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
    if ( v10 )
    {
      if ( v10 < 4 )
        goto LABEL_17;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v15 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
      v16 = 2;
      v17 = _mm_and_ps((__m128)_mm_unpacklo_epi32(_mm_move_epi64(v13), (__m128i)0LL), (__m128)_xmm);
      v18 = _mm_load_si128((const __m128i *)&_xmm);
      do
      {
        v19 = v12;
        v20 = _mm_move_epi64(v18);
        v21 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v12), 0), v20);
        v12 += 4;
        v22 = (__m128i)_mm_or_ps(
                         _mm_and_ps(
                           (__m128)_mm_unpacklo_epi32(
                                     _mm_add_epi32(_mm_slli_epi32(v21, 4u), _mm_move_epi64(si128)),
                                     (__m128i)0LL),
                           v15),
                         v17);
        Heap[v19] = v22.m128i_i64[0];
        Heap[v16 - 1] = _mm_srli_si128(v22, 8).m128i_u64[0];
        v23 = (__m128i)_mm_or_ps(
                         _mm_and_ps(
                           (__m128)_mm_unpacklo_epi32(
                                     _mm_add_epi32(
                                       _mm_slli_epi32(
                                         _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v16), 0), v20),
                                         4u),
                                       _mm_move_epi64(si128)),
                                     (__m128i)0LL),
                           v15),
                         v17);
        Heap[v16] = v23.m128i_i64[0];
        v24 = v16 + 1;
        v16 += 4;
        Heap[v24] = _mm_srli_si128(v23, 8).m128i_u64[0];
      }
      while ( v12 != (v10 & 0xFFFFFFFC) );
      if ( v12 != v10 )
      {
LABEL_17:
        do
        {
          v25 = v5 | (unsigned __int64)(16 * (v12 + 1));
          v26 = v12++;
          Heap[v26] = v25;
        }
        while ( v12 != v10 );
      }
    }
    _InterlockedExchange64(&qword_1801D02A0[(unsigned __int8)byte_1801D02E4++], (__int64)Heap);
  }
  v7 = (volatile __int64 *)(qword_1801D02A0[(v5 >> 1) & 7] + 8 * ((unsigned __int64)v5 >> 4));
  dword_1801D02E0 = *(_DWORD *)v7;
  _InterlockedExchange64(v7, a2);
  v8 = 0;
  v6 = v5;
LABEL_4:
  *a3 = v6;
  RtlReleaseSRWLockExclusive(&stru_1801D02E8);
  return v8;
}
