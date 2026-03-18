/*
 * XREFs of ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z @ 0x1801CE1C0
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRoundedRectangleGeometryData::TryClipWithRect(__int64 a1, float *a2, __int64 a3)
{
  float v3; // xmm6_4
  float v4; // xmm12_4
  float v5; // xmm8_4
  float v6; // xmm13_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm7_4
  float v12; // xmm3_4
  float v13; // xmm9_4
  float v14; // xmm4_4
  float v15; // xmm11_4
  float v16; // xmm1_4
  float v17; // xmm10_4
  float v18; // xmm14_4
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm9_4
  float v22; // xmm10_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  bool result; // al
  char v26; // al
  float *v27; // rdx
  float *v28; // rax
  float v29; // xmm9_4
  float v30; // xmm2_4
  char v31; // dl
  float *v32; // rax
  float *v33; // rax
  float v34; // xmm0_4
  float v35; // xmm2_4
  char v36; // dl
  float *v37; // rax
  float *v38; // rcx
  float v39; // xmm0_4
  float v40; // xmm1_4
  __int128 v41; // [rsp+0h] [rbp-B8h]

  v3 = *(float *)a1;
  v4 = *(float *)(a1 + 4);
  if ( *(_BYTE *)(a1 + 52) )
  {
    v5 = v3 + *(float *)(a1 + 8);
    v6 = v4 + *(float *)(a1 + 12);
  }
  else
  {
    v5 = *(float *)(a1 + 8);
    v6 = *(float *)(a1 + 12);
  }
  v41 = *(_OWORD *)a2;
  if ( COERCE_FLOAT(*(_OWORD *)a2) <= -3.4028235e38 )
    v7 = FLOAT_N3_4028235e38;
  else
    v7 = COERCE_FLOAT(*(_OWORD *)a2) + -0.015625;
  if ( *((float *)&v41 + 1) <= -3.4028235e38 )
    v8 = FLOAT_N3_4028235e38;
  else
    v8 = *((float *)&v41 + 1) + -0.015625;
  if ( *((float *)&v41 + 2) >= 3.4028235e38 )
    v9 = FLOAT_3_4028235e38;
  else
    v9 = *((float *)&v41 + 2) + 0.015625;
  if ( *((float *)&v41 + 3) >= 3.4028235e38 )
    v10 = FLOAT_3_4028235e38;
  else
    v10 = *((float *)&v41 + 3) + 0.015625;
  if ( v5 <= v3 || v6 <= v4 || v3 >= v7 && v4 >= v8 && v9 >= v5 && v10 >= v6 )
  {
    result = 1;
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(a1 + 48);
    return result;
  }
  v11 = *a2;
  if ( *a2 <= v3 )
    v11 = *(float *)a1;
  v12 = *(float *)(a1 + 4);
  v13 = v12;
  if ( a2[1] > v12 )
  {
    v12 = a2[1];
    v13 = v12;
  }
  v14 = v5;
  v15 = v5;
  v16 = v5;
  v17 = v5;
  if ( v5 > a2[2] )
  {
    v14 = a2[2];
    v15 = v14;
    v16 = v14;
    v17 = v14;
  }
  v18 = v6;
  v19 = v6;
  v20 = v6;
  if ( v6 > a2[3] )
  {
    v18 = a2[3];
    v19 = v18;
    v16 = v17;
    v20 = v18;
  }
  if ( v15 <= v11 || v19 <= v13 || (float)(v16 - 0.0000011920929) <= v11 || (float)(v20 - 0.0000011920929) <= v12 )
  {
    result = 1;
    *(_BYTE *)(a3 + 52) = 1;
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_DWORD *)(a3 + 48) = 0;
    return result;
  }
  *(float *)a3 = v11;
  *(float *)(a3 + 4) = v12;
  v21 = v11 - v3;
  *(float *)(a3 + 8) = v14;
  *(float *)(a3 + 12) = v18;
  v22 = v12 - v4;
  *(_BYTE *)(a3 + 52) = 0;
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a1 + 48);
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  v23 = *(float *)(a1 + 16);
  if ( v23 > 0.0 )
  {
    v24 = *(float *)(a1 + 20);
    if ( v24 > 0.0 )
    {
      if ( COERCE_FLOAT(LODWORD(v21) & _xmm) > 0.0000011920929 || COERCE_FLOAT(LODWORD(v22) & _xmm) > 0.0000011920929 )
      {
        if ( (float)(v23 - v21) > 0.0000011920929 && (float)(v24 - v22) > 0.0000011920929 )
          return 0;
      }
      else
      {
        *(float *)(a3 + 16) = v23;
        *(float *)(a3 + 20) = v24;
      }
    }
  }
  v26 = *(_BYTE *)(a1 + 52);
  if ( v26 )
    v27 = (float *)(a1 + 16);
  else
    v27 = (float *)(a1 + 24);
  if ( *v27 > 0.0 && v27[1] > 0.0 )
  {
    if ( v26 )
      v28 = (float *)(a1 + 16);
    else
      v28 = (float *)(a1 + 24);
    v29 = *v28;
    v30 = v28[1];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - v5) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(LODWORD(v22) & _xmm) > 0.0000011920929 )
    {
      if ( (float)(v29 - (float)(v5 - v14)) > 0.0000011920929 && (float)(v30 - (float)(v12 - v4)) > 0.0000011920929 )
        return 0;
    }
    else
    {
      *(float *)(a3 + 24) = v29;
      *(float *)(a3 + 28) = v30;
    }
  }
  v31 = *(_BYTE *)(a1 + 52);
  if ( v31 )
    v32 = (float *)(a1 + 16);
  else
    v32 = (float *)(a1 + 32);
  if ( *v32 > 0.0 && v32[1] > 0.0 )
  {
    if ( v31 )
      v33 = (float *)(a1 + 16);
    else
      v33 = (float *)(a1 + 32);
    v34 = *v33;
    v35 = v33[1];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - v5) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - v6) & _xmm) > 0.0000011920929 )
    {
      if ( (float)(v34 - (float)(v5 - v14)) > 0.0000011920929 && (float)(v35 - (float)(v6 - v18)) > 0.0000011920929 )
        return 0;
    }
    else
    {
      *(float *)(a3 + 32) = v34;
      *(float *)(a3 + 36) = v35;
    }
  }
  v36 = *(_BYTE *)(a1 + 52);
  if ( v36 )
    v37 = (float *)(a1 + 16);
  else
    v37 = (float *)(a1 + 40);
  if ( *v37 <= 0.0 || v37[1] <= 0.0 )
    return 1;
  if ( v36 )
    v38 = (float *)(a1 + 16);
  else
    v38 = (float *)(a1 + 40);
  v39 = *v38;
  v40 = v38[1];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v3) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - v6) & _xmm) > 0.0000011920929 )
  {
    return (float)(v39 - (float)(v11 - v3)) <= 0.0000011920929 || (float)(v40 - (float)(v6 - v18)) <= 0.0000011920929;
  }
  *(float *)(a3 + 40) = v39;
  *(float *)(a3 + 44) = v40;
  return 1;
}
