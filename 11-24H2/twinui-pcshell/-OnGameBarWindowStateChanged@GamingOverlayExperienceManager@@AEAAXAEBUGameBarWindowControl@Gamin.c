/*
 * XREFs of ?OnGameBarWindowStateChanged@GamingOverlayExperienceManager@@AEAAXAEBUGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@AEBW4GameBarWindowState@3456@@Z @ 0x180355578
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::GamingOverlay::GameBarWindowControl_enum_winrt::Windows::Internal::GamingOverlay::GameBarWindowState___lambda_619067457216c3990f36ed941ddd13a8___::Invoke @ 0x180352080 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Ga.c)
 * Callees:
 *     ?CancelPendingResultsOperations@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18034BFB4 (-CancelPendingResultsOperations@GamingOverlayExperienceManager@@AEAAXXZ.c)
 */

void __fastcall GamingOverlayExperienceManager::OnGameBarWindowStateChanged(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::GamingOverlay::GameBarWindowControl *a2,
        const enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState *a3)
{
  if ( *(_DWORD *)a3 == 3 || *(_DWORD *)a3 == 4 )
    GamingOverlayExperienceManager::CancelPendingResultsOperations(this);
}
