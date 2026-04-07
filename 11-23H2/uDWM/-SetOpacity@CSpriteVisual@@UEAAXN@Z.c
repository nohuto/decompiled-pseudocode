/*
 * XREFs of ?SetOpacity@CSpriteVisual@@UEAAXN@Z @ 0x18000BAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000BB3C (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A13B4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpriteVisual::SetOpacity(CSpriteVisual *this, double a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  CVisual::SetOpacity(this, a2);
  v7 = 0LL;
  v3 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
         (char *)this + 248,
         &v7);
  if ( v3 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x57,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v3,
      v5);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 184LL))(v7);
  if ( v4 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x58,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v4,
      v5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
}
