/*
 * XREFs of __std_find_trivial_4 @ 0x18009E690
 * Callers:
 *     _lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___ @ 0x1800CEC08 (_lambda_7f3c0264f4cfe5c0819e572d89a9031e_--operator()_std--shared_ptr_LegacyDeviceInfo___.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall _std_find_trivial_4(const __m128i *a1, const __m128i *a2, unsigned int _R8D)
{
  signed __int64 v4; // r9
  const __m128i *v8; // r10
  unsigned __int64 v11; // r9
  const __m128i *v12; // r10
  __m128i v13; // xmm1
  __int64 v14; // rax

  v4 = (char *)a2 - (char *)a1;
  if ( (((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL) != 0 && (_isa_enabled & 0x20) != 0 )
  {
    __asm
    {
      vmovd   xmm2, r8d
      vpshufd xmm2, xmm2, 0
      vinsertf128 ymm2, ymm2, xmm2, 1
    }
    v8 = (const __m128i *)((char *)a1 + (((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL));
    while ( 1 )
    {
      __asm
      {
        vpcmpeqd ymm1, ymm2, ymmword ptr [rcx]
        vpmovmskb eax, ymm1
      }
      if ( _EAX )
        break;
      a1 += 2;
      if ( a1 == v8 )
      {
        v4 &= 0x1Fu;
        __asm { vzeroupper }
        goto LABEL_7;
      }
    }
    __asm
    {
      vzeroupper
      tzcnt   eax, eax
    }
    return (const __m128i *)((char *)a1 + _EAX);
  }
  else
  {
LABEL_7:
    v11 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v11 )
    {
      v12 = (const __m128i *)((char *)a1 + v11);
      v13 = _mm_shuffle_epi32(_mm_cvtsi32_si128(_R8D), 0);
      while ( 1 )
      {
        LODWORD(v14) = _mm_movemask_epi8(_mm_cmpeq_epi32(_mm_loadu_si128(a1), v13));
        if ( (_DWORD)v14 )
          break;
        if ( ++a1 == v12 )
          goto LABEL_11;
      }
      _BitScanForward((unsigned int *)&v14, v14);
      return (const __m128i *)((char *)a1 + v14);
    }
    else
    {
LABEL_11:
      while ( a1 != a2 )
      {
        if ( a1->m128i_i32[0] == _R8D )
          break;
        a1 = (const __m128i *)((char *)a1 + 4);
      }
      return a1;
    }
  }
}
