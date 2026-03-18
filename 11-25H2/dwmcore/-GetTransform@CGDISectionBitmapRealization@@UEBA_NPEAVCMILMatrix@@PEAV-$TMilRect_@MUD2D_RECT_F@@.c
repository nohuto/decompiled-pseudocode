/*
 * XREFs of ?GetTransform@CGDISectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E6290
 * Callers:
 *     ?GetTransform@CGDISectionBitmapRealization@@WBDI@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802DFFA0 (-GetTransform@CGDISectionBitmapRealization@@WBDI@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18012187C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGDISectionBitmapRealization::GetTransform(int *a1, __int64 a2, float *a3)
{
  int *v3; // rbx
  char v6; // bp
  char v7; // al
  int v8; // eax
  float v9; // xmm2_4
  float v10; // xmm1_4
  int v11; // ecx
  float v12; // xmm3_4
  int v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+34h] [rbp+Ch]

  v3 = a1 + 82;
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v6 = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  v7 = *(_BYTE *)(a2 + 65) & 0xE9;
  *(_BYTE *)(a2 + 64) = -86;
  *(_BYTE *)(a2 + 65) = v7 | 0x29;
  v8 = a1[80];
  if ( v8 || *v3 )
  {
    CMILMatrix::Translate(
      (CMILMatrix *)a2,
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v8) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v3) ^ _xmm));
    v6 = 1;
  }
  if ( a3 )
  {
    (*(void (__fastcall **)(int *, int *))(*(_QWORD *)a1 + 32LL))(a1, &v14);
    v9 = (float)a1[80];
    v10 = (float)v14;
    v11 = v15;
    *a3 = v9;
    v12 = (float)*v3;
    a3[1] = v12;
    a3[2] = fmaxf(v9, v10 - (float)a1[81]);
    a3[3] = fmaxf(v12, (float)v11 - (float)a1[83]);
  }
  return v6;
}
