/*
 * XREFs of ?CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z @ 0x1801DB000
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18007DABC (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18021EFEC (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D07A8 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z @ 0x1801DB0CC (-Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 */

__int64 __fastcall ShadowHelpers::CreateFastShadowBitmap(ShadowHelpers *this, struct CDrawingContext *a2)
{
  int v2; // ebx
  int v3; // eax
  unsigned int v4; // ebx
  const char *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  __int128 v8; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v10; // [rsp+78h] [rbp+10h] BYREF
  int v11; // [rsp+7Ch] [rbp+14h]

  v2 = (int)this;
  v10 = 1107296256;
  v11 = 1107296256;
  v8 = _xmm;
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(&ShadowHelpers::s_cpFastShadowBlur);
  v6 = "DWM FastShadow Blur";
  v7 = 19;
  v3 = CShadowBlurProducer::Create(
         (unsigned int)&v6,
         v2,
         (unsigned int)&v10,
         *((_QWORD *)g_pComposition + 91),
         (__int64)&v8,
         LODWORD(FLOAT_16_0),
         (__int64)&ShadowHelpers::s_cpFastShadowBlur,
         (__int64)&ShadowHelpers::s_rcFastShadowBlur);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x198,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
