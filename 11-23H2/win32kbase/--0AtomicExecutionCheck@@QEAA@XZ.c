/*
 * XREFs of ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624
 * Callers:
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00121BC (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 *     xxxInitProcessInfo @ 0x1C0036A38 (xxxInitProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004EC10 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C004F800 (DestroyThreadsObjects.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     HandleInputDestDestruction @ 0x1C0052E4C (HandleInputDestDestruction.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C0055268 (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00C1410 (NtUserRegisterTouchPadCapable.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD994 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00E442E (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     NtUserEnableTouchPad @ 0x1C0143E30 (NtUserEnableTouchPad.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C01456E0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C014A350 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C014BA10 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D4A80 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     PostEvent @ 0x1C01E8768 (PostEvent.c)
 *     PostThreadEvent @ 0x1C01E88A0 (PostThreadEvent.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01F4DE4 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01F5018 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F62EC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C0206294 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 * Callees:
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C004A030 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 */

AtomicExecutionCheck *__fastcall AtomicExecutionCheck::AtomicExecutionCheck(
        AtomicExecutionCheck *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 CurrentThreadWin32Thread; // rax
  AtomicExecutionCheck *result; // rax

  *(_BYTE *)this = 0;
  AtomicExecutionCheck::EnforceConsistency(this, a2, a3, a4);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  result = this;
  *(_BYTE *)this = 1;
  return result;
}
