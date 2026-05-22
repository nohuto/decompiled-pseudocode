/*
 * XREFs of ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D738
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18005C55C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18006D660 (-OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18006D710 (-OnConnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180087DA0 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800AABE0 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 *     ?RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800B2820 (-RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800BD4BC (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180131EF0 (-SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Interna.c)
 *     ?SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180131FD0 (-SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@U.c)
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180156C0C (--$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180156CA4 (--$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ?DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z @ 0x18015CFB0 (-DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x18019D460 (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VForegroundManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A8BCC (-InternalRelease@-$ComPtr@VForegroundManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@ForegroundManager@@SA?AV?$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ @ 0x1800AE3F4 (-Create@ForegroundManager@@SA-AV-$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ.c)
 */

struct ForegroundManager *ISMStatics::GetForegroundManager(void)
{
  struct ForegroundManager *result; // rax
  struct ForegroundManager **v1; // rax
  struct ForegroundManager *v2; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  result = ISMStatics::s_foregroundManager;
  if ( !ISMStatics::s_foregroundManager )
  {
    v1 = (struct ForegroundManager **)ForegroundManager::Create(&v3);
    v2 = *v1;
    *v1 = 0LL;
    ISMStatics::s_foregroundManager = v2;
    Microsoft::WRL::ComPtr<ForegroundManager>::InternalRelease(&v3);
    return ISMStatics::s_foregroundManager;
  }
  return result;
}
