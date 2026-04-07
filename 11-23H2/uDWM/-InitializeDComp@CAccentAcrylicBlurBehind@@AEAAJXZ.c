/*
 * XREFs of ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A0624
 * Callers:
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x1800A05C0 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000BB3C (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18001BFC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18002D098 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x180031280 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18003251C (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009E57C (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009E690 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     ??4?$ComPtr@UID2D1Device@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Device@@@Z @ 0x18009E8BC (--4-$ComPtr@UID2D1Device@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Device@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAccentAcrylicBlurBehind::InitializeDComp(CAccentAcrylicBlurBehind *this)
{
  char *v2; // rcx
  CDesktopManager *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rsi
  CGraphicsDeviceManager *v7; // rbx
  __int64 v8; // rdx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, GUID *, char *); // rbx
  _QWORD *v12; // r13
  int inserted; // ebx
  __int64 v14; // rdx
  HANDLE v15; // rcx
  bool v16; // cc
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, HANDLE *); // rbx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, char *); // rdi
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, char *); // rbx
  int v25; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64 *); // rdi
  __int64 v28; // rdx
  int v29; // [rsp+20h] [rbp-28h]
  __int64 v30[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  HANDLE hObject; // [rsp+90h] [rbp+48h] BYREF
  __int64 v33; // [rsp+98h] [rbp+50h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+60h] BYREF

  v2 = 0LL;
  hObject = 0LL;
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = (__int64 *)((char *)this + 296);
  if ( *((_QWORD *)this + 37) != v5 )
  {
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(v4 + 32));
    v33 = *v6;
    *v6 = v5;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
    v2 = (char *)hObject;
    v3 = CDesktopManager::s_pDesktopManagerInstance;
  }
  if ( !*v6 )
    goto LABEL_11;
  v7 = (CGraphicsDeviceManager *)*((_QWORD *)v3 + 7);
  if ( (int)CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v7) < 0 )
    v8 = 0LL;
  else
    v8 = *((_QWORD *)v7 + 3);
  Microsoft::WRL::ComPtr<ID2D1Device>::operator=((__int64 *)this + 38, v8);
  if ( !*((_QWORD *)this + 38) )
  {
    v2 = (char *)hObject;
LABEL_11:
    if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v2);
    return 2147500037LL;
  }
  if ( !*((_QWORD *)this + 36) )
  {
    v10 = *v6;
    v11 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)*v6 + 216LL);
    v12 = (_QWORD *)((char *)this + 312);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
    inserted = v11(v10, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, (char *)this + 312);
    if ( inserted < 0 )
    {
      v14 = 1241LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)inserted);
      v15 = hObject;
      v16 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_18:
      if ( v16 )
        CloseHandle(v15);
      return (unsigned int)inserted;
    }
    v17 = *v6;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, HANDLE *))(*(_QWORD *)*v6 + 224LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    inserted = v18(v17, *v12, &hObject);
    if ( inserted < 0 )
    {
      v14 = 1244LL;
      goto LABEL_17;
    }
    v33 = 0LL;
    inserted = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 37,
                 &v33);
    if ( inserted < 0 )
    {
      v19 = 1248LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)inserted);
LABEL_26:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
      v15 = hObject;
      v16 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
      goto LABEL_18;
    }
    v20 = v33;
    v21 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v33 + 176LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 43);
    inserted = v21(v20, (char *)this + 344);
    if ( inserted < 0 )
    {
      v19 = 1251LL;
      goto LABEL_25;
    }
    v34 = 0LL;
    inserted = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 43,
                 &v34);
    if ( inserted < 0 )
    {
      v22 = 1254LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)inserted);
LABEL_32:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
      goto LABEL_26;
    }
    v23 = *v6;
    v24 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v6 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 40);
    inserted = v24(v23, (char *)this + 320);
    if ( inserted < 0 )
    {
      v22 = 1257LL;
      goto LABEL_31;
    }
    inserted = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v6 + 24LL))(*v6);
    if ( inserted < 0 )
    {
      v22 = 1258LL;
      goto LABEL_31;
    }
    v30[0] = 0LL;
    v25 = Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 40,
            v30);
    inserted = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EE,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v25);
LABEL_39:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v30);
      goto LABEL_32;
    }
    v35 = 0LL;
    v26 = v30[0];
    v27 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30[0] + 360LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
    inserted = v27(v26, &v35);
    if ( inserted < 0 )
    {
      v28 = 1264LL;
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)inserted);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
      goto LABEL_39;
    }
    inserted = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 72LL))(v35, v34);
    if ( inserted < 0 )
    {
      v28 = 1265LL;
      goto LABEL_42;
    }
    inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v12 + 24LL))(*v12, *((_QWORD *)this + 40));
    if ( inserted < 0 )
    {
      v28 = 1268LL;
      goto LABEL_42;
    }
    inserted = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v6 + 24LL))(*v6);
    if ( inserted < 0 )
    {
      v28 = 1270LL;
      goto LABEL_42;
    }
    inserted = CVisual::CreateFromSharedHandle(hObject, (struct CVisual **)this + 36);
    if ( inserted < 0 )
    {
      v28 = 1276LL;
      goto LABEL_42;
    }
    inserted = VisualCollection::InsertRelative(
                 (CAccentAcrylicBlurBehind *)((char *)this + 32),
                 *((_QWORD *)this + 36),
                 0LL,
                 0,
                 v29);
    if ( inserted < 0 )
    {
      v28 = 1279LL;
      goto LABEL_42;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v30);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return 0LL;
}
