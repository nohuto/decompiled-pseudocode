/*
 * XREFs of bCvtVts @ 0x14010AFE8
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x14010AF10 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU2@_K@Z @ 0x1401C36E0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU2@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K_N@Z @ 0x1401C3820 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K_N@Z.c)
 * Callees:
 *     bFToL @ 0x14003BE84 (bFToL.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall bCvtVts(__int64 a1, int *a2, int *a3, __int64 a4, char a5)
{
  __int64 v5; // rdi
  int *v6; // rbx
  int *v7; // rsi
  signed __int64 v9; // rsi
  unsigned int v10; // r8d
  double v11; // xmm0_8
  double v12; // xmm1_8
  unsigned int v13; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  float v17; // xmm2_4
  double v18; // xmm0_8
  double v19; // xmm3_8
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  int v22; // [rsp+20h] [rbp-28h] BYREF
  int v23; // [rsp+24h] [rbp-24h]
  int v24; // [rsp+28h] [rbp-20h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 3) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1 && a4 )
    {
      v9 = (char *)a2 - (char *)a3;
      v10 = 6;
      while ( 1 )
      {
        *(_QWORD *)&v11 = COERCE_UNSIGNED_INT((float)*(int *)((char *)v6 + v9));
        *(_QWORD *)&v12 = COERCE_UNSIGNED_INT((float)*(int *)((char *)v6 + v9 + 4));
        *(float *)&v11 = *(float *)&v11 * *(float *)a1;
        *(float *)&v12 = *(float *)&v12 * *(float *)(a1 + 12);
        if ( a5 )
        {
          if ( !(unsigned int)bFToL(v11, v6, v10) || !(unsigned int)bFToL(v12, v6 + 1, v13) )
          {
            v23 = 1;
            goto LABEL_9;
          }
        }
        else
        {
          bFToL(v11, v6, v10);
          bFToL(v12, v6 + 1, v15);
        }
        v6 += 2;
        if ( !--v5 )
          return 1LL;
      }
    }
    return 1LL;
  }
  if ( !a4 )
    return 1LL;
  v16 = 6;
  while ( 1 )
  {
    *(_QWORD *)&v19 = COERCE_UNSIGNED_INT((float)*v7);
    v17 = (float)v7[1];
    HIDWORD(v18) = 0;
    *(float *)&v18 = (float)(v17 * *(float *)(a1 + 8)) + (float)(*(float *)&v19 * *(float *)a1);
    *(float *)&v19 = (float)(*(float *)&v19 * *(float *)(a1 + 4)) + (float)(v17 * *(float *)(a1 + 12));
    if ( a5 )
      break;
    bFToL(v18, v6, v16);
    bFToL(v19, v6 + 1, v21);
LABEL_20:
    v7 += 2;
    v6 += 2;
    if ( !--v5 )
      return 1LL;
  }
  if ( (unsigned int)bFToL(v18, v6, v16) && (unsigned int)bFToL(v19, v6 + 1, v20) )
    goto LABEL_20;
  v23 = 2;
LABEL_9:
  v24 = 0;
  v22 = 59177360;
  RtlLogUnexpectedCodepath(&v22);
  return 0LL;
}
