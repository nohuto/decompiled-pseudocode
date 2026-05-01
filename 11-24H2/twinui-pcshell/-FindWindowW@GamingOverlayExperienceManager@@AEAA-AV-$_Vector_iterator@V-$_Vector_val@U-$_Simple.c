/*
 * XREFs of ?FindWindowW@GamingOverlayExperienceManager@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@std@@Uread_lock_required@wil@@AEBI@Z @ 0x18034CD80
 * Callers:
 *     ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x180351180 (-GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Int.c)
 *     ?OnConsolidationRequestedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180355264 (-OnConsolidationRequestedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewMan.c)
 *     ?OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180355DF4 (-OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180356230 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?OnViewDestroyedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18035678C (-OnViewDestroyedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ?OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180356BA8 (-OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 *     ?OnWindowChangedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180356DF0 (-OnWindowChangedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 * Callees:
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x1803639C4 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 */

winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***__fastcall GamingOverlayExperienceManager::FindWindowW(
        __int64 a1,
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***a2,
        __int64 a3,
        unsigned int *a4)
{
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v4; // rsi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **i; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***result; // rax

  v4 = *(winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)(a1 + 1648);
  for ( i = *(winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)(a1 + 1640);
        i != v4
     && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
           *i,
           *a4);
        ++i )
  {
    ;
  }
  result = a2;
  *a2 = i;
  return result;
}
