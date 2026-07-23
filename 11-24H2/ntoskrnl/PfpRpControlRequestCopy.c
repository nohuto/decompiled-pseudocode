/*
 * XREFs of PfpRpControlRequestCopy @ 0x140A5EAF0
 * Callers:
 *     PfpRpControlRequest @ 0x140A5EA1C (PfpRpControlRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpControlRequestCopy(__m128i *Src, unsigned int a2, __m128i **a3, __m128i *a4, char a5)
{
  __m128i v8; // xmm2
  unsigned __int16 epi16; // ax
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  size_t v14; // rbx
  __m128i *Pool2; // rdi
  __m128i v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+58h] [rbp-50h]

  if ( a5 && a2 && ((unsigned __int8)Src & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = *Src;
  v18 = *Src;
  v19 = Src[1].m128i_i64[0];
  if ( (unsigned __int16)_mm_cvtsi128_si32(*Src) != 3 )
    return (unsigned int)-1073741811;
  epi16 = _mm_extract_epi16(v8, 1);
  if ( epi16 >= 4u )
    return (unsigned int)-1073741811;
  if ( epi16 != 1 )
  {
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
    v12 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
    goto LABEL_9;
  }
  v12 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  if ( (_DWORD)v12
    || (v11 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8))) != 0
    || (v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12))) != 0
    || (_DWORD)v19 )
  {
    return (unsigned int)-1073741811;
  }
LABEL_9:
  v13 = 8 * (v10 + (unsigned __int64)(unsigned int)v19)
      - ((8 * ((_BYTE)v12 + (_BYTE)v11) + 23) & 7)
      + 31
      + 8 * (v12 + v11);
  if ( v13 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v14 = (unsigned int)v13;
  if ( (unsigned int)v13 != (unsigned __int64)a2 )
    return (unsigned int)-1073741811;
  if ( (unsigned int)v13 > 0x28uLL )
  {
    Pool2 = (__m128i *)ExAllocatePool2(0x100uLL, (unsigned int)v13, 0x43526650u);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  else
  {
    Pool2 = a4;
  }
  memmove(Pool2, Src, v14);
  *Pool2 = v18;
  Pool2[1].m128i_i64[0] = v19;
  *a3 = Pool2;
  return 0;
}
