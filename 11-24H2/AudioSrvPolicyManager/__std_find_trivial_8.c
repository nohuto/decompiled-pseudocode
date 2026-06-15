/*
 * XREFs of __std_find_trivial_8 @ 0x18001FCD0
 * Callers:
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180001FC8 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180002250 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCApplication@@@std@@@std@@@std@@PEAVCApplication@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCApplication@@@std@@@std@@@0@V10@V10@AEBQEAVCApplication@@@Z @ 0x18001ABFC (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAVCApplication@@@std@@@std@@@std@@.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall _std_find_trivial_8(const __m128i *a1, const __m128i *a2, unsigned __int64 _R8)
{
  signed __int64 v4; // r9
  unsigned __int64 v6; // rdx
  const __m128i *v10; // rdx
  unsigned __int64 v13; // r9
  const __m128i *v14; // rdx
  __m128i v15; // xmm1
  __int64 v16; // rax

  v4 = (char *)a2 - (char *)a1;
  v6 = ((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v6 && (_isa_enabled & 0x20) != 0 )
  {
    __asm
    {
      vmovq   xmm2, r8
      vpunpcklqdq xmm2, xmm2, xmm2
      vinsertf128 ymm2, ymm2, xmm2, 1
    }
    v10 = (const __m128i *)((char *)a1 + v6);
    while ( 1 )
    {
      __asm
      {
        vpcmpeqq ymm1, ymm2, ymmword ptr [rcx]
        vpmovmskb eax, ymm1
      }
      if ( _EAX )
        break;
      a1 += 2;
      if ( a1 == v10 )
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
    v13 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v13 && (_isa_enabled & 4) != 0 )
    {
      v14 = (const __m128i *)((char *)a1 + v13);
      v15 = _mm_unpacklo_epi64((__m128i)_R8, (__m128i)_R8);
      while ( 1 )
      {
        LODWORD(v16) = _mm_movemask_epi8(_mm_cmpeq_epi64(_mm_loadu_si128(a1), v15));
        if ( (_DWORD)v16 )
          break;
        if ( ++a1 == v14 )
          goto LABEL_12;
      }
      _BitScanForward((unsigned int *)&v16, v16);
      return (const __m128i *)((char *)a1 + v16);
    }
    else
    {
LABEL_12:
      while ( a1 != a2 )
      {
        if ( a1->m128i_i64[0] == _R8 )
          break;
        a1 = (const __m128i *)((char *)a1 + 8);
      }
      return a1;
    }
  }
}
