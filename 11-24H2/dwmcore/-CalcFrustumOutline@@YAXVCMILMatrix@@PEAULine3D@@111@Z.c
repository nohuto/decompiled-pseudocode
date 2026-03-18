/*
 * XREFs of ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x180165F78
 * Callers:
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x180165AE4 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z @ 0x1801674F8 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 *     log10f_0 @ 0x1802DF638 (log10f_0.c)
 *     powf_0 @ 0x1802DF65C (powf_0.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 */

float *__fastcall CalcFrustumOutline(CMILMatrix *a1, float *a2, float *a3, float *a4, float *a5)
{
  float *v5; // rbx
  int v6; // xmm1_4
  int v10; // xmm0_4
  char v12; // r14
  int v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  __int64 v16; // rsi
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float *v20; // rax
  float v21; // xmm3_4
  __int64 v22; // rcx
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm4_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  float v34; // xmm6_4
  float v35; // xmm4_4
  float v36; // xmm1_4
  float v37; // xmm3_4
  float v38; // xmm4_4
  float v39; // xmm6_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm2_4
  float v43; // xmm5_4
  float *result; // rax
  float v45; // xmm7_4
  float v46; // xmm2_4
  float v47; // xmm3_4
  float v48; // xmm4_4
  float v49; // xmm1_4
  float v50; // xmm6_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm6_4
  _DWORD v55[6]; // [rsp+30h] [rbp-D8h] BYREF
  float v56[3]; // [rsp+48h] [rbp-C0h] BYREF
  float v57; // [rsp+54h] [rbp-B4h]
  float v58; // [rsp+58h] [rbp-B0h]
  float v59; // [rsp+5Ch] [rbp-ACh]
  float v60; // [rsp+60h] [rbp-A8h]
  float v61; // [rsp+64h] [rbp-A4h]
  float v62; // [rsp+68h] [rbp-A0h]
  float v63; // [rsp+6Ch] [rbp-9Ch]
  float v64; // [rsp+70h] [rbp-98h]
  float v65; // [rsp+74h] [rbp-94h]
  float v66; // [rsp+78h] [rbp-90h]
  float v67; // [rsp+7Ch] [rbp-8Ch]
  float v68; // [rsp+80h] [rbp-88h]
  float v69; // [rsp+84h] [rbp-84h]
  float v70; // [rsp+88h] [rbp-80h]
  float v71; // [rsp+8Ch] [rbp-7Ch]
  float v72; // [rsp+90h] [rbp-78h]
  float v73; // [rsp+94h] [rbp-74h]
  float v74; // [rsp+98h] [rbp-70h]
  float v75; // [rsp+9Ch] [rbp-6Ch]
  float v76; // [rsp+A0h] [rbp-68h]
  float v77; // [rsp+A4h] [rbp-64h]
  float v78; // [rsp+A8h] [rbp-60h]
  float v79; // [rsp+ACh] [rbp-5Ch]
  float v80; // [rsp+B0h] [rbp-58h]
  float v81; // [rsp+B4h] [rbp-54h]
  float v82; // [rsp+B8h] [rbp-50h]
  float v83; // [rsp+BCh] [rbp-4Ch]
  float v84; // [rsp+C0h] [rbp-48h]
  float v85; // [rsp+C4h] [rbp-44h]
  _OWORD v86[8]; // [rsp+C8h] [rbp-40h] BYREF

  v5 = (float *)v55;
  v6 = *((_DWORD *)a1 + 7);
  v55[0] = *((_DWORD *)a1 + 3);
  v10 = *((_DWORD *)a1 + 11);
  v55[1] = v6;
  v12 = 0;
  v13 = *((_DWORD *)a1 + 15);
  v14 = 0.0;
  v55[2] = v10;
  v15 = 0.0;
  v55[3] = v13;
  v16 = 4LL;
  do
  {
    if ( *v5 == 0.0 )
      goto LABEL_3;
    v53 = log10f_0(COERCE_FLOAT(*(_DWORD *)v5 & _xmm));
    v54 = v53 / log10f_0(2.0);
    *v5 = v54;
    if ( !v12 )
    {
      v12 = 1;
      v14 = v54;
LABEL_9:
      v15 = v54;
      goto LABEL_3;
    }
    if ( v54 <= v14 )
    {
      v54 = fminf(v54, v15);
      goto LABEL_9;
    }
    v14 = v54;
LABEL_3:
    ++v5;
    --v16;
  }
  while ( v16 );
  v17 = sqrtf_0(v14 - v15);
  v18 = floorf_0(v17);
  v19 = powf_0(2.0, v18);
  v20 = (float *)v86 + 2;
  v86[0] = _xmm;
  v21 = v19;
  v22 = 8LL;
  v86[2] = _xmm;
  v86[1] = _xmm;
  v86[4] = _xmm;
  v86[3] = _xmm;
  v86[6] = _xmm;
  v86[5] = _xmm;
  v86[7] = _xmm;
  do
  {
    v23 = v21 * *(v20 - 1);
    *(v20 - 2) = v21 * *(v20 - 2);
    v24 = v21 * *v20;
    *(v20 - 1) = v23;
    *v20 = v24;
    v20 += 4;
    --v22;
  }
  while ( v22 );
  CMILMatrix::Transform(a1, (const struct D2D_POINT_4F *)v86, (struct D2D_POINT_4F *)v56, 8u);
  v25 = v70 * (float)(1.0 / v73);
  v26 = v71 * (float)(1.0 / v73);
  v27 = v56[2] * (float)(1.0 / v57);
  v28 = v56[0] * (float)(1.0 / v57);
  v29 = (float)(v72 * (float)(1.0 / v73)) - v27;
  v30 = v56[1] * (float)(1.0 / v57);
  *a2 = v28;
  a2[1] = v30;
  a2[2] = v27;
  a2[3] = v25 - v28;
  a2[4] = v26 - v30;
  a2[5] = v29;
  v31 = v74 * (float)(1.0 / v77);
  v32 = v75 * (float)(1.0 / v77);
  v33 = v60 * (float)(1.0 / v61);
  v34 = v58 * (float)(1.0 / v61);
  v35 = (float)(v76 * (float)(1.0 / v77)) - v33;
  v36 = v59 * (float)(1.0 / v61);
  *a3 = v34;
  a3[1] = v36;
  a3[2] = v33;
  a3[3] = v31 - v34;
  a3[4] = v32 - v36;
  a3[5] = v35;
  v37 = v79 * (float)(1.0 / v81);
  v38 = v80 * (float)(1.0 / v81);
  v39 = v62 * (float)(1.0 / v65);
  v40 = v63 * (float)(1.0 / v65);
  v41 = v64 * (float)(1.0 / v65);
  v42 = (float)(v78 * (float)(1.0 / v81)) - v39;
  *a4 = v39;
  a4[1] = v40;
  a4[2] = v41;
  a4[3] = v42;
  a4[4] = v37 - v40;
  a4[5] = v38 - v41;
  v43 = 1.0 / v69;
  result = a5;
  v45 = 1.0 / v85;
  v46 = v82;
  v47 = v83;
  v48 = v84;
  v49 = v68;
  v50 = v66 * (float)(1.0 / v69);
  v51 = v67 * (float)(1.0 / v69);
  *a5 = v50;
  v52 = v49 * v43;
  a5[1] = v51;
  a5[2] = v52;
  a5[3] = (float)(v46 * v45) - v50;
  a5[4] = (float)(v47 * v45) - v51;
  a5[5] = (float)(v48 * v45) - v52;
  return result;
}
