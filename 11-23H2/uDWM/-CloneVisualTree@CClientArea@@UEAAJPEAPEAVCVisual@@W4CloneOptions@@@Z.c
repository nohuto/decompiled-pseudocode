/*
 * XREFs of ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180004B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@?$ComPtr@VCVisualProxy@@@WRL@Microsoft@@QEAAXPEAVCVisualProxy@@@Z @ 0x180004EF0 (-Attach@-$ComPtr@VCVisualProxy@@@WRL@Microsoft@@QEAAXPEAVCVisualProxy@@@Z.c)
 *     ?Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z @ 0x180004F24 (-Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z.c)
 *     ?SetContent@CVisualProxy@@QEAAJPEBVCResourceProxy@@@Z @ 0x180004F58 (-SetContent@CVisualProxy@@QEAAJPEBVCResourceProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180004F9C (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x180007258 (--$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000C2A0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x180036950 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z @ 0x1800397E0 (--$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z.c)
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x18003A0D0 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18004D7CC (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x180054F64 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x180055C3C (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6278 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CClientArea::CloneVisualTree(__int64 a1, struct CClientArea **a2, unsigned int a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  CVisualProxy *v15; // rdx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rbx
  int v18; // edi
  struct CClientArea *v19; // rax
  int v21; // eax
  int v22; // eax
  CRedirectVisualProxy *v23; // rdx
  CBaseObject *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  __int64 v30; // rdx
  int v31; // [rsp+20h] [rbp-69h]
  struct IRenderDataBuilder *v32; // [rsp+40h] [rbp-49h] BYREF
  CVisualProxy *v33; // [rsp+48h] [rbp-41h] BYREF
  CRenderDataProxy *v34; // [rsp+50h] [rbp-39h] BYREF
  CRedirectVisualProxy *v35; // [rsp+58h] [rbp-31h] BYREF
  CCachedVisualImageProxy *v36; // [rsp+60h] [rbp-29h] BYREF
  struct CClientArea *v37; // [rsp+68h] [rbp-21h] BYREF
  CBaseObject *v38; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v39; // [rsp+78h] [rbp-11h] BYREF
  _DWORD v40[4]; // [rsp+88h] [rbp-1h] BYREF
  __int128 v41; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *a2 = 0LL;
  v38 = 0LL;
  if ( (a3 & 4) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 24LL) + 104LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 248) + 24LL),
      &v39);
    v39.right -= v39.left;
    v39.bottom -= v39.top;
    *(_QWORD *)&v39.left = 0LL;
    v40[0] = 0;
    v40[1] = 0;
    *(float *)&v40[2] = (float)v39.right;
    *(float *)&v40[3] = (float)v39.bottom;
    v41 = 0LL;
    v36 = 0LL;
    v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v36);
    v7 = CCompositor::CreateProxy<CCachedVisualImageProxy>(v6, &v36);
    v8 = v7;
    if ( v7 < 0 )
    {
      v25 = 102LL;
    }
    else
    {
      v31 = 0;
      v7 = CCachedVisualImageProxy::Update(v36, v40, &v41, 0LL);
      v8 = v7;
      if ( v7 < 0 )
      {
        v25 = 108LL;
      }
      else
      {
        v7 = CCachedVisualImageProxy::Snapshot(v36, &v39);
        v8 = v7;
        if ( v7 < 0 )
        {
          v25 = 110LL;
        }
        else
        {
          v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 6)
                                                               + 24LL)
                                                 + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 6)
                                                                    + 24LL));
          v8 = v7;
          if ( v7 >= 0 )
          {
            v32 = 0LL;
            v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
            v10 = (*(__int64 (__fastcall **)(_QWORD, struct IRenderDataBuilder **))(**(_QWORD **)(v9 + 24) + 120LL))(
                    *(_QWORD *)(v9 + 24),
                    &v32);
            v8 = v10;
            if ( v10 < 0 )
            {
              v26 = 117LL;
            }
            else
            {
              v10 = (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _DWORD *, _QWORD))(*(_QWORD *)v32 + 40LL))(
                      v32,
                      v40,
                      *(unsigned int *)(*((_QWORD *)v36 + 2) + 24LL));
              v8 = v10;
              if ( v10 >= 0 )
              {
                v34 = 0LL;
                v11 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
                Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v34);
                v12 = CCompositor::CreateProxy<CRenderDataProxy>(v11, &v34);
                v8 = v12;
                if ( v12 < 0 )
                {
                  v27 = 121LL;
                }
                else
                {
                  v12 = CRenderDataProxy::Update(v34, v32);
                  v8 = v12;
                  if ( v12 >= 0 )
                  {
                    v33 = 0LL;
                    v13 = CCompositor::CreateProxy<CVisualProxy>(
                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                            &v33);
                    v8 = v13;
                    if ( v13 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x7E,
                        (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
                        (const char *)(unsigned int)v13,
                        0);
                      Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v33);
                    }
                    else
                    {
                      v14 = CVisualProxy::SetContent(v33, v34);
                      v8 = v14;
                      if ( v14 >= 0 )
                      {
                        v15 = v33;
                        v33 = 0LL;
                        Microsoft::WRL::ComPtr<CVisualProxy>::Attach(&v38, v15);
                        v16 = v33;
                        if ( v33 )
                        {
                          v33 = 0LL;
                          CBaseObject::Release(v16);
                        }
                        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v34);
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
                        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v36);
                        goto LABEL_15;
                      }
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x7F,
                        (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
                        (const char *)(unsigned int)v14,
                        0);
                      v28 = v33;
                      if ( v33 )
                      {
                        v33 = 0LL;
                        CBaseObject::Release(v28);
                      }
                    }
                    goto LABEL_38;
                  }
                  v27 = 122LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v27,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
                  (const char *)(unsigned int)v12,
                  0);
LABEL_38:
                Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v34);
                goto LABEL_39;
              }
              v26 = 118LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v26,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
              (const char *)(unsigned int)v10,
              0);
LABEL_39:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
            goto LABEL_40;
          }
          v25 = 113LL;
        }
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v7,
      v31);
LABEL_40:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v36);
LABEL_47:
    Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v38);
    return v8;
  }
  v35 = 0LL;
  v21 = CCompositor::CreateProxy<CRedirectVisualProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          &v35);
  v8 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v21,
      v31);
    Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v35);
    goto LABEL_47;
  }
  v22 = CRedirectVisualProxy::SetRedirectedVisual(v35, *(struct CVisualProxy **)(a1 + 16));
  v8 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v22,
      v31);
    v29 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      CBaseObject::Release(v29);
    }
    goto LABEL_47;
  }
  v23 = v35;
  v35 = 0LL;
  Microsoft::WRL::ComPtr<CVisualProxy>::Attach(&v38, v23);
  v24 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    CBaseObject::Release(v24);
  }
LABEL_15:
  v37 = 0LL;
  v17 = v38;
  v18 = CClientArea::Create(v38, &v37);
  if ( v18 < 0 )
  {
    v30 = 145LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v18,
      v31);
    Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v37);
    v8 = v18;
    goto LABEL_47;
  }
  v18 = CVisual::InitializeVisualTreeClone(a1, v37, a3);
  if ( v18 < 0 )
  {
    v30 = 146LL;
    goto LABEL_46;
  }
  v19 = v37;
  v37 = 0LL;
  *a2 = v19;
  if ( v17 )
    CBaseObject::Release(v17);
  return 0LL;
}
