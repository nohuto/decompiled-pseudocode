/*
 * XREFs of ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x1801B3090
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D520 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(__int64 *a1, float *a2, _DWORD *a3)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  int v7; // r11d
  __int64 *v8; // rbp
  __int64 v9; // r9
  float v10; // xmm1_4
  int v11; // edx
  int v12; // eax
  bool v13; // cc
  float v14; // xmm0_4
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int *v18; // r10
  int v19; // ecx
  int *v20; // r8
  __int64 v21; // rdi
  float v22; // xmm1_4
  float v23; // xmm11_4
  float v24; // xmm9_4
  float v25; // xmm7_4
  float v26; // xmm2_4
  float v27; // xmm11_4
  int v28; // edx
  int v29; // eax
  bool v30; // cc
  float v31; // xmm0_4
  int v32; // eax
  int v33; // eax
  int v34; // [rsp+0h] [rbp-F8h] BYREF
  int v35; // [rsp+4h] [rbp-F4h]
  int v36; // [rsp+8h] [rbp-F0h]
  int v37; // [rsp+Ch] [rbp-ECh]
  int v38; // [rsp+10h] [rbp-E8h] BYREF
  _DWORD v39[7]; // [rsp+14h] [rbp-E4h]

  v3 = (__int64 *)a1[1];
  result = *a1;
  v7 = 0;
  v8 = &v3[*a1];
  if ( v3 == v8 )
  {
    *a3 = 0;
  }
  else
  {
    do
    {
      v9 = *v3;
      if ( *v3 && *(_BYTE *)(v9 + 52) )
      {
        if ( (LODWORD(v10) = *(_DWORD *)(v9 + 12) & _xmm, v10 < 0.000081380211)
          && COERCE_FLOAT(*(_DWORD *)(v9 + 16) & _xmm) < 0.000081380211
          || COERCE_FLOAT(*(_DWORD *)(v9 + 8) & _xmm) < 0.000081380211
          && COERCE_FLOAT(*(_DWORD *)(v9 + 20) & _xmm) < 0.000081380211 )
        {
          v11 = *(_DWORD *)(v9 + 48);
          if ( v11 == 50529027 || !v11 )
          {
            v19 = *(_DWORD *)(v9 + 48);
          }
          else
          {
            v38 = 0x1000000;
            v39[0] = 0x2000000;
            v39[1] = 1;
            v39[2] = 2;
            v39[3] = 256;
            v39[4] = 512;
            v39[5] = 0x10000;
            v39[6] = 0x20000;
            if ( v10 >= 0.000081380211 || COERCE_FLOAT(*(_DWORD *)(v9 + 16) & _xmm) >= 0.000081380211 )
            {
              v12 = 3;
              v13 = *(float *)(v9 + 16) <= 0.0;
              v14 = *(float *)(v9 + 12);
              if ( *(float *)(v9 + 16) > 0.0 )
                v12 = 1;
              v34 = v12;
              v15 = 1;
              if ( !v13 )
                v15 = 3;
              v36 = v15;
              v16 = 2;
              if ( v14 > 0.0 )
                v16 = 0;
              v35 = v16;
              v17 = 0;
              if ( v14 > 0.0 )
                v17 = 2;
            }
            else
            {
              v29 = 2;
              v30 = *(float *)(v9 + 8) <= 0.0;
              v31 = *(float *)(v9 + 20);
              if ( *(float *)(v9 + 8) > 0.0 )
                v29 = 0;
              v34 = v29;
              v32 = 0;
              if ( !v30 )
                v32 = 2;
              v36 = v32;
              v33 = 3;
              if ( v31 > 0.0 )
                v33 = 1;
              v35 = v33;
              v17 = 1;
              if ( v31 > 0.0 )
                v17 = 3;
            }
            v37 = v17;
            v18 = &v34;
            v19 = 0;
            v20 = &v38;
            v21 = 4LL;
            do
            {
              result = 2LL * (unsigned int)*v18;
              if ( (v11 & v39[2 * *v18 - 1]) != 0 )
                v19 |= *v20;
              if ( (v11 & v39[2 * *v18]) != 0 )
                v19 |= v20[1];
              ++v18;
              v20 += 2;
              --v21;
            }
            while ( v21 );
          }
          if ( v19 != v7 )
          {
            v22 = (float)((float)(*(float *)(v9 + 16) * *(float *)(v9 + 36))
                        + (float)(*(float *)(v9 + 8) * *(float *)(v9 + 32)))
                + *(float *)(v9 + 24);
            v23 = (float)((float)(*(float *)(v9 + 20) * *(float *)(v9 + 36))
                        + (float)(*(float *)(v9 + 12) * *(float *)(v9 + 32)))
                + *(float *)(v9 + 28);
            v24 = (float)((float)(*(float *)(v9 + 16) * *(float *)(v9 + 44))
                        + (float)(*(float *)(v9 + 8) * *(float *)(v9 + 40)))
                + *(float *)(v9 + 24);
            v25 = (float)((float)(*(float *)(v9 + 20) * *(float *)(v9 + 44))
                        + (float)(*(float *)(v9 + 12) * *(float *)(v9 + 40)))
                + *(float *)(v9 + 28);
            v26 = fminf(v23, v25);
            v27 = fmaxf(v23, v25);
            v28 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*a2 - fminf(v22, v24)) & _xmm) <= 0.0000011920929 ? 0x3000000 : 0;
            result = v28 | 0x300u;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2[2] - fmaxf(v22, v24)) & _xmm) <= 0.0000011920929 )
              v28 |= 0x300u;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2[1] - v26) & _xmm) <= 0.0000011920929 )
              v28 |= 3u;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2[3] - v27) & _xmm) <= 0.0000011920929 )
              v28 |= 0x30000u;
            if ( v28 )
            {
              v7 |= v28 & v19;
              if ( v7 == 50529027 )
                break;
            }
          }
        }
      }
      ++v3;
    }
    while ( v3 != v8 );
    *a3 = v7;
  }
  return result;
}
