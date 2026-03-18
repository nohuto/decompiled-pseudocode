/*
 * XREFs of ?PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028994
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180029438 (-Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800A3E30 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x180220660 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLinearInterpolationLayer(CDrawingContext *this, __int128 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  int v6; // r9d
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  unsigned int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  CLinearInterpolationLayer *v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 5);
  v13 = 0LL;
  v5 = *((_QWORD *)this + 4);
  v6 = *(_DWORD *)(v3 + 960);
  v7 = *((_DWORD *)a2 + 2);
  v12 = *a2;
  if ( v6 < v7 )
    v7 = v6;
  DWORD2(v12) = v7;
  v8 = *((_DWORD *)a2 + 3);
  if ( v6 < v8 )
    v8 = v6;
  HIDWORD(v12) = v8;
  v9 = CLinearInterpolationLayer::Create(v5, &v12, a3, &v13);
  if ( v9 < 0 )
  {
    v11 = 3922;
  }
  else
  {
    v9 = CDrawingContext::PushLayer(this, 0LL, v13, 1, 0);
    if ( v9 >= 0 )
      return (unsigned int)v9;
    v11 = 3928;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v11, 0LL);
  if ( v13 )
    CLinearInterpolationLayer::`scalar deleting destructor'(v13, 1u);
  return (unsigned int)v9;
}
