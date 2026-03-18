/*
 * XREFs of ?GetTransform@CGDIBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C6B10
 * Callers:
 *     ?GetTransform@CGDIBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802D9800 (-GetTransform@CGDIBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?GetTransform@CGDIBitmapRealization@@WBEA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802D9820 (-GetTransform@CGDIBitmapRealization@@WBEA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGDIBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  int v3; // r9d
  unsigned __int8 v6; // bp
  int *v7; // rsi
  char v8; // cl
  char v9; // cl
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  int v26; // [rsp+50h] [rbp+8h] BYREF
  int v27; // [rsp+54h] [rbp+Ch]

  *(_QWORD *)a2 = 1065353216LL;
  v3 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  v6 = 0;
  *(_DWORD *)(a2 + 36) = 0;
  v7 = (int *)(a1 + 336);
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  v8 = *(_BYTE *)(a2 + 65);
  *(_BYTE *)(a2 + 64) = -86;
  v9 = v8 & 0xC0 | 0x29;
  *(_BYTE *)(a2 + 65) = v9;
  v10 = *(_DWORD *)(a1 + 328);
  if ( v10 || *v7 )
  {
    LODWORD(v16) = COERCE_UNSIGNED_INT((float)v10) ^ _xmm;
    LODWORD(v17) = COERCE_UNSIGNED_INT((float)*v7) ^ _xmm;
    if ( COERCE_FLOAT(LODWORD(v16) & _xmm) >= 0.000081380211 || COERCE_FLOAT(LODWORD(v17) & _xmm) >= 0.000081380211 )
    {
      v18 = *(float *)(a2 + 44);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(0.0 * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
      {
        *(_BYTE *)(a2 + 65) = v9 & 0xF3;
        v20 = (float)(0.0 * v16) + *(float *)a2;
        v21 = (float)(0.0 * v17) + *(float *)(a2 + 4);
        *(float *)(a2 + 20) = (float)(0.0 * v17) + *(float *)(a2 + 20);
        *(float *)a2 = v20;
        *(float *)(a2 + 4) = v21;
        *(float *)(a2 + 16) = (float)(0.0 * v16) + *(float *)(a2 + 16);
        v22 = v18 * v16;
        v23 = (float)(v18 * v17) + *(float *)(a2 + 36);
        *(float *)(a2 + 32) = v22 + *(float *)(a2 + 32);
        v24 = (float)(1.0 * v16) + *(float *)(a2 + 48);
        *(float *)(a2 + 36) = v23;
        v25 = (float)(1.0 * v17) + *(float *)(a2 + 52);
        *(float *)(a2 + 48) = v24;
        *(float *)(a2 + 52) = v25;
      }
      else
      {
        v19 = v17 + *(float *)(a2 + 52);
        *(float *)(a2 + 48) = v16 + *(float *)(a2 + 48);
        *(float *)(a2 + 52) = v19;
      }
      *(_BYTE *)(a2 + 64) = -88;
    }
    v6 = 1;
    v7 = (int *)(a1 + 336);
  }
  if ( a3 )
  {
    v11 = *(_QWORD *)(a1 + 296);
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v11 + 72) + 88LL))(v11 + 72, &v26);
      v3 = v27;
      v12 = v26;
    }
    else
    {
      v12 = 0;
      v7 = (int *)(a1 + 336);
    }
    v13 = (float)*(int *)(a1 + 328);
    *a3 = v13;
    v14 = (float)*v7;
    a3[1] = v14;
    a3[2] = fmaxf(v13, (float)(v12 - *(_DWORD *)(a1 + 332)));
    a3[3] = fmaxf(v14, (float)(v3 - *(_DWORD *)(a1 + 340)));
  }
  return v6;
}
