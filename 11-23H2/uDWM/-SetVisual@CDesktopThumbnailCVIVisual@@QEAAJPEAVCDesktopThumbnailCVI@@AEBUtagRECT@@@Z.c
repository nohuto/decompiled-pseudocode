/*
 * XREFs of ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x180005D28
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180005770 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000E7A0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180109970 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x180005EBC (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18004EEDC (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18005093C (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopThumbnailCVIVisual::SetVisual(
        CDesktopThumbnailCVIVisual *this,
        struct CDesktopThumbnailCVI *a2,
        const struct tagRECT *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  volatile signed __int32 *v8; // rbx
  int v9; // r14d
  struct CBaseLegacyMilBrushProxy *v10; // rax
  struct CRectResourceProxy *v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-20h]
  struct CBaseLegacyMilBrushProxy *v16; // [rsp+30h] [rbp-10h] BYREF
  struct CRenderDataInstruction *v17; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CBaseObject *v19; // [rsp+60h] [rbp+20h] BYREF
  struct CRectResourceProxy *v20; // [rsp+78h] [rbp+38h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  CopyRect((LPRECT)((char *)this + 328), a3);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
  v6 = CDesktopThumbnailCVI::CreateBrush(a2, &v16, 0LL, &v20, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v13 = 500LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v6,
      v15);
LABEL_23:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v19);
    goto LABEL_16;
  }
  v19 = 0LL;
  v6 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    v13 = 501LL;
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
  v8 = (volatile signed __int32 *)v19;
  v9 = CDrawGeometryInstruction::Create(v16, v19, &v17);
  if ( v9 < 0 )
  {
    v14 = 502LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v9,
      v15);
    v7 = v9;
    goto LABEL_23;
  }
  v9 = CRenderDataVisual::AddInstruction(this, v17);
  if ( v9 < 0 )
  {
    v14 = 503LL;
    goto LABEL_22;
  }
  CVisual::SetInterpolationMode(this, 1LL);
  v10 = v16;
  *((_QWORD *)this + 38) = v16;
  if ( v10 )
  {
    _InterlockedAdd((volatile signed __int32 *)v10 + 2, 1u);
    v8 = (volatile signed __int32 *)v19;
  }
  *((_QWORD *)this + 36) = v8;
  if ( v8 )
  {
    _InterlockedAdd(v8 + 2, 1u);
    v8 = (volatile signed __int32 *)v19;
  }
  *((_QWORD *)this + 39) = a2;
  if ( a2 )
  {
    _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
    v8 = (volatile signed __int32 *)v19;
  }
  v11 = v20;
  *((_QWORD *)this + 37) = v20;
  if ( v11 )
  {
    _InterlockedAdd((volatile signed __int32 *)v11 + 2, 1u);
    v8 = (volatile signed __int32 *)v19;
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  v7 = 0;
LABEL_16:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
  return v7;
}
