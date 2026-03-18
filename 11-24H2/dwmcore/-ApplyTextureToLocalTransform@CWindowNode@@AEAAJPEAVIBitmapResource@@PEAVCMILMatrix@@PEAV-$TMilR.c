/*
 * XREFs of ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180100D00
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1802379C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentFlipExSurface@CWindowNode@@AEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x1800696C0 (-GetCurrentFlipExSurface@CWindowNode@@AEBAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800AA280 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800D27D0 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::ApplyTextureToLocalTransform(
        CWindowNode *this,
        __int64 *a2,
        CMILMatrix *a3,
        struct D2D_RECT_F *a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v9)(__int64 *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  struct CCompositionSurfaceBitmap *CurrentFlip; // rax
  __int64 v13; // r11
  float v14; // xmm4_4
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18[2]; // [rsp+30h] [rbp-69h] BYREF
  _OWORD v19[4]; // [rsp+40h] [rbp-59h] BYREF
  int v20; // [rsp+80h] [rbp-19h]
  __int128 v21; // [rsp+90h] [rbp-9h] BYREF
  struct D2D_RECT_F v22; // [rsp+A0h] [rbp+7h] BYREF

  v4 = *a2;
  v18[0] = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 64);
  v22 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v18);
  v10 = v9(a2, v18);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x3DAu, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(__int64, CMILMatrix *, struct D2D_RECT_F *))(*(_QWORD *)v18[0] + 40LL))(v18[0], a3, &v22);
    if ( a4 )
      *a4 = v22;
    CurrentFlip = CWindowNode::GetCurrentFlipExSurface(this);
    if ( a2 == (__int64 *)(((unsigned __int64)CurrentFlip + 72) & -(__int64)(CurrentFlip != 0LL)) )
    {
      v21 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, &v22, (float *)&v21);
      if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v13) == 1 )
      {
        if ( *((_BYTE *)this + 755) )
          CMILMatrix::Translate(
            a3,
            (float)(*((_DWORD *)this + 176) - *((_DWORD *)this + 174)) - (float)(*((float *)&v21 + 2) - *(float *)&v21),
            0.0);
      }
      else
      {
        v14 = *((float *)&v21 + 2) - *(float *)&v21;
        if ( (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                             (float)(*((_DWORD *)this + 176) - *((_DWORD *)this + 174))
                           - (float)(*((float *)&v21 + 2) - *(float *)&v21)) & _xmm) > 0.00390625
           || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                             (float)(int)(HIDWORD(*((_QWORD *)this + 88)) - HIDWORD(*((_QWORD *)this + 87)))
                           - (float)(*((float *)&v21 + 3) - *((float *)&v21 + 1))) & _xmm) > 0.00390625)
          && v14 > 0.0
          && (float)(*((float *)&v21 + 3) - *((float *)&v21 + 1)) > 0.0 )
        {
          v20 = 0;
          v15 = *((_QWORD *)this + 87);
          v19[1] = _xmm;
          v16 = *((_QWORD *)this + 88);
          v19[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
          v19[0] = _xmm;
          LODWORD(v15) = *((_DWORD *)this + 176) - *((_DWORD *)this + 174);
          LOWORD(v20) = 10666;
          v19[2] = _xmm;
          CMILMatrix::Scale(
            (CMILMatrix *)v19,
            (float)(int)v15 / v14,
            (float)(HIDWORD(v16) - HIDWORD(v15)) / (float)(*((float *)&v21 + 3) - *((float *)&v21 + 1)),
            1.0);
          CMILMatrix::Multiply((__m128 *)a3, (const struct CMILMatrix *)v19, a3);
        }
      }
      CMILMatrix::Translate(a3, (float)*((int *)this + 174), (float)(int)HIDWORD(*((_QWORD *)this + 87)));
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v18);
  return v11;
}
