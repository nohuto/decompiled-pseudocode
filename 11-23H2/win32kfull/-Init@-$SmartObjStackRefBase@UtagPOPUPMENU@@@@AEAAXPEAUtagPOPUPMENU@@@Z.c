/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C008CE78
 * Callers:
 *     xxxSysCommand @ 0x1C00857C4 (xxxSysCommand.c)
 *     xxxGetSystemMenu @ 0x1C00E2BDC (xxxGetSystemMenu.c)
 *     xxxSetMenuInfo @ 0x1C00E4338 (xxxSetMenuInfo.c)
 *     xxxInsertMenuItem @ 0x1C00E4DD0 (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00E5ED8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     GetInheritedMonitor @ 0x1C010F5F0 (GetInheritedMonitor.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C013A030 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C5BAC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     MNFlushDestroyedPopups @ 0x1C01FEAD0 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C01FF060 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C01FF140 (xxxMNEndMenuState.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FF260 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenuState @ 0x1C01FF7EC (xxxMNStartMenuState.c)
 *     xxxEndMenuLoop @ 0x1C02133A0 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0213518 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0214988 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0214A78 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02152FC (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215824 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0215C28 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0216090 (MNSetTimerToCloseHierarchy.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216204 (xxxCallHandleMenuMessages.c)
 *     xxxMNCancel @ 0x1C0216554 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0216C60 (xxxMNCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0216F64 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C0217788 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C02180A0 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C0218340 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02191F0 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxEnableMenuItem @ 0x1C02216E0 (xxxEnableMenuItem.c)
 *     xxxHiliteMenuItem @ 0x1C022FC84 (xxxHiliteMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C02304BC (xxxGetMenuBarInfo.c)
 *     xxxMNDragOver @ 0x1C0230FB8 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0231154 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023134C (xxxMNUpdateDraggingInfo.c)
 *     xxxEndMenu @ 0x1C0231520 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0237010 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagPOPUPMENU>::Init(_QWORD *a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v5; // r9
  __int64 v6; // r10
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v5 = a1 + 1;
  v6 = ThreadWin32Thread;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 88);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 88) + 8LL);
  }
  result = *(_QWORD *)(ThreadWin32Thread + 1512);
  *v5 = result;
  *(_QWORD *)(v6 + 1512) = v5;
  return result;
}
