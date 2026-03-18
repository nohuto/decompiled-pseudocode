/*
 * XREFs of ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B180
 * Callers:
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18000CF80 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180019310 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800193E0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x18001BD40 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180024D70 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x18011F730 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@M@Z @ 0x1801B3C3C (-make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@M@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1801B4220 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 */

void __fastcall CComponentTransform3D::GetRealization(
        CComponentTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v5; // xmm4_4
  float v6; // xmm6_4
  char v7; // si
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  char v18; // cl
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm3_4
  float v39; // xmm8_4
  float v40; // xmm5_4
  float v41; // xmm4_4
  char v42; // cl
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm4_4
  float v46; // xmm6_4
  float v47; // xmm7_4
  float v48; // xmm8_4
  float v49; // xmm10_4
  float v50; // xmm11_4
  float v51; // xmm1_4
  float v52; // xmm9_4
  float v53; // xmm4_4
  float v54; // xmm11_4
  float v55; // xmm0_4
  float v56; // xmm2_4
  float v57; // xmm3_4
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm0_4
  float v62; // xmm1_4
  float v63; // xmm3_4
  float v64; // xmm2_4
  float v65; // xmm0_4
  float v66; // xmm1_4
  float v67; // xmm3_4
  float v68; // xmm0_4
  float v69; // xmm1_4
  float v70; // xmm3_4
  float v71; // xmm0_4
  float v72; // xmm4_4
  float v73; // xmm8_4
  __m128 v74; // xmm4
  __m128 v75; // xmm4
  __m128 v76; // xmm3
  __m128 v77; // xmm1
  __m128 v78; // xmm4
  _OWORD *float4x4_from_axis_angle; // rax
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  unsigned __int64 v83; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int32 v84; // [rsp+28h] [rbp-D8h]
  float v85[12]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v86; // [rsp+60h] [rbp-A0h]
  int v87; // [rsp+70h] [rbp-90h]
  _OWORD v88[4]; // [rsp+80h] [rbp-80h] BYREF
  int v89; // [rsp+C0h] [rbp-40h]

  if ( *((_BYTE *)this + 300) )
  {
    CComponentTransform3D::GetScaleRotationTranslationRealization(this, a3);
    return;
  }
  v5 = 0.0;
  v6 = 0.0;
  if ( a2 )
  {
    v6 = *((float *)this + 40) * a2->width;
    v5 = *((float *)this + 41) * a2->height;
  }
  v7 = 0;
  v8 = *(_OWORD *)((char *)this + 252);
  v9 = *(_OWORD *)((char *)this + 268);
  v10 = *(_OWORD *)((char *)this + 284);
  v11 = FLOAT_61440_0;
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 236);
  *((_OWORD *)a3 + 1) = v8;
  *((_OWORD *)a3 + 2) = v9;
  *((_OWORD *)a3 + 3) = v10;
  *((_DWORD *)a3 + 16) = 0;
  v12 = *((float *)this + 42);
  if ( v12 != 0.0 || *((float *)this + 43) != 0.0 || *((float *)this + 44) != 0.0 || v6 != 0.0 || v5 != 0.0 )
  {
    LODWORD(v39) = *((_DWORD *)this + 44) ^ _xmm;
    LODWORD(v40) = COERCE_UNSIGNED_INT(v12 + v6) ^ _xmm;
    LODWORD(v41) = COERCE_UNSIGNED_INT(v5 + *((float *)this + 43)) ^ _xmm;
    if ( COERCE_FLOAT(LODWORD(v40) & _xmm) < 0.000081380211
      && COERCE_FLOAT(LODWORD(v41) & _xmm) < 0.000081380211
      && COERCE_FLOAT(LODWORD(v39) & _xmm) < 0.000081380211 )
    {
      goto LABEL_59;
    }
    v42 = *((_BYTE *)a3 + 65);
    if ( (char)(4 * v42) >> 6 != 1 )
    {
      if ( (char)(4 * v42) >> 6 >= 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a3 + 7) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(*((_DWORD *)a3 + 3) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(*((_DWORD *)a3 + 15) & _xmm))
                          - 1.0) & _xmm) < 0.000081380211 )
        {
          v42 |= 0x30u;
          LODWORD(v71) = *((_DWORD *)a3 + 11) & _xmm;
          *((_BYTE *)a3 + 65) = v42;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v71 * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
          {
LABEL_57:
            v72 = v41 + *((float *)a3 + 13);
            v73 = v39 + *((float *)a3 + 14);
            *((float *)a3 + 12) = v40 + *((float *)a3 + 12);
            *((float *)a3 + 13) = v72;
            *((float *)a3 + 14) = v73;
            goto LABEL_58;
          }
        }
        else
        {
          v42 = v42 & 0xCF | 0x10;
        }
      }
      else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a3 + 11) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
      {
        goto LABEL_57;
      }
    }
    v56 = *((float *)a3 + 3);
    v57 = *((float *)a3 + 7);
    v58 = v56 * v40;
    *((_BYTE *)a3 + 65) = v42 & 0xF3;
    v59 = (float)(v56 * v41) + *((float *)a3 + 1);
    v60 = (float)(v56 * v39) + *((float *)a3 + 2);
    *(float *)a3 = v58 + *(float *)a3;
    *((float *)a3 + 1) = v59;
    v61 = (float)(v57 * v40) + *((float *)a3 + 4);
    v62 = (float)(v57 * v41) + *((float *)a3 + 5);
    *((float *)a3 + 2) = v60;
    v63 = (float)(v57 * v39) + *((float *)a3 + 6);
    v64 = *((float *)a3 + 11);
    *((float *)a3 + 4) = v61;
    *((float *)a3 + 5) = v62;
    v65 = (float)(v64 * v40) + *((float *)a3 + 8);
    *((float *)a3 + 6) = v63;
    v66 = (float)(v64 * v41) + *((float *)a3 + 9);
    v67 = *((float *)a3 + 15);
    *((float *)a3 + 8) = v65;
    *((float *)a3 + 9) = v66;
    v68 = (float)(v67 * v40) + *((float *)a3 + 12);
    v69 = (float)(v67 * v41) + *((float *)a3 + 13);
    *((float *)a3 + 10) = (float)(v64 * v39) + *((float *)a3 + 10);
    v70 = (float)(v67 * v39) + *((float *)a3 + 14);
    *((float *)a3 + 12) = v68;
    *((float *)a3 + 13) = v69;
    *((float *)a3 + 14) = v70;
