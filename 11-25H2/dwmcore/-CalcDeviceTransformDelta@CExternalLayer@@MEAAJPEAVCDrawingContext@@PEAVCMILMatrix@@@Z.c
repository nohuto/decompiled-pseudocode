/*
 * XREFs of ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180170B40
 * Callers:
 *     <none>
 * Callees:
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800A41A4 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A42B0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180170C98 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 */

__int64 __fastcall CExternalLayer::CalcDeviceTransformDelta(
        CExternalLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // xmm0_4
  unsigned int v8; // xmm1_4
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v14; // [rsp+38h] [rbp-39h] BYREF
  __int128 v15; // [rsp+48h] [rbp-29h] BYREF
  __int128 v16; // [rsp+58h] [rbp-19h] BYREF
  __int128 v17; // [rsp+68h] [rbp-9h] BYREF
  _OWORD v18[4]; // [rsp+78h] [rbp+7h] BYREF
  int v19; // [rsp+B8h] [rbp+47h]

  v19 = 0;
  v14 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  CDrawingContext::GetClipBoundsWorld((__int64)a2, (float *)&v17);
  v5 = AlignRectFToPointAndSizeL((float *)&v17, &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xE4Au, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x41u, 0LL);
  }
  else
  {
    *(_QWORD *)&v15 = 0LL;
    *(float *)&v16 = (float)(int)v14;
    *((float *)&v16 + 2) = (float)SDWORD2(v14) + (float)(int)v14;
    *(float *)&v7 = (float)*((int *)this + 7);
    *((float *)&v16 + 3) = (float)SHIDWORD(v14) + (float)SDWORD1(v14);
    *(float *)&v8 = (float)*((int *)this + 6);
    *((float *)&v16 + 1) = (float)SDWORD1(v14);
    *((_QWORD *)&v15 + 1) = __PAIR64__(v7, v8);
    CMILMatrix::InferAffineMatrix(v18, &v16, &v15);
    v9 = v18[1];
    v10 = v18[2];
    v11 = v19;
    *(_OWORD *)a3 = v18[0];
    *((_OWORD *)a3 + 1) = v9;
    v12 = v18[3];
    *((_OWORD *)a3 + 2) = v10;
    *((_OWORD *)a3 + 3) = v12;
    *((_DWORD *)a3 + 16) = v11;
  }
  return v6;
}
