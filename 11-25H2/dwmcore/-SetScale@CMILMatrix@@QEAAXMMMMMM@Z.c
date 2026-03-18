/*
 * XREFs of ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18016DEF8
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800A0970 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A1E00 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18016CE28 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18016DEA0 (-GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1802AD130 (-GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802B4C20 (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Get3DBounds@CSceneWorld@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B4D28 (-Get3DBounds@CSceneWorld@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?make_float4x4_scale@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@0@Z @ 0x18016E038 (-make_float4x4_scale@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@0@Z.c)
 */

void __fastcall CMILMatrix::SetScale(CMILMatrix *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  CMILMatrix *v7; // r9
  char v8; // cl
  char v9; // cl
  _OWORD *v10; // rax
  char v11; // cl
  __int128 v12; // xmm1
  _DWORD v13[3]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v14[3]; // [rsp+2Ch] [rbp-6Ch] BYREF
  _BYTE v15[72]; // [rsp+38h] [rbp-60h] BYREF

  v7 = this;
  if ( a4 == 1.0 && a5 == 0.0 && a6 == 0.0 && a7 == 0.0 )
  {
    *(float *)this = a2;
    *(_QWORD *)((char *)this + 4) = 0LL;
    *(_QWORD *)((char *)this + 12) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *(_QWORD *)((char *)this + 60) = 1065353216LL;
    v8 = *((_BYTE *)this + 65) & 0xFB;
    *((float *)v7 + 5) = a3;
    *((_QWORD *)v7 + 5) = 1065353216LL;
    *((_BYTE *)v7 + 64) = -120;
    v9 = v8 & 0xC4 | 0x29;
  }
  else
  {
    *(float *)v13 = a5;
    *(float *)&v13[1] = a6;
    *(float *)&v13[2] = a7;
    *(float *)v14 = a2;
    *(float *)&v14[1] = a3;
    *(float *)&v14[2] = a4;
    v10 = (_OWORD *)((__int64 (__fastcall *)(_BYTE *, _DWORD *, _DWORD *, CMILMatrix *))Windows::Foundation::Numerics::make_float4x4_scale)(
                      v15,
                      v14,
                      v13,
                      this);
    v11 = *((_BYTE *)v7 + 65) & 0xF0 | 9;
    *(_OWORD *)v7 = *v10;
    *((_OWORD *)v7 + 1) = v10[1];
    *((_OWORD *)v7 + 2) = v10[2];
    v12 = v10[3];
    *((_BYTE *)v7 + 64) = -120;
    v9 = v11 & 0xCF | 0x20;
    *((_OWORD *)v7 + 3) = v12;
  }
  *((_BYTE *)v7 + 65) = v9;
}
