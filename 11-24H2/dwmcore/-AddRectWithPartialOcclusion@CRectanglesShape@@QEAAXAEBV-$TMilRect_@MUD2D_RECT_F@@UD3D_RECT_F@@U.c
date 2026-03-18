/*
 * XREFs of ?AddRectWithPartialOcclusion@CRectanglesShape@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801746A0
 * Callers:
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180258EF0 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x180173F00 (-reserve_region@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA_ea_180173F00.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x180174FF8 (-CalcSubtractionRectangles@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QE.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180175224 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 */

_OWORD *__fastcall CRectanglesShape::AddRectWithPartialOcclusion(__int64 a1, float *a2, const __m128i *a3)
{
  __m128i v3; // xmm0
  __int64 v4; // rbx
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  __int64 v13; // r14
  __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  _OWORD *v18; // rax
  unsigned __int64 v19; // r8
  _OWORD *result; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r9
  __m128i v30; // [rsp+38h] [rbp-19h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-1h]
  __int64 v33; // [rsp+58h] [rbp+7h]
  _BYTE v34[48]; // [rsp+68h] [rbp+17h] BYREF

  v3 = _mm_loadu_si128(a3);
  v4 = (__int64)a2;
  v6 = *a2;
  v30 = v3;
  if ( v6 > *(float *)v3.m128i_i32 )
  {
    *(float *)v30.m128i_i32 = v6;
    *(float *)v3.m128i_i32 = v6;
  }
  v7 = a2[1];
  v8 = *(float *)&v30.m128i_i32[1];
  if ( v7 > *(float *)&v30.m128i_i32[1] )
  {
    v30.m128i_i32[1] = (__int32)a2[1];
    v8 = v7;
  }
  v9 = a2[2];
  v10 = *(float *)&v30.m128i_i32[2];
  if ( *(float *)&v30.m128i_i32[2] > v9 )
  {
    v30.m128i_i32[2] = (__int32)a2[2];
    v10 = v9;
  }
  v11 = a2[3];
  v12 = *(float *)&v30.m128i_i32[3];
  if ( *(float *)&v30.m128i_i32[3] > v11 )
  {
    v30.m128i_i32[3] = (__int32)a2[3];
    v12 = v11;
  }
  if ( v10 <= *(float *)v3.m128i_i32 || v12 <= v8 )
  {
    result = (_OWORD *)detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::reserve_region(
                         a1 + 16,
                         (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 4,
                         1uLL);
    *result = *(_OWORD *)v4;
  }
  else
  {
    v13 = a1 + 16;
    v14 = *(_QWORD *)(a1 + 24);
    v15 = *(_QWORD *)(a1 + 16);
    v16 = (__int64)(v14 - v15) >> 4;
    v17 = v16 + 4;
    if ( v16 + 4 < v16 )
      goto LABEL_21;
    v18 = (_OWORD *)detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::reserve_region(
                      a1 + 16,
                      (__int64)(*(_QWORD *)(a1 + 24) - v15) >> 4,
                      4uLL);
    *v18 = 0LL;
    qmemcpy(v18 + 1, v18, 0x30uLL);
    while ( 1 )
    {
      result = (_OWORD *)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                           v4,
                           (unsigned int)&v30,
                           v19,
                           *(_DWORD *)v13 + 16 * (int)v16,
                           4);
      v21 = *(_QWORD *)v13;
      v15 = (__int64)(*(_QWORD *)(v13 + 8) - *(_QWORD *)v13) >> 4;
      v22 = v16 + (unsigned int)result;
      if ( v22 > v15 )
      {
        v23 = v22 - v15;
        result = (_OWORD *)detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::reserve_region(
                             v13,
                             (__int64)(*(_QWORD *)(v13 + 8) - *(_QWORD *)v13) >> 4,
                             v23);
        if ( v23 )
        {
          *result = 0LL;
          qmemcpy(result + 1, result, 8 * ((16 * v23 - 9) >> 3));
        }
        return result;
      }
      v4 = 16 * v22;
      v24 = v4 >> 4;
      v14 = (__int64)(*(_QWORD *)(v13 + 8) - v21 - v4) >> 4;
      v25 = v14 + (v4 >> 4);
      if ( v25 <= v15 )
        break;
      do
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
LABEL_21:
        v26 = 16 * v17;
        v27 = v26 >> 4;
        v14 = (__int64)(v14 - v26 - v15) >> 4;
        v28 = v14 + (v26 >> 4);
      }
      while ( v28 > v16 );
      v29 = v13;
      v19 = v15 + 16 * v16;
      if ( v28 != v16 )
      {
        if ( v27 && (!v15 || v27 < 0 || v16 < v27) )
          goto LABEL_36;
        v33 = v26 >> 4;
        v31 = v15;
        v32 = v16;
        std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
          v34,
          v15 + 16 * v28,
          v19,
          &v31);
        v29 = a1 + 16;
      }
      *(_QWORD *)(v13 + 8) -= 16 * v14;
      v13 = v29;
    }
    if ( v25 != v15 )
    {
      if ( v24 && (!v21 || v24 < 0 || v15 < v24) )
LABEL_36:
        _invalid_parameter_noinfo_noreturn();
      v31 = *(_QWORD *)v13;
      v33 = v4 >> 4;
      v32 = v15;
      result = (_OWORD *)std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
                           v34,
                           v21 + 16 * v25,
                           v21 + 16 * v15,
                           &v31);
    }
    *(_QWORD *)(v13 + 8) -= 16 * v14;
  }
  return result;
}
