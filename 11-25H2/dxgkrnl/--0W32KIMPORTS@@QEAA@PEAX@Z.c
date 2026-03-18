/*
 * XREFs of ??0W32KIMPORTS@@QEAA@PEAX@Z @ 0x140091144
 * Callers:
 *     ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x140091CBC (-CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z.c)
 * Callees:
 *     ??0?$Win32kFunction@$$A6AJPEAU_W32THREAD@@@Z@@QEAA@PEAXPEBDP6AJPEAU_W32THREAD@@@Z@Z @ 0x1400910FC (--0-$Win32kFunction@$$A6AJPEAU_W32THREAD@@@Z@@QEAA@PEAXPEBDP6AJPEAU_W32THREAD@@@Z@Z.c)
 */

W32KIMPORTS *__fastcall W32KIMPORTS::W32KIMPORTS(W32KIMPORTS *this, __int64 a2)
{
  __int64 ExportedRoutineByName; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax

  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this,
    a2,
    (__int64)"UserIsCurrentProcessImmersive",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 1,
    a2,
    (__int64)"ReferenceW32Thread",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 2,
    a2,
    (__int64)"DereferenceW32Thread",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  ExportedRoutineByName = RtlFindExportedRoutineByName(a2, "RecordCapabilityUsage");
  *((_QWORD *)this + 3) = ExportedRoutineByName;
  if ( !ExportedRoutineByName )
    *((_QWORD *)this + 3) = W32kStub_DxgkEngReleaseWin32kLocks;
  v5 = RtlFindExportedRoutineByName(a2, "CheckAndProcessSurfaceComplete");
  *((_QWORD *)this + 4) = v5;
  if ( !v5 )
    *((_QWORD *)this + 4) = W32kStub_DxgkEngReleaseWin32kLocks;
  v6 = RtlFindExportedRoutineByName(a2, "CreateRegion");
  *((_QWORD *)this + 5) = v6;
  if ( !v6 )
    *((_QWORD *)this + 5) = W32kStub_GreSfmOpenTokenEvent;
  v7 = RtlFindExportedRoutineByName(a2, "CreateRegionFromRect");
  *((_QWORD *)this + 6) = v7;
  if ( !v7 )
    *((_QWORD *)this + 6) = W32kStub_GreSfmOpenTokenEvent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 7,
    a2,
    (__int64)"DCompositionNotifyPendingPresent",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 8,
    a2,
    (__int64)"DCompositionNotifyCompletedPresent",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v8 = RtlFindExportedRoutineByName(a2, "DCompositionShouldDeferToken");
  *((_QWORD *)this + 9) = v8;
  if ( !v8 )
    *((_QWORD *)this + 9) = W32kStub_UserRemoveWindowedSwapChain;
  v9 = RtlFindExportedRoutineByName(a2, "DCompositionNotifyAdaptersChanged");
  *((_QWORD *)this + 10) = v9;
  if ( !v9 )
    *((_QWORD *)this + 10) = W32kStub_UserRemoveWindowedSwapChain;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 11,
    a2,
    (__int64)"EtwTraceCompositionSurfaceObjectUpdateEvent",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v10 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerStartCompleteToken");
  *((_QWORD *)this + 12) = v10;
  if ( !v10 )
    *((_QWORD *)this + 12) = W32kStub_DxgkEngReleaseWin32kLocks;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 13,
    a2,
    (__int64)"EtwTraceFlipManagerStopCompleteToken",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 14,
    a2,
    (__int64)"EtwTraceFlipManagerStartTokenReleaseToFrame",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 15,
    a2,
    (__int64)"EtwTraceFlipManagerStopTokenReleaseToFrame",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 16,
    a2,
    (__int64)"EtwTraceFlipManagerPresentProcessed",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 17,
    a2,
    (__int64)"EtwTraceFlipManagerPresentDeferred",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 18,
    a2,
    (__int64)"EtwTraceFlipManagerPresentCanceled",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 19,
    a2,
    (__int64)"EtwTraceFlipManagerPresentSkipped",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v11 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerPresentPosted");
  *((_QWORD *)this + 20) = v11;
  if ( !v11 )
    *((_QWORD *)this + 20) = W32kStub_DxgkEngReleaseWin32kLocks;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 21,
    a2,
    (__int64)"EtwTraceFlipManagerPresentQueueDepth",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v12 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerContentRebind");
  *((_QWORD *)this + 22) = v12;
  if ( !v12 )
    *((_QWORD *)this + 22) = W32kStub_DxgkEngReleaseWin32kLocks;
  v13 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerPresentIFlipSubmitted");
  *((_QWORD *)this + 23) = v13;
  if ( !v13 )
    *((_QWORD *)this + 23) = W32kStub_DxgkEngReleaseWin32kLocks;
  v14 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerPresentIFlipCompleted");
  *((_QWORD *)this + 24) = v14;
  if ( !v14 )
    *((_QWORD *)this + 24) = W32kStub_DxgkEngReleaseWin32kLocks;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 25,
    a2,
    (__int64)"EtwTraceFlipManagerPresentIFlipPurgePreviousPresents",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 26,
    a2,
    (__int64)"EtwTraceFlipManagerPresentConfirmed",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v15 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerPresentSignaled");
  *((_QWORD *)this + 27) = v15;
  if ( !v15 )
    *((_QWORD *)this + 27) = W32kStub_DxgkEngReleaseWin32kLocks;
  v16 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerProducerSetContent");
  *((_QWORD *)this + 28) = v16;
  if ( !v16 )
    *((_QWORD *)this + 28) = W32kStub_DxgkEngReleaseWin32kLocks;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 29,
    a2,
    (__int64)"EtwTraceFlipManagerProducerSetContent_Enabled",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  v17 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerBufferAvailable");
  *((_QWORD *)this + 30) = v17;
  if ( !v17 )
    *((_QWORD *)this + 30) = W32kStub_DxgkEngReleaseWin32kLocks;
  v18 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerAddBuffer");
  *((_QWORD *)this + 31) = v18;
  if ( !v18 )
    *((_QWORD *)this + 31) = W32kStub_DxgkEngReleaseWin32kLocks;
  v19 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerRemoveBuffer");
  *((_QWORD *)this + 32) = v19;
  if ( !v19 )
    *((_QWORD *)this + 32) = W32kStub_DxgkEngReleaseWin32kLocks;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 33,
    a2,
    (__int64)"EtwTraceFlipManagerBindingStart",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 34,
    a2,
    (__int64)"EtwTraceFlipManagerBindingInfo",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 35,
    a2,
    (__int64)"EtwTraceFlipManagerBindingStop",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v20 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerAddRemoveContent");
  *((_QWORD *)this + 36) = v20;
  if ( !v20 )
    *((_QWORD *)this + 36) = W32kStub_DxgkEngReleaseWin32kLocks;
  v21 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerContentFlip");
  *((_QWORD *)this + 37) = v21;
  if ( !v21 )
    *((_QWORD *)this + 37) = W32kStub_DxgkEngReleaseWin32kLocks;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 38,
    a2,
    (__int64)"EtwTraceFlipManagerNoOpPresent",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 39,
    a2,
    (__int64)"EtwTraceFlipManagerCancelPosted",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v22 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerContentUnbind");
  *((_QWORD *)this + 40) = v22;
  if ( !v22 )
    *((_QWORD *)this + 40) = W32kStub_DxgkEngReleaseWin32kLocks;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 41,
    a2,
    (__int64)"EtwTraceFlipManagerCreate",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 42,
    a2,
    (__int64)"EtwTraceFlipManagerDestroy",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v23 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenManagerDisableScanoutToken");
  *((_QWORD *)this + 43) = v23;
  if ( !v23 )
    *((_QWORD *)this + 43) = W32kStub_DxgkEngReleaseWin32kLocks;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 44,
    a2,
    (__int64)"EtwTraceFlipManagerLost",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 45,
    a2,
    (__int64)"EtwTraceFlipManagerCanceledPresentShown",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 46,
    a2,
    (__int64)"EtwTraceFlipManagerUpdateExpectedConsumerPresentId",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 47,
    a2,
    (__int64)"EtwTraceFlipManagerDiscardPresentAfterDestroy",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v24 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerWaitForFrameRenderingComplete");
  *((_QWORD *)this + 48) = v24;
  if ( !v24 )
    *((_QWORD *)this + 48) = W32kStub_DxgkEngReleaseWin32kLocks;
  v25 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerWaitForFrameFlipAway");
  *((_QWORD *)this + 49) = v25;
  if ( !v25 )
    *((_QWORD *)this + 49) = W32kStub_DxgkEngReleaseWin32kLocks;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 50,
    a2,
    (__int64)"EtwTraceFlipManagerFlipAwayFenceCreate",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 51,
    a2,
    (__int64)"EtwTraceFlipManagerFlipAwayFenceDestroy",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v26 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenCompositionSurfaceObjectEvent");
  *((_QWORD *)this + 52) = v26;
  if ( !v26 )
    *((_QWORD *)this + 52) = W32kStub_DxgkEngReleaseWin32kLocks;
  v27 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenIndependentFlipSkipCompleteEvent");
  *((_QWORD *)this + 53) = v27;
  if ( !v27 )
    *((_QWORD *)this + 53) = W32kStub_DxgkEngReleaseWin32kLocks;
  v28 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenStateChangedEvent");
  *((_QWORD *)this + 54) = v28;
  if ( !v28 )
    *((_QWORD *)this + 54) = W32kStub_DxgkEngReleaseWin32kLocks;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 55,
    a2,
    (__int64)"GreDwmDesktopOverlaysEnabled",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 56,
    a2,
    (__int64)"GreIsDwmStateLocked",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 57,
    a2,
    (__int64)"GreLockDwmState",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 58,
    a2,
    (__int64)"GreSfmCleanupPresentHistory",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v29 = RtlFindExportedRoutineByName(a2, "GreSfmGetNotificationTokens");
  *((_QWORD *)this + 59) = v29;
  if ( !v29 )
    *((_QWORD *)this + 59) = W32kStub_GreSfmOpenTokenEvent;
  v30 = RtlFindExportedRoutineByName(a2, "GreSfmGetPresentQueueEvent");
  *((_QWORD *)this + 60) = v30;
  if ( !v30 )
    *((_QWORD *)this + 60) = W32kStub_GreSfmOpenTokenEvent;
  v31 = RtlFindExportedRoutineByName(a2, "GreSfmOpenTokenEvent");
  *((_QWORD *)this + 61) = v31;
  if ( !v31 )
    *((_QWORD *)this + 61) = W32kStub_GreSfmOpenTokenEvent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 62,
    a2,
    (__int64)"GreUnlockDwmState",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v32 = RtlFindExportedRoutineByName(a2, "UserAllocDefaultCompositionSecurityDescriptor");
  *((_QWORD *)this + 63) = v32;
  if ( !v32 )
    *((_QWORD *)this + 63) = W32kStub_GreSfmOpenTokenEvent;
  v33 = RtlFindExportedRoutineByName(a2, "UserDereferenceDwmProcess");
  *((_QWORD *)this + 64) = v33;
  if ( !v33 )
    *((_QWORD *)this + 64) = W32kStub_DxgkEngReleaseWin32kLocks;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 65,
    a2,
    (__int64)"UserEnterUserCritSecShared",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 66,
    a2,
    (__int64)"UserIsCurrentProcessImmersive",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 67,
    a2,
    (__int64)"UserIsCurrentThreadDesktopComposed",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 68,
    a2,
    (__int64)"UserIsUserCritSecIn",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 69,
    a2,
    (__int64)"UserIsDisconnectConnection",
    (__int64)W32kStub_UserIsDisconnectConnection);
  v34 = RtlFindExportedRoutineByName(a2, "UserIsWindowDesktopComposed");
  *((_QWORD *)this + 70) = v34;
  if ( !v34 )
    *((_QWORD *)this + 70) = W32kStub_UserIsWindowDesktopComposed;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 71,
    a2,
    (__int64)"UserLeaveUserCritSec",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  v35 = RtlFindExportedRoutineByName(a2, "UserReferenceDwmApiPort");
  *((_QWORD *)this + 72) = v35;
  if ( !v35 )
    *((_QWORD *)this + 72) = W32kStub_UserRemoveWindowedSwapChain;
  v36 = RtlFindExportedRoutineByName(a2, "UserReferenceDwmProcess");
  *((_QWORD *)this + 73) = v36;
  if ( !v36 )
    *((_QWORD *)this + 73) = W32kStub_UserRemoveWindowedSwapChain;
  v37 = RtlFindExportedRoutineByName(a2, "UserRemoveWindowedSwapChain");
  *((_QWORD *)this + 74) = v37;
  if ( !v37 )
    *((_QWORD *)this + 74) = W32kStub_UserRemoveWindowedSwapChain;
  v38 = RtlFindExportedRoutineByName(a2, "UserSetWindowedSwapChainApiExt");
  *((_QWORD *)this + 75) = v38;
  if ( !v38 )
    *((_QWORD *)this + 75) = W32kStub_UserRemoveWindowedSwapChain;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 76,
    a2,
    (__int64)"UserUnsafeIsCurrentProcessDwm",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  v39 = RtlFindExportedRoutineByName(a2, "UserUnsafeIsProcessDwm");
  *((_QWORD *)this + 77) = v39;
  if ( !v39 )
    *((_QWORD *)this + 77) = W32kStub_UserRemoveWindowedSwapChain;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 78,
    a2,
    (__int64)"Win32FreePool",
    (__int64)W32kStub_DxgkEngReleaseWin32kLocks);
  return this;
}
