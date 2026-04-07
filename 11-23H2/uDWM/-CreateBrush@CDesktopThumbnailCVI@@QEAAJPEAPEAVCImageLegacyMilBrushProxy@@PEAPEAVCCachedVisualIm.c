/*
 * XREFs of ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x180005EBC
 * Callers:
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x180005D28 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EA690 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 * Callees:
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x180006058 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18000693C (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18004FFAC (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x1800519C0 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopThumbnailCVI::CreateBrush(
        CDesktopThumbnailCVI *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        struct CRectResourceProxy **a4,
        const struct tagRECT *a5)
{
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  struct CRectResourceProxy *v13; // rax
  struct CImageLegacyMilBrushProxy *v14; // rax
  __int64 v16; // rdx
  int v17; // r8d
  float v18; // xmm2_4
  int v19; // r9d
  float v20; // xmm3_4
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-71h]
  struct CRectResourceProxy *v25; // [rsp+70h] [rbp-21h] BYREF
  struct CImageLegacyMilBrushProxy *v26; // [rsp+78h] [rbp-19h] BYREF
  __int128 v27; // [rsp+80h] [rbp-11h] BYREF
  __int128 v28; // [rsp+90h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v26 = 0LL;
  v25 = 0LL;
  if ( a4 )
  {
    v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
    v10 = CCompositor::CreateProxy<CRectResourceProxy>(v9, &v25);
    v11 = v10;
    if ( v10 < 0 )
    {
      v16 = 661LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
        (const char *)(unsigned int)v10,
        v24);
      goto LABEL_15;
    }
  }
  v10 = CDesktopThumbnailCVI::_EnsureResources(this);
  v11 = v10;
  if ( v10 < 0 )
  {
    v16 = 664LL;
    goto LABEL_19;
  }
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v26);
  v10 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(v12, &v26);
  v11 = v10;
  if ( v10 < 0 )
  {
    v16 = 667LL;
    goto LABEL_19;
  }
  v28 = _xmm;
  if ( a4 )
  {
    v27 = 0LL;
  }
  else
  {
    v17 = *((_DWORD *)this + 10) - *((_DWORD *)this + 8);
    if ( (float)v17 == 0.0 )
      v18 = 0.0;
    else
      v18 = (float)((a5->left - *((_DWORD *)this + 8)) / v17);
    *(float *)&v27 = v18;
    v19 = *((_DWORD *)this + 11) - *((_DWORD *)this + 9);
    if ( (float)v19 == 0.0 )
      v20 = 0.0;
    else
      v20 = (float)((a5->top - *((_DWORD *)this + 9)) / v19);
    *((float *)&v27 + 1) = v20;
    if ( (float)v17 == 0.0 )
    {
      DWORD2(v27) = 0;
    }
    else
    {
      v21 = 0;
      if ( a5->right - a5->left >= 0 )
        v21 = a5->right - a5->left;
      *((float *)&v27 + 2) = (float)(v21 / v17) + v18;
    }
    if ( (float)v19 == 0.0 )
    {
      HIDWORD(v27) = 0;
    }
    else
    {
      v22 = 0;
      if ( a5->bottom - a5->top >= 0 )
        v22 = a5->bottom - a5->top;
      *((float *)&v27 + 3) = (float)(v22 / v19) + v20;
    }
  }
  v24 = 0;
  v10 = CImageLegacyMilBrushProxy::Update(
          v26,
          (unsigned __int64)v25 & ((unsigned __int128)-(__int128)(unsigned __int64)a4 >> 64),
          &v28,
          &v27);
  v11 = v10;
  if ( v10 < 0 )
  {
    v16 = 708LL;
    goto LABEL_19;
  }
  if ( a4 )
  {
    v13 = v25;
    *a4 = v25;
    if ( v13 )
      _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
  }
  v14 = v26;
  *a2 = v26;
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  if ( a3 )
  {
    *a3 = (struct CCachedVisualImageProxy *)*((_QWORD *)this + 3);
    v23 = *((_QWORD *)this + 3);
    if ( v23 )
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
  }
  v11 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v26);
  return v11;
}
