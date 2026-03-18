/*
 * XREFs of Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28
 * Callers:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 *     NtUserInjectGenericHidInput @ 0x14011CB70 (NtUserInjectGenericHidInput.c)
 *     rimDereferenceDev @ 0x140133C98 (rimDereferenceDev.c)
 *     NtUserInjectDeviceInput @ 0x140139390 (NtUserInjectDeviceInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     ?Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ @ 0x1401626E4 (-Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ.c)
 *     EnterMitRitHazardCrit @ 0x1401627D0 (EnterMitRitHazardCrit.c)
 *     LeaveMitRitHazardCrit @ 0x140162B70 (LeaveMitRitHazardCrit.c)
 *     NtMITActivateInputProcessing @ 0x14016B010 (NtMITActivateInputProcessing.c)
 *     NtUserInitializeGenericHidInjection @ 0x14016DC10 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInjectKeyboardInput @ 0x14016E210 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x14016EBE0 (NtUserInjectMouseInput.c)
 *     NtUserRegisterManipulationThread @ 0x14016F960 (NtUserRegisterManipulationThread.c)
 *     rimFreeSpecificDevFinal @ 0x14017A888 (rimFreeSpecificDevFinal.c)
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140182E00 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     InputExtensibilityCalloutGuard @ 0x140187150 (InputExtensibilityCalloutGuard.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x140188DB0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     ?GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ @ 0x1401892E0 (-GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ.c)
 *     NtUserRemoveInjectionDevice @ 0x14019A120 (NtUserRemoveInjectionDevice.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401A90D8 (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401B9930 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401BB2D0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectPointerInput @ 0x1401BB770 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1401BCE90 (NtUserSetFeatureReportResponse.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1401D3130 (RIMIDEAdoptOrphanedRimDevs.c)
 *     RIMRemoveInjectionDevice @ 0x1401D87A0 (RIMRemoveInjectionDevice.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x140202400 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1402096B8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ActivateKSTInputProcessingHelper @ 0x1402155F0 (ActivateKSTInputProcessingHelper.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140215790 (DeactivateKSTInputProcessingHelper.c)
 *     UserKSTInitialize @ 0x140215930 (UserKSTInitialize.c)
 *     CloseWin32InputRelatedObHandles @ 0x140218A10 (CloseWin32InputRelatedObHandles.c)
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledFallback @ 0x1401A3C60 (Feature_EliminateMitRitHandoff2__private_IsEnabledFallback.c)
 */

__int64 Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EliminateMitRitHandoff2__private_featureState & 0x10) != 0 )
    return Feature_EliminateMitRitHandoff2__private_featureState & 1;
  else
    return Feature_EliminateMitRitHandoff2__private_IsEnabledFallback(
             (unsigned int)Feature_EliminateMitRitHandoff2__private_featureState,
             3LL);
}
