/*
 * XREFs of ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x18006DB04
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18006D878 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003CC30 (-CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18003CC3C (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBr.c)
 *     ?CreateRectResourceProxy@CCompositor@@QEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18006DE28 (-CreateRectResourceProxy@CCompositor@@QEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x18006DF00 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Width@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x18009A4AC (-Width@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 *     ?Height@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x18009B1E4 (-Height@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopThumbnailCVI::CreateBrush(
        CDesktopThumbnailCVI *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        struct CRectResourceProxy **a4,
        const struct tagRECT *a5)
{
  CCompositor *v9; // rbx
  int v10; // ebx
  __int64 v11; // rdx
  CMILRefCountBase *v12; // rcx
  CMILRefCountBase *v13; // rcx
  CCompositor *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r10d
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // r8
  __int64 v22; // r9
  float v23; // xmm2_4
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  float v29; // xmm3_4
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  CMILRefCountBase *v42; // rcx
  CMILRefCountBase *v43; // rcx
  CMILRefCountBase *v44; // rcx
  int v46; // [rsp+20h] [rbp-81h]
  __int64 v47; // [rsp+50h] [rbp-51h]
  CMILRefCountBase *v48; // [rsp+70h] [rbp-31h] BYREF
  CMILRefCountBase *v49; // [rsp+78h] [rbp-29h] BYREF
  __int128 v50; // [rsp+80h] [rbp-21h] BYREF
  __int128 v51; // [rsp+90h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v49 = 0LL;
  v48 = 0LL;
  if ( a4
    && (v9 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v48),
        v10 = CCompositor::CreateRectResourceProxy(v9, &v48),
        v10 < 0) )
  {
    v11 = 654LL;
  }
  else
  {
    v10 = CDesktopThumbnailCVI::_EnsureResources(this);
    if ( v10 >= 0 )
    {
      v14 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v49);
      v15 = CCompositor::CreateImageLegacyMilBrushProxy(v14, &v49);
      v10 = v15;
      if ( v15 >= 0 )
      {
        v51 = _xmm;
        *(_QWORD *)&v50 = 0LL;
        v17 = 1;
        if ( a4 )
        {
          v18 = 0;
          v50 = 0LL;
        }
        else
        {
          if ( (float)(int)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Width(
                             (char *)this + 32,
                             v16,
                             (char *)this + 32,
                             1LL) == 0.0 )
          {
            v23 = 0.0;
          }
          else
          {
            v24 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Width(v20, v19, v21, v22);
            v19 = (unsigned int)((a5->left - *v21) >> 31);
            LODWORD(v19) = (a5->left - *v21) % v24;
            v23 = (float)((a5->left - *v21) / v24);
          }
          *(float *)&v50 = v23;
          if ( (float)(int)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Height(v21, v19) == 0.0 )
          {
            v29 = 0.0;
          }
          else
          {
            v30 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Height(v26, v25);
            v25 = (unsigned int)((a5->top - *((_DWORD *)this + 9)) >> 31);
            LODWORD(v25) = (a5->top - *((_DWORD *)this + 9)) % v30;
            v29 = (float)((a5->top - *((_DWORD *)this + 9)) / v30);
          }
          *((float *)&v50 + 1) = v29;
          if ( (float)(int)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Width(v27, v25, v27, v28) == 0.0 )
          {
            DWORD2(v50) = 0;
          }
          else
          {
            v36 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Width(
                    v32,
                    (unsigned int)(a5->right - a5->left),
                    v33,
                    v34);
            v37 = 0;
            if ( v35 >= 0 )
              v37 = v35;
            v31 = (unsigned int)(v37 >> 31);
            LODWORD(v31) = v37 % v36;
            *((float *)&v50 + 2) = (float)(v37 / v36) + v23;
          }
          if ( (float)(int)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Height(v33, v31) == 0.0 )
          {
            HIDWORD(v50) = 0;
          }
          else
          {
            v40 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Height(v38, (unsigned int)(a5->bottom - a5->top));
            v41 = 0;
            if ( v39 >= 0 )
              v41 = v39;
            *((float *)&v50 + 3) = (float)(v41 / v40) + v29;
          }
        }
        v10 = CImageLegacyMilBrushProxy::Update(
                (__int64)v49,
                (unsigned __int64)v48 & ((unsigned __int128)-(__int128)(unsigned __int64)a4 >> 64),
                (__int64)&v51,
                (__int64)&v50,
                0LL,
                v17,
                v18,
                0LL,
                (unsigned __int64)v48 & ((unsigned __int128)-(__int128)(unsigned __int64)a4 >> 64),
                v17,
                v47,
                0,
                0,
                *((_QWORD *)this + 3));
        if ( v10 < 0 )
        {
          v11 = 701LL;
          goto LABEL_4;
        }
        if ( a4 )
        {
          v42 = v48;
          *a4 = v48;
          if ( v42 )
            CMILRefCountBase::AddRef(v42);
        }
        v43 = v49;
        *a2 = v49;
        if ( v43 )
          CMILRefCountBase::AddRef(v43);
        if ( a3 )
        {
          *a3 = (struct CCachedVisualImageProxy *)*((_QWORD *)this + 3);
          v44 = (CMILRefCountBase *)*((_QWORD *)this + 3);
          if ( v44 )
            CMILRefCountBase::AddRef(v44);
        }
        v10 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x294,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
          (const char *)(unsigned int)v15,
          v46);
      }
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v48);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v49);
      return (unsigned int)v10;
    }
    v11 = 657LL;
  }
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
    (const char *)(unsigned int)v10,
    v46);
  v12 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    CBaseObject::Release(v12);
  }
  v13 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    CBaseObject::Release(v13);
  }
  return (unsigned int)v10;
}
