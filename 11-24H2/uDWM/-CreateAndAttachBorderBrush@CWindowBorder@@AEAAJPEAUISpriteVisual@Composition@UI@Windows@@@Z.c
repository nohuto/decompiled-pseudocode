/*
 * XREFs of ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x180039328
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180037764 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18006C024 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?ValidateVisual@CWindowBorder@@UEAAJXZ @ 0x1800772F0 (-ValidateVisual@CWindowBorder@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800389E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x1800395D0 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowBorder::CreateAndAttachBorderBrush(
        CWindowBorder *this,
        __int64 (__fastcall ***a2)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))
{
  char *v3; // rsi
  int BorderBrush; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // [rsp+20h] [rbp-20h]
  _DWORD v22[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 *v24; // [rsp+50h] [rbp+10h] BYREF

  v3 = (char *)this + 240;
  BorderBrush = CWindowBorder::CCachedBorderBrush::GetBorderBrush(
                  (_DWORD)this,
                  *((_DWORD *)this + 69),
                  (int)this + 284,
                  *((_DWORD *)this + 75),
                  *((_DWORD *)this + 70),
                  (__int64)this + 240);
  v5 = BorderBrush;
  if ( BorderBrush < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)BorderBrush,
      v21);
    return v5;
  }
  v24 = 0LL;
  v6 = **a2;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((__int64 *)&v24);
  v8 = v6((struct Windows::UI::Composition::ISpriteVisual *)a2, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, v7);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v8,
      v21);
    v20 = (__int64)v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return v5;
  }
  v9 = *v24;
  v10 = *(_QWORD *)v3;
  v22[0] = *(_DWORD *)(*(_QWORD *)v3 + 32LL) ^ _xmm;
  v22[1] = *(_DWORD *)(v10 + 36) ^ _xmm;
  v22[2] = 0;
  v11 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v9 + 168))(v24, v22);
  v5 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v11,
      v21);
    v17 = (__int64)v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v5;
  }
  v12 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v24 + 288))(
          v24,
          _mm_unpacklo_ps(
            (__m128)*(unsigned int *)(*(_QWORD *)v3 + 40LL),
            (__m128)*(unsigned int *)(*(_QWORD *)v3 + 40LL)).m128_u64[0]);
  v5 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v12,
      v21);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
    return v5;
  }
  v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *), _QWORD))(*a2)[7])(
          a2,
          *(_QWORD *)(*(_QWORD *)v3 + 48LL));
  v5 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v13,
      v21);
    v19 = (__int64)v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return v5;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                        + 32LL)
                                          + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL));
  v5 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v14,
      v21);
    v18 = (__int64)v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v5;
  }
  v15 = (__int64)v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0LL;
}
