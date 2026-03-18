/*
 * XREFs of ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z @ 0x1801ABBEC
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     _lambda_fec5e2b47f690f9ab28c17b0593ff0d9_::operator() @ 0x1801ABFB4 (_lambda_fec5e2b47f690f9ab28c17b0593ff0d9_--operator().c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CRoundedRectangleGeometryData::TryMerge(
        const struct CRoundedRectangleGeometryData *a1,
        const struct CRoundedRectangleGeometryData *a2,
        struct CRoundedRectangleGeometryData *a3)
{
  float v3; // xmm6_4
  float v5; // xmm7_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm8_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  unsigned int v17; // r15d
  float v18; // xmm2_4
  float v19; // xmm3_4
  int v20; // xmm1_4
  int v21; // xmm0_4
  int v22; // xmm1_4
  int v23; // xmm0_4
  __int64 v24; // r9
  char *v25; // rax
  char *v26; // rdx
  float *v27; // r14
  float *v28; // r12
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // rcx
  float *v32; // r8
  char v33; // cl
  char v34; // al
  float v35; // xmm0_4
  float v36; // xmm1_4
  _QWORD v38[3]; // [rsp+48h] [rbp-C0h] BYREF
  float *v39; // [rsp+60h] [rbp-A8h]
  _DWORD v40[8]; // [rsp+68h] [rbp-A0h] BYREF
  float v41; // [rsp+88h] [rbp-80h] BYREF
  int v42; // [rsp+8Ch] [rbp-7Ch]
  int v43; // [rsp+90h] [rbp-78h]
  int v44; // [rsp+94h] [rbp-74h]
  int v45; // [rsp+98h] [rbp-70h]
  int v46; // [rsp+9Ch] [rbp-6Ch]
  float v47; // [rsp+A0h] [rbp-68h]
  int v48; // [rsp+A4h] [rbp-64h]
  _DWORD v49[8]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v50[2]; // [rsp+C8h] [rbp-40h] BYREF

  v3 = *((float *)a1 + 1);
  v5 = *(float *)a1;
  if ( *((_BYTE *)a1 + 52) )
  {
    v8 = v5 + *((float *)a1 + 2);
    v9 = v3 + *((float *)a1 + 3);
  }
  else
  {
    v8 = *((float *)a1 + 2);
    v9 = *((float *)a1 + 3);
  }
  v10 = *((float *)a2 + 1);
  v11 = *(float *)a2;
  if ( *((_BYTE *)a2 + 52) )
  {
    v12 = v11 + *((float *)a2 + 2);
    v13 = v10 + *((float *)a2 + 3);
  }
  else
  {
    v12 = *((float *)a2 + 2);
    v13 = *((float *)a2 + 3);
  }
  if ( v11 > v5 )
    v5 = *(float *)a2;
  v14 = *((float *)a1 + 1);
  if ( v10 > v3 )
  {
    v3 = *((float *)a2 + 1);
    v14 = v3;
  }
  v15 = v8;
  if ( v8 > v12 )
  {
    v8 = v12;
    v15 = v12;
  }
  v16 = v9;
  if ( v9 > v13 )
  {
    v9 = v13;
    v16 = v13;
  }
  if ( v15 <= v5 || v16 <= v14 || (float)(v8 - 0.0000011920929) <= v5 || (float)(v9 - 0.0000011920929) <= v3 )
  {
    *((_BYTE *)a3 + 52) = 1;
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
    *((_QWORD *)a3 + 2) = 0LL;
    *((_DWORD *)a3 + 12) = 0;
  }
  else
  {
    *(float *)a3 = v5;
    v17 = 0;
    *((float *)a3 + 1) = v3;
    *((float *)a3 + 2) = v8;
    *((float *)a3 + 3) = v9;
    *((_BYTE *)a3 + 52) = 0;
    *((_OWORD *)a3 + 1) = 0LL;
    BYTE1(v38[0]) = 0;
    *((_OWORD *)a3 + 2) = 0LL;
    LOBYTE(v38[0]) = 0;
    v18 = *(float *)a1;
    v19 = *(float *)a2;
    v50[0] = _xmm_bf8000003f800000bf800000bf800000;
    v42 = *((_DWORD *)a1 + 1);
    v44 = v42;
    v46 = *((_DWORD *)a1 + 3);
    v48 = v46;
    v20 = *((_DWORD *)a2 + 1);
    v50[1] = _xmm;
    v21 = *((_DWORD *)a1 + 2);
    v49[1] = v20;
    v49[3] = v20;
    v22 = *((_DWORD *)a2 + 3);
    v43 = v21;
    v45 = v21;
    v23 = *((_DWORD *)a2 + 2);
    v49[5] = v22;
    v49[7] = v22;
    v41 = v18;
    v47 = v18;
    *(float *)v49 = v19;
    v49[2] = v23;
    v49[4] = v23;
    *(float *)&v49[6] = v19;
    *(float *)v40 = v5;
    *(float *)&v40[1] = v3;
    *(float *)&v40[2] = v8;
    *(float *)&v40[3] = v3;
    *(float *)&v40[4] = v8;
    *(float *)&v40[5] = v9;
    *(float *)&v40[6] = v5;
    *(float *)&v40[7] = v9;
    while ( v17 < 4 )
    {
      v24 = 16LL;
      v25 = (char *)a2 + 16;
      if ( !*((_BYTE *)a1 + 52) )
        v24 = 8LL * v17 + 16;
      v39 = &v41 + 2 * v17;
      v26 = (char *)v50 + 8 * v17;
      v38[2] = (char *)a1 + v24;
      v27 = (float *)&v40[2 * v17];
      v28 = (float *)&v49[2 * v17];
      if ( !*((_BYTE *)a2 + 52) )
        v25 = (char *)a2 + 8 * v17 + 16;
      v29 = *v28 == *v27;
      v38[1] = v25;
      if ( v29 && v28[1] == v27[1] )
      {
        if ( !(unsigned __int8)lambda_fec5e2b47f690f9ab28c17b0593ff0d9_::operator()(v38, v26, v28) )
          return 0;
        v32 = v39;
      }
      else
      {
        if ( !(unsigned __int8)lambda_fec5e2b47f690f9ab28c17b0593ff0d9_::operator()(v17, v26, &v41 + 2 * v17) )
          return 0;
        v32 = (float *)&v49[2 * v17];
      }
      if ( !(unsigned __int8)lambda_fec5e2b47f690f9ab28c17b0593ff0d9_::operator()(v31, v30, v32) )
        return 0;
      ++v17;
    }
    v33 = BYTE1(v38[0]);
    v34 = v38[0];
    if ( LOWORD(v38[0]) )
    {
      v35 = FLOAT_3_4028235e38;
      *((_DWORD *)a3 + 12) = 2139095039;
      if ( v33 )
      {
        v35 = *((float *)a1 + 12);
        *((float *)a3 + 12) = v35;
      }
      if ( v34 )
      {
        v36 = *((float *)a2 + 12);
        if ( v35 > v36 )
          *((float *)a3 + 12) = v36;
      }
    }
  }
  return 1;
}
