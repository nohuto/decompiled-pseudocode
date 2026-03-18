/*
 * XREFs of ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54
 * Callers:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C0017690 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C003C1E4 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C003D958 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     SfnNCDESTROY @ 0x1C0075260 (SfnNCDESTROY.c)
 *     SfnINOUTSTYLECHANGE @ 0x1C00756E0 (SfnINOUTSTYLECHANGE.c)
 *     xxxClientCallDitThread @ 0x1C0075B68 (xxxClientCallDitThread.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C007622C (xxxClientAllocWindowClassExtraBytes.c)
 *     EditionParseDesktop @ 0x1C007AFD0 (EditionParseDesktop.c)
 *     EnterEditionCrit @ 0x1C009D370 (EnterEditionCrit.c)
 *     UnmapDesktop @ 0x1C00A1910 (UnmapDesktop.c)
 *     OffsetWindow @ 0x1C00B5B70 (OffsetWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00EDB04 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     xxxClientCallWinEventProc @ 0x1C00F1CA4 (xxxClientCallWinEventProc.c)
 *     UnlinkWindow @ 0x1C010C350 (UnlinkWindow.c)
 *     GetInheritedMonitor @ 0x1C010F5F0 (GetInheritedMonitor.c)
 *     SfnINDEVICECHANGE @ 0x1C011AC10 (SfnINDEVICECHANGE.c)
 *     SfnINOUTLPPOINT5 @ 0x1C011BB60 (SfnINOUTLPPOINT5.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C01217D8 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121950 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0122588 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0122850 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C0152510 (EnsurePointerDeviceHasMonitor.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0248BF0 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

bool __fastcall IS_USERCRIT_OWNED_EXCLUSIVE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PERESOURCE *v4; // rax

  v4 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  return ExIsResourceAcquiredExclusiveLite(*v4) == 1;
}
