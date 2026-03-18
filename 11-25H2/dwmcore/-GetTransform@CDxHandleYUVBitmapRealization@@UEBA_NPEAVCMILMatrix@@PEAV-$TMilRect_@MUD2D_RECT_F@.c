/*
 * XREFs of ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002BD80
 * Callers:
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802E2530 (-GetTransform@CDxHandleYUVBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_REC.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C060 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18002C178 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18002C31C (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180089340 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18012187C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18025AD80 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetTransform(_DWORD *a1, __int64 a2, __int64 a3)
{
  int v6; // r15d
  int v7; // r12d
  int v8; // r8d
  int v9; // r8d
  CMILMatrix *v10; // rcx
  float v11; // xmm2_4
  float v12; // xmm1_4
  char result; // al
  int v14; // r8d
  char v15; // al
  __int128 v16; // [rsp+38h] [rbp-39h]
  _BYTE v17[64]; // [rsp+48h] [rbp-29h] BYREF
  int v18; // [rsp+88h] [rbp+17h]

  if ( (a1[40] & 0x4000) == 0 )
  {
    v6 = a1[34];
    v7 = a1[35];
    v8 = (*(__int64 (__fastcall **)(_DWORD *))(*((_QWORD *)a1 - 10) + 56LL))(a1 - 20);
    *(_QWORD *)a2 = 1065353216LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 20) = 1065353216LL;
    *(_QWORD *)(a2 + 28) = 0LL;
    *(_DWORD *)(a2 + 36) = 0;
    *(_QWORD *)(a2 + 40) = 1065353216LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 56) = 0;
    *(_DWORD *)(a2 + 60) = 1065353216;
    *(_BYTE *)(a2 + 65) = *(_BYTE *)(a2 + 65) & 0xC0 | 0x29;
    *(_BYTE *)(a2 + 64) = -86;
    if ( v8 == 1 )
    {
      result = 0;
LABEL_7:
      if ( a3 )
      {
        *(_QWORD *)a3 = 0LL;
        *(float *)(a3 + 8) = (float)(int)a1[34];
        *(float *)(a3 + 12) = (float)(int)a1[35];
      }
      return result;
    }
    v9 = v8 - 2;
    if ( v9 )
    {
      v14 = v9 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          goto LABEL_6;
        CMILMatrix::Rotate90((CMILMatrix *)a2);
        v12 = (float)v7;
        v11 = 0.0;
      }
      else
      {
        CMILMatrix::Scale((CMILMatrix *)a2, -1.0, -1.0, 1.0);
        v11 = (float)v7;
        v12 = (float)v6;
      }
    }
    else
    {
      CMILMatrix::Rotate270((CMILMatrix *)a2);
      v11 = (float)v6;
      v12 = 0.0;
    }
    CMILMatrix::Translate(v10, v12, v11);
LABEL_6:
    result = 1;
    goto LABEL_7;
  }
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  v15 = *(_BYTE *)(a2 + 64) & 0xFE;
  v18 = 0;
  *(_BYTE *)(a2 + 64) = v15 & 1 | 0xAA;
  *(_BYTE *)(a2 + 65) = *(_BYTE *)(a2 + 65) & 0xC0 | 0x29;
  CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
    (CBitmapRealization *)(a1 - 20),
    (struct CMILMatrix *)v17);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)0) & _xmm) >= 0.0000011920929 )
    CMILMatrix::Translate(
      (CMILMatrix *)a2,
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)0) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)0) ^ _xmm));
  if ( !(unsigned __int8)CMILMatrix::IsIdentity<0>(v17) )
    CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v17);
  result = CMILMatrix::IsIdentity<0>(a2) ^ 1;
  if ( a3 )
  {
    *((float *)&v16 + 1) = (float)0;
    *(float *)&v16 = (float)0;
    *((float *)&v16 + 3) = (float)0;
    *((float *)&v16 + 2) = (float)0;
    *(_OWORD *)a3 = v16;
  }
  return result;
}
