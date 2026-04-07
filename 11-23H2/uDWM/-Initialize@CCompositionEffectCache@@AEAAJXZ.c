/*
 * XREFs of ?Initialize@CCompositionEffectCache@@AEAAJXZ @ 0x180025FDC
 * Callers:
 *     ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z @ 0x180027698 (-Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B064 (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x180022E5C (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ?CreateMicaBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@34@@Z @ 0x1800262AC (-CreateMicaBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Compo.c)
 *     ?CreateDesktopAcrylicBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@34@@Z @ 0x180026380 (-CreateDesktopAcrylicBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionB.c)
 *     ?CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x180026454 (-CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCompositionEffectCache::Initialize(CCompositionEffectCache *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  struct Windows::UI::Composition::ICompositionBrush **v22; // r8
  int HostBackdropBrush; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v45; // [rsp+20h] [rbp-30h] BYREF
  __int64 v46; // [rsp+28h] [rbp-28h] BYREF
  __int64 v47; // [rsp+30h] [rbp-20h] BYREF
  __int64 v48; // [rsp+38h] [rbp-18h] BYREF
  __int64 v49; // [rsp+40h] [rbp-10h] BYREF
  __int64 v50; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v52; // [rsp+78h] [rbp+28h] BYREF
  __int64 v53; // [rsp+80h] [rbp+30h] BYREF
  __int64 v54; // [rsp+88h] [rbp+38h] BYREF

  v50 = 0LL;
  LODWORD(v52) = 255;
  v2 = CCompositionEffectCache::CreateSolidColorBrush(255LL, &v50);
  v5 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v2,
      v45);
    goto LABEL_29;
  }
  v52 = 0LL;
  v6 = CCompositionEffectCache::CreateMicaBrush(CMicaSystemBackdropVisual::sc_darkThemeTintColor, v3, v4, &v52);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v6,
      v45);
LABEL_34:
    wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v52);
    goto LABEL_29;
  }
  v53 = 0LL;
  v9 = CCompositionEffectCache::CreateMicaBrush(CMicaSystemBackdropVisual::sc_lightThemeTintColor, v7, v8, &v53);
  v5 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v9,
      v45);
LABEL_33:
    wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v53);
    goto LABEL_34;
  }
  v54 = 0LL;
  v12 = CCompositionEffectCache::CreateDesktopAcrylicBrush(
          CAcrylicSystemBackdropVisual::sc_darkThemeTintColor,
          v10,
          v11,
          &v54);
  v5 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v12,
      v45);
LABEL_38:
    wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v54);
    goto LABEL_33;
  }
  v45 = 0LL;
  v15 = CCompositionEffectCache::CreateDesktopAcrylicBrush(
          CAcrylicSystemBackdropVisual::sc_lightThemeTintColor,
          v13,
          v14,
          &v45);
  v5 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v15,
      v45);
LABEL_37:
    wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v45);
    goto LABEL_38;
  }
  v46 = 0LL;
  v18 = CCompositionEffectCache::CreateMicaBrush(CLightMicaSystemBackdropVisual::sc_darkThemeTintColor, v16, v17, &v46);
  v5 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v18,
      v45);
LABEL_42:
    wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v46);
    goto LABEL_37;
  }
  v47 = 0LL;
  v21 = CCompositionEffectCache::CreateMicaBrush(CLightMicaSystemBackdropVisual::sc_lightThemeTintColor, v19, v20, &v47);
  v5 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v21,
      v45);
LABEL_41:
    wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v47);
    goto LABEL_42;
  }
  v48 = 0LL;
  HostBackdropBrush = WindowsInternal::UI::CreateHostBackdropBrush(
                        *(__int64 (__fastcall ****)(WindowsInternal::UI *, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                               + 6)
                                                                                             + 32LL),
                        (struct IDCompositionDesktopDevicePartner *)&v48,
                        v22);
  v5 = HostBackdropBrush;
  if ( HostBackdropBrush < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)HostBackdropBrush,
      v45);
LABEL_45:
    wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v48);
    goto LABEL_41;
  }
  v24 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v49 = 0LL;
  v25 = CreateCrossfadeEffectFactory(v24, &v49);
  v5 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v25,
      v45);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v49);
    goto LABEL_45;
  }
  v26 = v50;
  v50 = 0LL;
  v27 = *(_QWORD *)this;
  *(_QWORD *)this = v26;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v28 = v52;
  v52 = 0LL;
  v29 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = v28;
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  v30 = v53;
  v53 = 0LL;
  v31 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = v30;
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  v32 = v54;
  v54 = 0LL;
  v33 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v32;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  v34 = v45;
  v45 = 0LL;
  v35 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v34;
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  v36 = v46;
  v46 = 0LL;
  v37 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = v36;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  v38 = v47;
  v47 = 0LL;
  v39 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v38;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  v40 = v48;
  v48 = 0LL;
  v41 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v40;
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  v42 = v49;
  v49 = 0LL;
  v43 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = v42;
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v49);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v48);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v47);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v46);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v45);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v54);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v53);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v52);
  v5 = 0;
LABEL_29:
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v50);
  return v5;
}
