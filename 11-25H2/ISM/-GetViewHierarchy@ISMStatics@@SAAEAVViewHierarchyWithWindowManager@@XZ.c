/*
 * XREFs of ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94
 * Callers:
 *     ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000E2B8 (--0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180013140 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x180014640 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018CC0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x1800243FC (-NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z.c)
 *     ?HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z @ 0x180025BC0 (-HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x180025C64 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?TryFindInputDelegation@ForegroundManager@@AEAAAEBUTargetingInfo@1@II@Z @ 0x180025DF8 (-TryFindInputDelegation@ForegroundManager@@AEAAAEBUTargetingInfo@1@II@Z.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x180072A14 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x1800AA900 (-NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Inpu.c)
 *     ?RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800AFB38 (-RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AFD6C (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800B170C (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800BC5D4 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800BD4BC (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     _lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_ @ 0x1800FA580 (_lambda_98d8c15e91123ccd84ca1af9146cf167_--_lambda_invoker_cdecl_.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800FB010 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800FB750 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800FBDB4 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FC670 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800FCE0C (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800FD014 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x18019D460 (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 * Callees:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18004E408 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?init_apartment@winrt@@YAXW4apartment_type@1@@Z @ 0x1800A9188 (-init_apartment@winrt@@YAXW4apartment_type@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct ViewHierarchyWithWindowManager *ISMStatics::GetViewHierarchy(void)
{
  struct ViewHierarchyWithWindowManager *result; // rax
  ViewHierarchyWithWindowManager *v1; // [rsp+30h] [rbp+8h]

  result = ISMStatics::s_viewHierarchy;
  if ( !ISMStatics::s_viewHierarchy )
  {
    winrt::init_apartment();
    v1 = (ViewHierarchyWithWindowManager *)operator new(0x100uLL);
    result = ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager(v1);
    ISMStatics::s_viewHierarchy = result;
  }
  return result;
}
