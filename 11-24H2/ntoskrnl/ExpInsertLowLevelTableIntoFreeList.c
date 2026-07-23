/*
 * XREFs of ExpInsertLowLevelTableIntoFreeList @ 0x14094D60C
 * Callers:
 *     ExpAllocateHandleTable @ 0x14094D2D4 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14094D498 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall ExpInsertLowLevelTableIntoFreeList(
        volatile signed __int32 *a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        char a4)
{
  __m128i v5; // xmm2
  unsigned int v7; // r8d
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r11
  unsigned int v10; // eax
  __m128i v11; // xmm1
  char *v12; // rax
  char *v13; // rsi
  unsigned __int64 v14; // rcx
  __m128i v15; // [rsp+20h] [rbp-18h]

  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( a4 )
  {
    v7 = 1;
    v8 = a2 + 3;
    v9 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    do
    {
      v10 = v7 + 1;
      v15.m128i_i64[0] = _xmm;
      v7 += 2;
      *(v8 - 1) = 0LL;
      v11 = _mm_add_epi64(
              _mm_slli_epi64(
                _mm_unpacklo_epi32(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v10), 0), v15), (__m128i)0LL),
                4u),
              v5);
      *v8 = v11.m128i_i64[0];
      v8[2] = _mm_srli_si128(v11, 8).m128i_u64[0];
      v8[1] = v9;
      v8 += 4;
    }
    while ( v7 < 0xFF );
    a2[510] = 0LL;
    a2[511] = 0LL;
  }
  _InterlockedAdd(a1, 0x400u);
  if ( a4 )
  {
    v12 = (char *)KeAbPreAcquire((__int64)a3, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
      ExfAcquirePushLockExclusiveEx(a3, v12, (__int64)a3);
    if ( v13 )
      v13[10] = 1;
    v14 = (unsigned __int64)(a2 + 2);
    if ( a3[1] )
      *(_QWORD *)(a3[2] + 8) = v14;
    else
      a3[1] = v14;
    a3[2] = (unsigned __int64)(a2 + 510);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a3);
    KeAbPostRelease((ULONG_PTR)a3);
  }
}
