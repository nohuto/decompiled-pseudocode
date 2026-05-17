/*
 * XREFs of RtlpHpHeapExtendContext @ 0x1800A44D0
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x1800A5130 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpAllocVA @ 0x180092190 (RtlpHpAllocVA.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800A4630 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataCommit @ 0x1800A4820 (RtlpHpMetadataCommit.c)
 */

unsigned __int64 __fastcall RtlpHpHeapExtendContext(__m128i *a1, __int64 a2)
{
  volatile signed __int32 *v2; // rsi
  volatile signed __int32 **v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __m128i v13; // xmm0
  unsigned __int64 v14; // rdi
  bool v15; // zf
  int v16; // eax
  __m128i v17; // [rsp+30h] [rbp-38h] BYREF
  __m128i v18[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __m128i *v20; // [rsp+78h] [rbp+10h] BYREF

  v19 = 0LL;
  v2 = &a1[14].m128i_i32[2];
  RtlAcquireReleaseSRWLockExclusive(&a1[14].m128i_u64[1]);
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = a1[15].m128i_u64[0];
      v8 = v7 + a2;
      if ( v7 + a2 < v7 )
        return 0LL;
      if ( v8 > a1[15].m128i_i64[1] )
        break;
      if ( v7 == _InterlockedCompareExchange64(a1[15].m128i_i64, v8, v7) )
        return v7;
    }
    RtlAcquireSRWLockExclusive(v2, v5, v6);
    v10 = a1[15].m128i_u64[0];
    v11 = v10 + a2;
    if ( v10 + a2 < v10 || v11 > a1[16].m128i_i64[0] )
      break;
    v12 = a1[15].m128i_u64[1];
    if ( v11 > v12 )
    {
      v13 = *a1;
      v19 = a1[15].m128i_i64[1];
      v14 = (v11 - v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v15 = (a1[1].m128i_i8[14] & 1) == 0;
      v20 = (__m128i *)v14;
      if ( v15 )
      {
        v18[0] = v13;
        v16 = RtlpHpAllocVA(&v19, &v20, 0LL, 0x1000u, 4u, v18);
        v14 = (unsigned __int64)v20;
      }
      else
      {
        v17 = v13;
        v16 = RtlpHpMetadataCommit((_DWORD)a1, v12, v14, (unsigned int)&v17, 1);
      }
      if ( v16 < 0 )
        break;
      a1[15].m128i_i64[1] += v14;
      _InterlockedAdd64(&a1[8].m128i_i64[1], v14 >> 12);
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)v2);
  }
  v7 = 0LL;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)v2);
  return v7;
}
