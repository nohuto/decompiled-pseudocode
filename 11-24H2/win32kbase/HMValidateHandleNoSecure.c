/*
 * XREFs of HMValidateHandleNoSecure @ 0x140048B90
 * Callers:
 *     GetWorkspaceId @ 0x1400483D0 (GetWorkspaceId.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1400483F4 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x140048550 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     ResolveMouseOrPointerDevice @ 0x140048AC0 (ResolveMouseOrPointerDevice.c)
 *     IsTouchpadDevice @ 0x140048B4C (IsTouchpadDevice.c)
 *     NtUserGetPointerDeviceOrientation @ 0x140062E50 (NtUserGetPointerDeviceOrientation.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1400D9C78 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA038 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1400E0E88 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     HMSDCheck @ 0x1400E10F0 (HMSDCheck.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E2610 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     _IsPseudoDevice @ 0x14011A930 (_IsPseudoDevice.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x14012B09C (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012E3E0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     _GetDeviceRects @ 0x140143A60 (_GetDeviceRects.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140148E60 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1401829E0 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140182E00 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140183BB0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1401853C0 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x140187B70 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188294 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018A840 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x14019D900 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     CleanupTouchExtensibility @ 0x14019F048 (CleanupTouchExtensibility.c)
 *     IsTouchpadCapable @ 0x1401A6820 (IsTouchpadCapable.c)
 *     ReValidateHwndStrict @ 0x1401A92E0 (ReValidateHwndStrict.c)
 *     NtMITPostWindowEventMessage @ 0x1401B8950 (NtMITPostWindowEventMessage.c)
 *     NtUserGetMinuserIdForBaseWindow @ 0x1401BADD0 (NtUserGetMinuserIdForBaseWindow.c)
 *     UserDeleteBaseWindowHandle @ 0x1401BE850 (UserDeleteBaseWindowHandle.c)
 *     GetPreparsedData @ 0x1401DE368 (GetPreparsedData.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F359C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1401F36F0 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401F7794 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FA77C (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x140200750 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1402031E4 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x14020DE58 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x140218D70 (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     SynthesizeMitTouchInput @ 0x140218E34 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1402191B8 (SynthesizeTouchInputContainer.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14021A5B8 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall HMValidateHandleNoSecure(__int64 a1, char a2)
{
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r14
  char v14; // al

  v3 = a1;
  v4 = 0LL;
  W32GetCurrentThreadNonPaged(a1);
  v6 = *(_QWORD *)(W32GetUserSessionState(v5) + 19928);
  if ( (unsigned __int64)(unsigned __int16)v3 < *(_QWORD *)(v6 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v6);
    v9 = *(_DWORD *)(W32GetUserSessionState(v8) + 19952) * (unsigned int)(unsigned __int16)v3;
    v10 = v9 + *(_QWORD *)(UserSessionState + 19944);
    v11 = W32GetUserSessionState(v9);
    v12 = *(_QWORD *)(v11 + 19888);
    v13 = 5LL * (unsigned int)((v10 - *(_QWORD *)(v11 + 19944)) >> 5);
    LOWORD(v3) = HIWORD(v3) & 0x7FFF;
    if ( ((HIWORD(v3) & 0x7FFF) == *(_WORD *)(v10 + 26)
       || (_WORD)v3 == 0x7FFF
       || !(_WORD)v3 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v10 + 25) & 1) == 0 )
    {
      v14 = *(_BYTE *)(v10 + 24);
      if ( v14 == a2 || a2 == -1 && v14 )
        return *(_QWORD *)(v12 + 8 * v13);
    }
  }
  return v4;
}
