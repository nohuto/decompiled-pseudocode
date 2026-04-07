/*
 * XREFs of ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18003B810
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007478 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AccentColorTitlebar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180009514 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AccentColorTitlebar@@@details@wil@@QEAAX_.c)
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B064 (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18001AB94 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x18001BC54 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x1800D8C10 (-Create@CSpriteVisual@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CTopLevelWindow::UpdateCaptionAccentColor(CTopLevelWindow *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // rbx
  struct CVisual *v6; // rdx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  char *v11; // rax
  struct CVisual *v12; // r8
  int inserted; // eax
  unsigned int v14; // esi
  int v15; // eax
  unsigned int v16; // esi
  unsigned int CaptionColor; // eax
  int v18; // r8d
  int v19; // edx
  int v20; // r9d
  __int64 *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // esi
  int v25; // esi
  __int64 v26; // rdx
  int v27; // eax
  unsigned int v28; // ebx
  int v29; // [rsp+20h] [rbp-28h]
  _QWORD v30[2]; // [rsp+30h] [rbp-18h] BYREF
  char v31; // [rsp+40h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+10h] BYREF
  __int64 v34; // [rsp+60h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AccentColorTitlebar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_AccentColorTitlebar>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v5 = (unsigned __int64 *)((char *)this + 328);
  v6 = (struct CVisual *)*((_QWORD *)this + 41);
  if ( *((_DWORD *)this + 210) == 3 )
  {
    if ( !v6 )
    {
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 41);
      v8 = CSpriteVisual::Create((struct CSpriteVisual **)this + 41);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18B,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v8,
          v29);
        return v9;
      }
      v10 = *((_QWORD *)this + 40);
      v30[0] = *((_QWORD *)this + 37);
      v30[1] = v10;
      v11 = (char *)v30;
      do
      {
        v12 = *(struct CVisual **)v11;
        if ( *(_QWORD *)v11 )
          break;
        v11 += 8;
      }
      while ( v11 != &v31 );
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 36) + 32LL),
                   *v5,
                   v12,
                   1u,
                   v29);
      v14 = inserted;
      if ( inserted < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x197,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)inserted,
          v29);
        return v14;
      }
    }
  }
  else if ( v6 )
  {
    v15 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), v6);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v15,
        v29);
      return v16;
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 41);
  }
  if ( !*v5 )
    return 0LL;
  CaptionColor = CTopLevelWindow::GetCaptionColor(this);
  v18 = (unsigned __int8)CaptionColor;
  v19 = BYTE1(CaptionColor);
  v20 = BYTE2(CaptionColor);
  v33 = 0LL;
  v21 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v22 = *v21;
  v33 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v22 + 64))(
          v21,
          ((v18 | (((v20 << 8) | v19) << 8)) << 8) | 0xFFu,
          &v33);
  v24 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v23,
      v29);
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)&v33);
    return v24;
  }
  v34 = 0LL;
  v25 = (**v33)(v33, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v34);
  if ( v25 < 0 )
  {
    v26 = 439LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v25,
      v29);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v34);
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)&v33);
    return (unsigned int)v25;
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*v5 + 248) + 56LL))(*(_QWORD *)(*v5 + 248), v34);
  if ( v25 < 0 )
  {
    v26 = 440LL;
    goto LABEL_21;
  }
  v27 = CTopLevelWindow::ResizeVisualToTitlebar(this, (struct CVisual *)*v5);
  v28 = v27;
  if ( v27 >= 0 )
  {
    wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v34);
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)&v33);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1BA,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v27,
    v29);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v34);
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)&v33);
  return v28;
}
