/*
 * XREFs of ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAUD2D_POINT_3F@@@Z @ 0x180020C40
 * Callers:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18001F160 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800214B0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform3DRectToPerspective(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm9_4
  float v5; // xmm8_4
  float v7; // xmm6_4
  float v8; // xmm3_4
  float v9; // xmm13_4
  float v10; // xmm5_4
  float v11; // xmm15_4
  float v12; // xmm4_4
  float v13; // xmm14_4
  float v14; // xmm10_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  float *v19; // rdx
  char v20; // r11
  float *v21; // rax
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm8_4
  float v26; // xmm0_4
  float v27; // xmm9_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm1_4
  float v31; // xmm8_4
  float v32; // xmm4_4
  float v33; // xmm9_4
  float v34; // xmm13_4
  float v35; // xmm11_4
  float v36; // xmm12_4
  float v37; // xmm2_4
  float v38; // xmm8_4
  float v39; // xmm9_4
  float v40; // xmm6_4
  float v41; // xmm7_4
  __int64 v42; // rcx
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm0_4
  bool v46; // cl
  float v48; // [rsp+0h] [rbp-F8h]
  float v49; // [rsp+4h] [rbp-F4h]
  float v50; // [rsp+8h] [rbp-F0h]
  float v51; // [rsp+14h] [rbp-E4h]
  float v52; // [rsp+18h] [rbp-E0h]
  float v53; // [rsp+1Ch] [rbp-DCh]
  float v54; // [rsp+20h] [rbp-D8h]
  float v55[8]; // [rsp+28h] [rbp-D0h] BYREF

  v3 = a2[2];
  v5 = a2[3];
  v7 = *(float *)(a1 + 20) * a2[1];
  v8 = *a2 * *(float *)a1;
  v9 = a2[4] * *(float *)(a1 + 32);
  v10 = *(float *)(a1 + 40) * a2[4];
  v11 = a2[1] * *(float *)(a1 + 16);
  v12 = *(float *)(a1 + 4) * *a2;
  v13 = *(float *)(a1 + 36) * a2[4];
  v14 = *(float *)(a1 + 8) * *a2;
  v15 = v5 * *(float *)(a1 + 16);
  v16 = v5 * *(float *)(a1 + 20);
  v17 = v5 * *(float *)(a1 + 24);
  v48 = v3 * *(float *)a1;
  v49 = v3 * *(float *)(a1 + 4);
  v51 = *(float *)(a1 + 24) * a2[1];
  v50 = v3 * *(float *)(a1 + 8);
  v18 = a2[5];
  v19 = a3 + 2;
  v52 = v18 * *(float *)(a1 + 32);
  v53 = v18 * *(float *)(a1 + 36);
  v54 = v18 * *(float *)(a1 + 40);
  *a3 = (float)((float)(v11 + v8) + v9) + *(float *)(a1 + 48);
  a3[1] = (float)((float)(v7 + v12) + v13) + *(float *)(a1 + 52);
  a3[2] = (float)((float)(v51 + v14) + v10) + *(float *)(a1 + 56);
  a3[3] = (float)((float)(v15 + v8) + v9) + *(float *)(a1 + 48);
  a3[4] = (float)((float)(v16 + v12) + v13) + *(float *)(a1 + 52);
  a3[5] = (float)((float)(v17 + v14) + v10) + *(float *)(a1 + 56);
  a3[6] = (float)((float)(v48 + v15) + v9) + *(float *)(a1 + 48);
  a3[7] = (float)((float)(v49 + v16) + v13) + *(float *)(a1 + 52);
  a3[8] = (float)((float)(v50 + v17) + v10) + *(float *)(a1 + 56);
  a3[9] = (float)((float)(v48 + v11) + v9) + *(float *)(a1 + 48);
  a3[10] = (float)((float)(v49 + v7) + v13) + *(float *)(a1 + 52);
  a3[11] = (float)((float)(v50 + v51) + v10) + *(float *)(a1 + 56);
  a3[12] = (float)((float)(v11 + v8) + v52) + *(float *)(a1 + 48);
  a3[13] = (float)((float)(v7 + v12) + v53) + *(float *)(a1 + 52);
  a3[14] = (float)((float)(v51 + v14) + v54) + *(float *)(a1 + 56);
  a3[15] = (float)((float)(v15 + v8) + v52) + *(float *)(a1 + 48);
  a3[16] = (float)((float)(v16 + v12) + v53) + *(float *)(a1 + 52);
  a3[17] = (float)((float)(v17 + v14) + v54) + *(float *)(a1 + 56);
  a3[18] = (float)((float)(v48 + v15) + v52) + *(float *)(a1 + 48);
  a3[19] = (float)((float)(v49 + v16) + v53) + *(float *)(a1 + 52);
  a3[20] = (float)((float)(v50 + v17) + v54) + *(float *)(a1 + 56);
  a3[21] = (float)((float)(v48 + v11) + v52) + *(float *)(a1 + 48);
  a3[22] = (float)((float)(v49 + v7) + v53) + *(float *)(a1 + 52);
  a3[23] = (float)((float)(v50 + v51) + v54) + *(float *)(a1 + 56);
  v20 = *(_BYTE *)(a1 + 65);
  LOBYTE(v21) = (char)(4 * v20) >> 6;
  if ( (_BYTE)v21 == 1 )
    goto LABEL_4;
  if ( (char)v21 < 0 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
      return (char)v21;
    goto LABEL_4;
  }
  LODWORD(v45) = *(_DWORD *)(a1 + 44) & _xmm;
  v46 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                     + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                             + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                     - 1.0) & _xmm) < 0.000081380211;
  *(_BYTE *)(a1 + 65) = v20 & 0xCF | (32 * v46 + 16);
  LOBYTE(v21) = v46;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v45 * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
    LOBYTE(v21) = 0;
  if ( !(_BYTE)v21 )
  {
LABEL_4:
    v22 = *(float *)(a1 + 60);
    v23 = *(float *)(a1 + 12);
    v24 = v23 * a2[2];
    v25 = *(float *)(a1 + 28) * a2[1];
    v26 = v23 * *a2;
    v27 = *(float *)(a1 + 28) * a2[3];
    v28 = v27 + v24;
    v29 = v25 + v24;
    v30 = *(float *)(a1 + 44) * a2[4];
    v31 = v25 + v26;
    v32 = *(float *)(a1 + 44) * a2[5];
    v33 = v27 + v26;
    v34 = (float)(v31 + v30) + v22;
    v35 = (float)(v33 + v30) + v22;
    v36 = (float)(v28 + v30) + v22;
    v37 = (float)(v29 + v30) + v22;
    v55[0] = v34;
    v38 = (float)(v31 + v32) + v22;
    v55[1] = v35;
    v39 = (float)(v33 + v32) + v22;
    v55[2] = v36;
    v40 = (float)(v28 + v32) + v22;
    v41 = (float)(v29 + v32) + v22;
    v55[3] = v37;
    v55[4] = v38;
    v55[5] = v39;
    v55[6] = v40;
    v55[7] = v41;
    if ( v34 < 0.000081380211
      || v35 < 0.000081380211
      || v36 < 0.000081380211
      || v37 < 0.000081380211
      || v38 < 0.000081380211
      || v39 < 0.000081380211
      || v40 < 0.000081380211
      || v41 < 0.000081380211 )
    {
      if ( v34 >= -0.000081380211
        || v35 >= -0.000081380211
        || v36 >= -0.000081380211
        || v37 >= -0.000081380211
        || v38 >= -0.000081380211
        || v39 >= -0.000081380211
        || v40 >= -0.000081380211
        || v41 >= -0.000081380211 )
      {
        LOBYTE(v21) = -1;
        a3[15] = -3.4028235e38;
        a3[12] = -3.4028235e38;
        a3[3] = -3.4028235e38;
        *a3 = -3.4028235e38;
        a3[21] = 3.4028235e38;
        a3[18] = 3.4028235e38;
        a3[9] = 3.4028235e38;
        a3[6] = 3.4028235e38;
        a3[22] = -3.4028235e38;
        a3[13] = -3.4028235e38;
        a3[10] = -3.4028235e38;
        a3[1] = -3.4028235e38;
        a3[19] = 3.4028235e38;
        a3[16] = 3.4028235e38;
        a3[7] = 3.4028235e38;
        a3[4] = 3.4028235e38;
        a3[11] = -3.4028235e38;
        a3[8] = -3.4028235e38;
        a3[5] = -3.4028235e38;
        *v19 = -3.4028235e38;
        a3[23] = 3.4028235e38;
        a3[20] = 3.4028235e38;
        a3[17] = 3.4028235e38;
        a3[14] = 3.4028235e38;
      }
      else
      {
        *(_QWORD *)(a3 + 15) = 0LL;
        *((_QWORD *)a3 + 6) = 0LL;
        *(_QWORD *)(a3 + 3) = 0LL;
        *(_QWORD *)a3 = 0LL;
        *(_QWORD *)(a3 + 21) = 0LL;
        *((_QWORD *)a3 + 9) = 0LL;
        *(_QWORD *)(a3 + 9) = 0LL;
        *((_QWORD *)a3 + 3) = 0LL;
        a3[11] = 0.0;
        a3[8] = 0.0;
        a3[5] = 0.0;
        *v19 = 0.0;
        a3[23] = 0.0;
        a3[20] = 0.0;
        a3[17] = 0.0;
        a3[14] = 0.0;
      }
    }
    else
    {
      v21 = v55;
      v42 = 8LL;
      do
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*v21 - 1.0) & _xmm) >= 0.000081380211 )
        {
          v43 = *(v19 - 1) / *v21;
          *(v19 - 2) = *(v19 - 2) / *v21;
          v44 = *v19 / *v21;
          *(v19 - 1) = v43;
          *v19 = v44;
        }
        ++v21;
        v19 += 3;
        --v42;
      }
      while ( v42 );
    }
  }
  return (char)v21;
}
