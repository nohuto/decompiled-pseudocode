/*
 * XREFs of ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x18057D8F8
 * Callers:
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x18026D0C0 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x18002B950 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007E1F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800C0310 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x1800C1800 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C2740 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x1800C278C (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1801421C0 (--$find@X@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$.c)
 *     ?TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z @ 0x18015E994 (-TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z.c)
 *     ?HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid@6@_N@Z @ 0x18015ED5C (-HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid.c)
 *     ?GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x18015EDBC (-GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHW.c)
 *     ?GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x18015EE1C (-GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@U.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActivateTabAndUpdateTimestamps(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        void *a3,
        __int64 *a4)
{
  char v8; // r8
  __int64 v9; // r9
  RTL_SRWLOCK *v10; // rdi
  char v11; // r8
  __int64 v12; // r9
  HWND TabProxyWindowOwnerWindow; // r15
  HWND TabProxyWindowHwnd; // rax
  __m128i v16; // [rsp+20h] [rbp-58h] BYREF
  void *v17; // [rsp+30h] [rbp-48h] BYREF
  RTL_SRWLOCK *v18[3]; // [rsp+38h] [rbp-40h] BYREF
  __m128i v19; // [rsp+50h] [rbp-28h] BYREF

  v16.m128i_i64[0] = (__int64)a2;
  v17 = a3;
  wil::AcquireSRWLockExclusive(v18, a1 + 77);
  if ( (PVOID)*std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find<void>(
                 &a1[78].Ptr,
                 &v16,
                 &v17) == a1[79].Ptr
    || (v16.m128i_i64[0] = 0LL,
        winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a4, &v16)) )
  {
    *a2 = 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
      a4,
      &v19);
    v16 = v19;
    if ( winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActivateTab(a1, a3, &v16) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
        1u,
        v8,
        v9);
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1);
    }
    v10 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                           &a1[78].Ptr,
                           (__int64 *)&v17);
    v16 = v19;
    if ( winrt::Windows::Internal::Shell::implementation::WindowData::TabProxyWindowExists(v10, (__int64)&v16) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
        1u,
        v11,
        v12);
      v16 = v19;
      TabProxyWindowOwnerWindow = (HWND)winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowOwnerWindow(
                                          v10,
                                          (__int64)&v16);
      if ( TabProxyWindowOwnerWindow == GetForegroundWindow() )
      {
        v16 = v19;
        TabProxyWindowHwnd = (HWND)winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowHwnd(
                                     v10,
                                     (__int64)&v16);
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
          (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
          TabProxyWindowHwnd,
          TabProxyWindowOwnerWindow);
      }
      v16 = v19;
      winrt::Windows::Internal::Shell::implementation::WindowData::HideTabProxyWindowFromAltTab(v10, (__int64)&v16);
    }
    *a2 = *a4;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v18);
  return a2;
}
