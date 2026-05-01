/*
 * XREFs of ?DisplaySettingsChange@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18069F8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1801CCD1C (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     ?GetWorkArea@@YA?AVRect@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z @ 0x1802A9DD8 (-GetWorkArea@@YA-AVRect@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1804B10C0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59440465@@@details@wil@@QEAA_NXZ @ 0x1806A2A24 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59440465@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlGamingTaskViewHost::DisplaySettingsChange(__int64 a1, __int64 *a2, char a3)
{
  __int64 *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59440465>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59440465>::GetImpl'::`2'::impl) )
  {
    v8 = (a1 + 16) & -(__int64)(a1 != 8);
    v9 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v8, 1);
    v6 = *(__int64 **)(a1 + 176);
    if ( v6 && *(_QWORD *)(a1 + 216) )
    {
      if ( (a3 & 0x22) != 0 )
      {
        if ( !*(_BYTE *)(a1 + 864) )
          CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1 - 8);
      }
      else if ( (a3 & 0x11) != 0 && v6 == a2 )
      {
        v10 = *(_OWORD *)GetWorkArea((float *)&v10, a2);
        winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
          (__int64 **)(a1 + 216),
          &v10);
      }
    }
    CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v8);
  }
  return 0LL;
}
