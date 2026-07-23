/*
 * XREFs of MiInitializeAllResidentPageBasePfns @ 0x14044F1DC
 * Callers:
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MxInsertFreePages @ 0x140C54EE0 (MxInsertFreePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiSetFreeZeroPfnCold @ 0x140423EE0 (MiSetFreeZeroPfnCold.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiInitializeAllResidentPageBasePfns(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v7; // r10
  __int64 v10; // r11
  __int64 v11; // rax
  unsigned __int8 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int8 CurrentIrql; // di
  char v18; // r11
  __int8 v19; // cl
  __m128i *v20; // rax
  __int64 v21; // rsi
  int v22; // r15d
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __m128i v26; // [rsp+20h] [rbp-30h] BYREF
  __m128i v27; // [rsp+30h] [rbp-20h] BYREF
  __m128i v28; // [rsp+40h] [rbp-10h] BYREF
  __int32 v29; // [rsp+98h] [rbp+48h]

  v7 = 0LL;
  v26 = 0LL;
  v10 = 6LL;
  v27 = 0LL;
  v28 = 0LL;
  do
  {
    v26.m128i_i64[v7] = *(_QWORD *)((char *)&unk_140E2FFB0 + v7 * 8);
    ++v7;
    --v10;
  }
  while ( v10 );
  v11 = a4;
  v12 = ~(_BYTE)a4;
  v13 = MiPageSizes[v11];
  v28.m128i_i64[1] = ((unsigned __int64)*a1 << 43) ^ (v28.m128i_i64[1] ^ ((unsigned __int64)*a1 << 43)) & 0xFFE007FFFFFFFFFFuLL;
  v14 = v12 << 27;
  v28.m128i_i32[1] = v14 ^ (v28.m128i_i32[1] ^ (v12 << 27)) & 0xE7FFFFFF;
  v15 = 0xFFFFDE0000000000uLL;
  v16 = 48 * a2 - 0x220000000000LL;
  if ( a7 )
  {
    CurrentIrql = 17;
    v27.m128i_i64[1] |= 0x8000000000000000uLL;
  }
  else
  {
    if ( (MiFlags & 0x30) != 0 )
    {
      v15 = 0x8000000000000000uLL;
      v27.m128i_i64[1] |= 0x8000000000000000uLL;
    }
    CurrentIrql = KeGetCurrentIrql();
    v14 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v15) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v15, 2LL);
    }
  }
  v29 = v28.m128i_i32[0];
  BYTE2(v29) = ((_BYTE)a5 << 6) | v28.m128i_i8[2] & 0x3F;
  v28.m128i_i32[0] = v29;
  v18 = BYTE2(v29);
  v19 = BYTE2(v29) & 0xF8 | 5;
  v28.m128i_i8[2] = v19;
  if ( !a6 )
  {
    MiSetFreeZeroPfnCold((__int64)&v26, 1);
    v19 = v28.m128i_i8[2];
  }
  LOBYTE(v20) = (v18 ^ v19) & 7;
  v28.m128i_i8[2] = (unsigned __int8)v20 ^ v19;
  if ( a3 )
  {
    v21 = v16;
    do
    {
      v22 = 0;
      if ( !a7 && (MiFlags & 0x30) != 0 )
      {
        a5 = 0;
        v22 = 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((unsigned int *)&a5);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
      }
      v20 = (__m128i *)v16;
      do
      {
        v23 = _mm_loadu_si128(&v27);
        *v20 = _mm_loadu_si128(&v26);
        v24 = _mm_loadu_si128(&v28);
        v20[1] = v23;
        v20[2] = v24;
        v20 += 3;
      }
      while ( v20 != (__m128i *)(v16 + 48) );
      if ( v22 )
      {
        LOBYTE(v20) = -1;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v21 += 48 * v13;
      v16 = v21;
      a3 -= v13;
    }
    while ( a3 );
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    }
    LOBYTE(v20) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return (char)v20;
}
