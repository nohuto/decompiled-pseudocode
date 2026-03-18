/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC
 * Callers:
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     MNGetPopupFromMenu @ 0x14006F050 (MNGetPopupFromMenu.c)
 *     xxxEnableMenuItem @ 0x14006F560 (xxxEnableMenuItem.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNEndMenuState @ 0x14009A5F0 (xxxMNEndMenuState.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxGetMenuBarInfo @ 0x1401B04B0 (xxxGetMenuBarInfo.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401B175C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     MNFlushDestroyedPopups @ 0x14021A820 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenuState @ 0x14024F334 (xxxMNStartMenuState.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14026564C (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNUnlinkDelayedFreePopups @ 0x1402B40A0 (MNUnlinkDelayedFreePopups.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402BD29C (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BD444 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1402BD900 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1402BDD9C (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 *     xxxGetSystemMenu @ 0x1402C8A74 (xxxGetSystemMenu.c)
 *     xxxMNDragOver @ 0x1402E7CF0 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1402E7E6C (xxxMNSetGapState.c)
 *     xxxEndMenu @ 0x1402E8608 (xxxEndMenu.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x14006F2D0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagPOPUPMENU>::operator=(__int64 a1, __int64 a2)
{
  if ( a2 != **(_QWORD **)a1 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(a1);
    if ( a2 )
    {
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 88);
      ++*(_DWORD *)(*(_QWORD *)a1 + 8LL);
    }
    else
    {
      *(_QWORD *)a1 = gSmartObjNullRef;
    }
  }
  return a1;
}
