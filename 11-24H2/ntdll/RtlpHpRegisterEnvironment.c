/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x18009B3C4
 * Callers:
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x1800270BC (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x18009AC38 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x18009B238 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x18009B8F4 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180156024 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__m128i *a1, int a2)
{
  __m128i v2; // xmm1
  __int64 v4; // rdi
  int v5; // eax
  __int64 result; // rax
  unsigned __int8 v7; // al
  unsigned __int64 v8; // xmm1_8
  __m128i v9; // [rsp+20h] [rbp-30h]
  __m128i v10; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-10h]
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF

  v2 = *a1;
  v12 = 0LL;
  v9 = v2;
  if ( !a2 )
  {
    v7 = _mm_cvtsi128_si32(_mm_srli_si128(v2, 3));
    v10.m128i_i32[3] = 0;
    if ( v7 )
      v10.m128i_i32[0] = v7 - 1;
    else
      v10.m128i_i32[0] = -1;
    v10.m128i_i32[1] = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v2, 1));
    v10.m128i_i32[2] = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v2, 2));
    if ( (_mm_cvtsi128_si32(v2) & 8) != 0 )
      v10.m128i_i32[3] = 1;
    v8 = _mm_srli_si128(v2, 8).m128i_u64[0];
    v11 = v8;
    RtlpHpVaMgrCtxAllocatorDereference((__int64)&unk_1801CD968, (unsigned int *)&v10);
    if ( BYTE1(a1->m128i_i64[0]) == 5 )
    {
      v10 = *a1;
      RtlpHpCustomVaCallbacksRegistrarUnregister(&RtlpHpHeapVaCallbacksRegistrar, v8, &v10);
    }
    return 0LL;
  }
  if ( BYTE1(a1->m128i_i64[0]) == 5 )
  {
    v10 = v2;
    result = RtlpHpCustomVaCallbacksRegistrarRegister(
               (__int64)&RtlpHpHeapVaCallbacksRegistrar,
               (char *)_mm_srli_si128(v2, 8).m128i_i64[0],
               &v12,
               (__int128 *)v10.m128i_i8);
    if ( (int)result < 0 )
      return result;
    v4 = v12;
    v9.m128i_i64[1] = v12;
  }
  else
  {
    v4 = v2.m128i_i64[1];
  }
  v10.m128i_i32[3] = 0;
  if ( v2.m128i_i8[3] )
    v10.m128i_i32[0] = v2.m128i_u8[3] - 1;
  else
    v10.m128i_i32[0] = -1;
  v10.m128i_i32[1] = v2.m128i_u8[1];
  v10.m128i_i32[2] = v2.m128i_u8[2];
  if ( (v2.m128i_i8[0] & 8) != 0 )
    v10.m128i_i32[3] = 1;
  v11 = v4;
  v5 = RtlpHpVaMgrCtxAllocatorReference(&unk_1801CD968, &v10);
  if ( v5 != -1 )
  {
    v9.m128i_i8[3] = v5 + 1;
    *a1 = v9;
    return 0LL;
  }
  if ( BYTE1(a1->m128i_i64[0]) == 5 )
  {
    v10 = *a1;
    RtlpHpCustomVaCallbacksRegistrarUnregister(&RtlpHpHeapVaCallbacksRegistrar, v4, &v10);
  }
  return 3221225626LL;
}
