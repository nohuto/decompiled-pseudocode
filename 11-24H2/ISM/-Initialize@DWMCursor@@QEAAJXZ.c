/*
 * XREFs of ?Initialize@DWMCursor@@QEAAJXZ @ 0x1801C851C
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x18008F554 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z @ 0x180070F60 (-CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800F2DC8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x18010AFFC (-RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestC.c)
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1801C7C30 (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?EnsureDwmCursorController@DWMCursor@@QEAAJXZ @ 0x1801C83A8 (-EnsureDwmCursorController@DWMCursor@@QEAAJXZ.c)
 */

__int64 __fastcall DWMCursor::Initialize(DWMCursor *this)
{
  int v2; // eax
  int v3; // eax
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  TestCommandHost::RegisterForTestCommandMessage(
    (__int64)this,
    (__int64)this,
    (__int64)lambda_c739a78b7ff0a2fdc5f9b94b3ac1dde9_::_lambda_invoker_cdecl_,
    (__int64)this + 128);
  v2 = DWMCursor::CheckAndUpdateRasterizationScale((POINT *)this, 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v2);
  v3 = DWMCursorBroker::RegisterCursor(*((DWMCursorBroker **)this + 4), this);
  *((_BYTE *)this + 49) = v3 >= 0;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v3);
    return 0LL;
  }
  if ( IsEdition(253345LL) )
    return 0LL;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
    return 0LL;
  v5 = DWMCursor::EnsureDwmCursorController(this);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3E,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
