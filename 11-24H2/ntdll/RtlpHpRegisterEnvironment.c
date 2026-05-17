/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x180090838
 * Callers:
 *     RtlpHpHeapDestroy @ 0x180090050 (RtlpHpHeapDestroy.c)
 *     RtlpHpHeapCreate @ 0x1800A6374 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x1800906AC (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180090D68 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800F23FC (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180157C64 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__m128i *a1, int a2, unsigned __int64 a3)
{
  __m128i v3; // xmm1
  __int64 v5; // rdi
  int v6; // eax
  __int64 result; // rax
  unsigned __int8 v8; // al
  unsigned __int64 v9; // xmm1_8
  __m128i v10; // [rsp+20h] [rbp-30h]
  __m128i v11; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+60h] [rbp+10h] BYREF

  v3 = *a1;
  v13 = 0LL;
  v10 = v3;
  if ( !a2 )
  {
    v8 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 3));
    v11.m128i_i32[3] = 0;
    if ( v8 )
      v11.m128i_i32[0] = v8 - 1;
    else
      v11.m128i_i32[0] = -1;
    v11.m128i_i32[1] = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v3, 1));
    v11.m128i_i32[2] = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v3, 2));
    if ( (_mm_cvtsi128_si32(v3) & 8) != 0 )
      v11.m128i_i32[3] = 1;
    v9 = _mm_srli_si128(v3, 8).m128i_u64[0];
    v12 = v9;
    RtlpHpVaMgrCtxAllocatorDereference((__int64)&unk_1801CE978, (volatile signed __int32 **)&v11, a3);
    if ( BYTE1(a1->m128i_i64[0]) == 5 )
    {
      v11 = *a1;
      RtlpHpCustomVaCallbacksRegistrarUnregister(&RtlpHpHeapVaCallbacksRegistrar, v9, &v11);
    }
    return 0LL;
  }
  if ( BYTE1(a1->m128i_i64[0]) == 5 )
  {
    v11 = v3;
    result = RtlpHpCustomVaCallbacksRegistrarRegister(
               &RtlpHpHeapVaCallbacksRegistrar,
               _mm_srli_si128(v3, 8).m128i_u64[0],
               &v13,
               &v11);
    if ( (int)result < 0 )
      return result;
    v5 = v13;
    v10.m128i_i64[1] = v13;
  }
  else
  {
    v5 = v3.m128i_i64[1];
  }
  v11.m128i_i32[3] = 0;
  if ( v3.m128i_i8[3] )
    v11.m128i_i32[0] = v3.m128i_u8[3] - 1;
  else
    v11.m128i_i32[0] = -1;
  v11.m128i_i32[1] = v3.m128i_u8[1];
  v11.m128i_i32[2] = v3.m128i_u8[2];
  if ( (v3.m128i_i8[0] & 8) != 0 )
    v11.m128i_i32[3] = 1;
  v12 = v5;
  v6 = RtlpHpVaMgrCtxAllocatorReference(&unk_1801CE978, &v11);
  if ( v6 != -1 )
  {
    v10.m128i_i8[3] = v6 + 1;
    *a1 = v10;
    return 0LL;
  }
  if ( BYTE1(a1->m128i_i64[0]) == 5 )
  {
    v11 = *a1;
    RtlpHpCustomVaCallbacksRegistrarUnregister(&RtlpHpHeapVaCallbacksRegistrar, v5, &v11);
  }
  return 3221225626LL;
}
