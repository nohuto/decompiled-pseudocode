/*
 * XREFs of DpiIsValidEdid @ 0x1400552B0
 * Callers:
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x140248BB4 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x140254FF0 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x14042B12C (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     ?DpiEdidCheckSum@@YAEPEADK@Z @ 0x140051B30 (-DpiEdidCheckSum@@YAEPEADK@Z.c)
 */

bool __fastcall DpiIsValidEdid(__m128i *a1)
{
  __m128i v1; // xmm1
  __int64 v2; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __int64 v8; // rax

  if ( a1->m128i_i32[0] == -256 && a1->m128i_i32[1] == 0xFFFFFF )
  {
    v1 = 0LL;
    v2 = 8LL;
    do
    {
      v3 = _mm_loadu_si128(a1++);
      v4 = _mm_add_epi8(v3, v1);
      v1 = v4;
      --v2;
    }
    while ( v2 );
    v5 = _mm_add_epi8(v4, _mm_srli_si128(v4, 8));
    v6 = _mm_add_epi8(v5, _mm_srli_si128(v5, 4));
    v7 = _mm_add_epi8(v6, _mm_srli_si128(v6, 2));
    return (unsigned __int8)_mm_cvtsi128_si32(_mm_add_epi8(v7, _mm_srli_si128(v7, 1))) == 0;
  }
  else
  {
    LOBYTE(v8) = (a1->m128i_i8[0] & 0xF0) == 0x20 && DpiEdidCheckSum(a1->m128i_i8, 0x100u);
  }
  return v8;
}
