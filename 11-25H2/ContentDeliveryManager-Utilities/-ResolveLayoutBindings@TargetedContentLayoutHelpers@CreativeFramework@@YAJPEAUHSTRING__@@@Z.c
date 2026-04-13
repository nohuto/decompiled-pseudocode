/*
 * XREFs of ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800AE2C0
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::Run @ 0x180056CC0 (Windows--Internal--COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2___ea_180056CC0.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@@Z @ 0x18009520C (-GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatic.c)
 *     ??0?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800AB868 (--0-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_T.c)
 *     ??0?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800AB938 (--0-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAA_ea_1800AB938.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800ABC6C (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800ABC98 (--1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800ADC3C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 *     ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x1800AEF48 (-StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AF05C (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        HSTRING a2)
{
  const wchar_t *StringRawBuffer; // rbx
  struct WindowsUdk::UI::StartScreen::IStartScreenManagerExtensionStatics **v4; // rdx
  int StartScreenManagerExtensionStatics; // eax
  wil *v6; // rcx
  unsigned int v7; // r8d
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-348h] BYREF
  unsigned int v10; // [rsp+20h] [rbp-328h]
  _QWORD v11[2]; // [rsp+30h] [rbp-318h] BYREF
  __int128 v12; // [rsp+40h] [rbp-308h]
  __int64 v13; // [rsp+50h] [rbp-2F8h]
  __int64 v14; // [rsp+58h] [rbp-2F0h]
  __int128 v15; // [rsp+60h] [rbp-2E8h]
  __int128 v16; // [rsp+70h] [rbp-2D8h]
  __int64 v17; // [rsp+80h] [rbp-2C8h]
  __int64 v18; // [rsp+88h] [rbp-2C0h] BYREF
  _QWORD v19[42]; // [rsp+90h] [rbp-2B8h] BYREF
  _QWORD v20[42]; // [rsp+1E0h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, 0LL);
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v20);
  v20[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StartActivity(
    (CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v20,
    StringRawBuffer);
  try
  {
    v11[0] = 0LL;
    v11[1] = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    StartScreenManagerExtensionStatics = StartDocked::GetStartScreenManagerExtensionStatics((StartDocked *)&v18, v4);
    if ( StartScreenManagerExtensionStatics < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x57,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)StartScreenManagerExtensionStatics,
        v10);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v19,
      (__int64)v20);
    v19[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings(
      (__int64)v11,
      (HSTRING)this,
      (CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v19);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v20,
      0LL);
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::~LayoutResolver((CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *)v11);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v20);
    result = 0LL;
  }
  catch ( ... )
  {
    v10 = wil::ResultFromCaughtException(v6, &v9, v7);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v20,
      v10);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v20);
    return v10;
  }
  return result;
}
