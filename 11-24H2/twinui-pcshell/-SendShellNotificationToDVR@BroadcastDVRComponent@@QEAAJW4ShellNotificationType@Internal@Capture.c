/*
 * XREFs of ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800597E8
 * Callers:
 *     ?ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z @ 0x180058034 (-ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18005A714 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     _lambda_398c59650b4848a9090526bc8733f68c_::operator() @ 0x1801FDF04 (_lambda_398c59650b4848a9090526bc8733f68c_--operator().c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x180232248 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 *     ?OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z @ 0x180318350 (-OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18005788C (-LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRAc.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180058758 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil@@QEAAX_NW4Report.c)
 *     ?BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z @ 0x180059A30 (-BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z.c)
 *     ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180059CD0 (-IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?IsGameBarShowStartupPanelEnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180059E8C (-IsGameBarShowStartupPanelEnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BroadcastDVRComponent::SendShellNotificationToDVR(
        __int64 a1,
        int a2,
        HWND a3,
        unsigned int a4,
        bool a5,
        _BYTE *a6,
        struct BroadcastDVRActiveAppInfo *a7)
{
  unsigned __int64 v9; // rsi
  bool v11; // bp
  int ActivationFactory; // ebx
  bool v13; // r13
  const unsigned __int16 *v14; // rdx
  BroadcastDVRComponent *v15; // rcx
  BroadcastDVRComponent *v16; // rcx
  __int64 v17; // rcx
  HSTRING v19; // rbx
  char v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-80h]
  struct BroadcastDVRActiveAppInfo *v24; // [rsp+50h] [rbp-78h]
  HSTRING string; // [rsp+58h] [rbp-70h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-68h] BYREF

  v23 = a4;
  v9 = a2;
  v24 = a7;
  v22 = 0LL;
  v11 = 0;
  ActivationFactory = 0;
  v13 = a4 & 1;
  if ( BroadcastDVRComponent::IsGameDVREnabled((BroadcastDVRComponent *)a1)
    && ((unsigned int)(v9 - 12) <= 0x14
     || (*(_BYTE *)(a1 + 433) || *a6)
     && (unsigned int)(v9 - 1) <= 2
     && (!*(_DWORD *)(a1 + 436) || *(_BYTE *)(a1 + 434))
     && (!*(_DWORD *)(a1 + 440) || *(_BYTE *)(a1 + 435))) )
  {
    v11 = 1;
  }
  if ( v9 >= 0x21 )
    v14 = L"UNKNOWN";
  else
    v14 = off_18070DD10[v9];
  GameDVRTraceProvider::BroadcastDVRComponent_SendShellNotificationToDVR(v9, v14, a3, v13, a5, v11, a4);
  if ( v11 )
  {
    if ( WindowsCreateStringReference(L"Windows.Media.Capture.Internal.AppCaptureShell", 0x2Eu, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v19 = string;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    ActivationFactory = RoGetActivationFactory(v19, &GUID_1fc4ea77_38de_44ba_8dff_74ba9b15674d, &v22);
    if ( ActivationFactory >= 0 )
    {
      *a6 = 1;
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, HWND, _QWORD, _QWORD))(*(_QWORD *)v22 + 56LL))(
                            v22,
                            a3,
                            v23,
                            (unsigned int)v9);
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UWPGameBar>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_UWPGameBar>::GetImpl'::`2'::impl,
      1u,
      v20,
      v21);
  }
  if ( BroadcastDVRComponent::IsGameDVREnabled((BroadcastDVRComponent *)a1)
    && BroadcastDVRComponent::IsGameBarShowStartupPanelEnabled(v15)
    && a3
    && a5
    && (_DWORD)v9 == 2 )
  {
    *a6 = 1;
    ActivationFactory = BroadcastDVRComponent::LaunchGameOverlayWithStartupTipsFlag(v16, a3, v24);
  }
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)ActivationFactory;
}