LABEL_58:
    *((_BYTE *)a3 + 64) &= 0xFCu;
LABEL_59:
    v7 = 1;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 45) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 46) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) >= 0.0000011920929 )
  {
    CMILMatrix::Translate(a3, *((float *)this + 45), *((float *)this + 46), *((float *)this + 47));
  }
  v13 = *((float *)this + 51);
  if ( v13 != 1.0 || *((float *)this + 52) != 1.0 || *((float *)this + 53) != 1.0 )
  {
    v19 = *((float *)this + 53);
    v20 = *((float *)this + 52);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) >= 0.000081380211 )
    {
      *(float *)a3 = v13 * *(float *)a3;
      *((float *)a3 + 4) = v13 * *((float *)a3 + 4);
      *((float *)a3 + 8) = v13 * *((float *)a3 + 8);
      *((float *)a3 + 12) = v13 * *((float *)a3 + 12);
      *((float *)a3 + 1) = v20 * *((float *)a3 + 1);
      *((float *)a3 + 5) = v20 * *((float *)a3 + 5);
      *((float *)a3 + 9) = v20 * *((float *)a3 + 9);
      *((float *)a3 + 13) = v20 * *((float *)a3 + 13);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) >= 0.000081380211 )
      {
        *((float *)a3 + 2) = v19 * *((float *)a3 + 2);
        *((float *)a3 + 6) = v19 * *((float *)a3 + 6);
        *((float *)a3 + 10) = v19 * *((float *)a3 + 10);
        *((float *)a3 + 14) = v19 * *((float *)a3 + 14);
      }
      *((_BYTE *)a3 + 64) &= 0xCCu;
    }
  }
  if ( *((float *)this + 58) != 0.0 )
  {
    v74 = 0LL;
    v74.m128_u64[0] = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 48), (__m128)*((unsigned int *)this + 49)).m128_u64[0];
    v75 = _mm_movelh_ps(v74, (__m128)*((unsigned int *)this + 50));
    v76 = _mm_mul_ps(v75, v75);
    v77 = _mm_shuffle_ps(v76, v76, 102);
    v76.m128_f32[0] = (float)(v76.m128_f32[0] + v77.m128_f32[0]) + _mm_shuffle_ps(v77, v77, 85).m128_f32[0];
    v78 = _mm_div_ps(v75, _mm_sqrt_ps(_mm_shuffle_ps(v76, v76, 0)));
    v83 = v78.m128_u64[0];
    v84 = _mm_shuffle_ps(v78, v78, 170).m128_u32[0];
    float4x4_from_axis_angle = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_from_axis_angle(v85, &v83);
    v89 = 0;
    v80 = float4x4_from_axis_angle[1];
    v88[0] = *float4x4_from_axis_angle;
    v81 = float4x4_from_axis_angle[2];
    v88[1] = v80;
    v82 = float4x4_from_axis_angle[3];
    v88[2] = v81;
    v88[3] = v82;
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v88);
  }
  v14 = *((float *)this + 54);
  if ( v14 != 0.0 || *((float *)this + 55) != 0.0 || *((float *)this + 56) != 0.0 || *((float *)this + 57) != 1.0 )
  {
    v43 = *((float *)this + 55);
    v44 = *((float *)this + 57);
    v45 = *((float *)this + 54);
    v46 = v14 * v14;
    v85[3] = 0.0;
    v47 = v14 * v43;
    v85[7] = 0.0;
    v85[11] = 0.0;
    v48 = v44 * v43;
    v87 = 0;
    v49 = v43 * v43;
    v50 = *((float *)this + 56);
    v51 = v44 * v50;
    v52 = v50 * v50;
    v53 = v45 * v50;
    v54 = v50 * v43;
    v55 = v14 * v44;
    v85[1] = (float)(v51 + v47) + (float)(v51 + v47);
    v85[0] = 1.0 - (float)((float)(v52 + v49) + (float)(v52 + v49));
    v85[2] = (float)(v53 - v48) + (float)(v53 - v48);
    v85[4] = (float)(v47 - v51) + (float)(v47 - v51);
    v85[6] = (float)(v55 + v54) + (float)(v55 + v54);
    v85[8] = (float)(v48 + v53) + (float)(v48 + v53);
    v85[9] = (float)(v54 - v55) + (float)(v54 - v55);
    v85[5] = 1.0 - (float)((float)(v52 + v46) + (float)(v52 + v46));
    v85[10] = 1.0 - (float)((float)(v49 + v46) + (float)(v49 + v46));
    v86 = *(__int128 *)&_xmm.r;
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v85);
    v11 = FLOAT_61440_0;
  }
  if ( v7 )
  {
    v15 = *((float *)this + 42);
    v16 = *((float *)this + 44);
    v17 = *((float *)this + 43);
    if ( COERCE_FLOAT(LODWORD(v15) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(LODWORD(v17) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(LODWORD(v16) & _xmm) >= 0.000081380211 )
    {
      v18 = *((_BYTE *)a3 + 65);
      if ( (char)(4 * v18) >> 6 != 1 )
      {
        if ( (char)(4 * v18) >> 6 >= 0 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a3 + 7) & _xmm) * v11)
                                            + (float)(COERCE_FLOAT(*((_DWORD *)a3 + 3) & _xmm) * v11))
                                    + COERCE_FLOAT(*((_DWORD *)a3 + 15) & _xmm))
                            - 1.0) & _xmm) < 0.000081380211 )
          {
            v18 |= 0x30u;
            LODWORD(v21) = *((_DWORD *)a3 + 11) & _xmm;
            *((_BYTE *)a3 + 65) = v18;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v21 * v11) - 0.0) & _xmm) < 0.000081380211 )
            {
LABEL_37:
              v22 = v17 + *((float *)a3 + 13);
              v23 = v16 + *((float *)a3 + 14);
              *((float *)a3 + 12) = v15 + *((float *)a3 + 12);
              *((float *)a3 + 13) = v22;
              *((float *)a3 + 14) = v23;
LABEL_38:
              *((_BYTE *)a3 + 64) &= 0xFCu;
              return;
            }
          }
          else
          {
            v18 = v18 & 0xCF | 0x10;
          }
        }
        else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a3 + 11) & _xmm) * v11) - 0.0) & _xmm) < 0.000081380211 )
        {
          goto LABEL_37;
        }
      }
      v24 = *((float *)a3 + 3);
      v25 = *((float *)a3 + 7);
      v26 = v24 * v15;
      *((_BYTE *)a3 + 65) = v18 & 0xF3;
      v27 = (float)(v24 * v17) + *((float *)a3 + 1);
      v28 = (float)(v24 * v16) + *((float *)a3 + 2);
      *(float *)a3 = v26 + *(float *)a3;
      *((float *)a3 + 1) = v27;
      v29 = (float)(v25 * v15) + *((float *)a3 + 4);
      v30 = (float)(v25 * v17) + *((float *)a3 + 5);
      *((float *)a3 + 2) = v28;
      v31 = (float)(v25 * v16) + *((float *)a3 + 6);
      v32 = *((float *)a3 + 11);
      *((float *)a3 + 4) = v29;
      *((float *)a3 + 5) = v30;
      v33 = (float)(v32 * v15) + *((float *)a3 + 8);
      *((float *)a3 + 6) = v31;
      v34 = (float)(v32 * v17) + *((float *)a3 + 9);
      v35 = *((float *)a3 + 15);
      *((float *)a3 + 8) = v33;
      *((float *)a3 + 9) = v34;
      v36 = (float)(v35 * v15) + *((float *)a3 + 12);
      v37 = (float)(v35 * v17) + *((float *)a3 + 13);
      *((float *)a3 + 10) = (float)(v32 * v16) + *((float *)a3 + 10);
      v38 = (float)(v35 * v16) + *((float *)a3 + 14);
      *((float *)a3 + 12) = v36;
      *((float *)a3 + 13) = v37;
      *((float *)a3 + 14) = v38;
      goto LABEL_38;
    }
  }
}
