/*
 * XREFs of ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x1801A6BF4
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801A63F0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     sqrt @ 0x18009D350 (sqrt.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801A6B88 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUContactStat.c)
 */

void __fastcall MagnifierRecognizer::CheckForTwoFingerPan(MagnifierRecognizer *this)
{
  char v1; // r11
  int v3; // ecx
  int v4; // ecx
  __int64 **v5; // r10
  __int64 *v6; // rcx
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  unsigned __int64 v9; // xmm0_8
  int v10; // edi
  unsigned __int64 v11; // rbx
  double v12; // xmm7_8
  double v13; // xmm6_8
  _QWORD *v14; // rcx
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+78h] [rbp+10h]
  int v17; // [rsp+7Ch] [rbp+14h]

  v1 = 0;
  if ( !*((_BYTE *)this + 3) || *((_BYTE *)this + 2) )
    return;
  v3 = *((_DWORD *)this + 1);
  if ( !v3 )
    goto LABEL_16;
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( *((_DWORD *)this + 2) <= 1u )
    {
      v14 = (_QWORD *)**((_QWORD **)this + 2);
      if ( 1000000LL * *((_QWORD *)this + 5) < v14[8] - v14[7] )
        *((_BYTE *)this + 3) = 0;
      if ( (int)((v14[6] - v14[5]) * (v14[6] - v14[5])
               + (HIDWORD(v14[6]) - HIDWORD(v14[5])) * (HIDWORD(v14[6]) - HIDWORD(v14[5]))) < (unsigned __int64)(unsigned int)(*((_DWORD *)this + 12) * *((_DWORD *)this + 12)) )
        return;
    }
LABEL_16:
    *((_BYTE *)this + 3) = 0;
    return;
  }
  if ( v4 != 1 )
    goto LABEL_16;
  v5 = (__int64 **)*((_QWORD *)this + 2);
  v6 = *v5;
  v15 = (unsigned __int64)*v5;
  while ( *((_BYTE *)v6 + 25) == v1 )
  {
    if ( (int)((v6[6] - v6[5]) * (v6[6] - v6[5]) + (HIDWORD(v6[6]) - HIDWORD(v6[5])) * (HIDWORD(v6[6]) - HIDWORD(v6[5]))) >= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 13) * *((_DWORD *)this + 13)) )
    {
      *((_BYTE *)this + 3) = v1;
      v15 = (unsigned __int64)*v5;
      v7 = *(__m128i *)(v15 + 40);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++((__int64 **)&v15);
      v8 = *(__m128i *)(v15 + 40);
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v16 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - _mm_cvtsi128_si32(v7);
      v17 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
      v10 = v9 - v8.m128i_i32[0];
      HIDWORD(v15) = HIDWORD(v9) - v8.m128i_i32[1];
      LODWORD(v15) = v9 - v8.m128i_i32[0];
      v11 = HIDWORD(v15);
      v12 = (double)(v16 * ((int)v9 - v8.m128i_i32[0]) + v17 * (HIDWORD(v9) - v8.m128i_i32[1]));
      v13 = sqrt((double)(v16 * v16 + v17 * v17));
      if ( v12 / (v13 * sqrt((double)((int)v11 * (int)v11 + v10 * v10))) >= *((double *)this + 7) )
        *((_BYTE *)this + 2) = 1;
      return;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++((__int64 **)&v15);
    v6 = (__int64 *)v15;
  }
}
