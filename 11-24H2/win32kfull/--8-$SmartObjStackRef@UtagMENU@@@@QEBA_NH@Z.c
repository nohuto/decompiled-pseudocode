/*
 * XREFs of ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890
 * Callers:
 *     NtUserCreateWindowEx @ 0x14004AF20 (NtUserCreateWindowEx.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x14006B4C8 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     xxxSetSysMenu @ 0x14006F958 (xxxSetSysMenu.c)
 *     NtUserDeleteMenu @ 0x14006FD90 (NtUserDeleteMenu.c)
 *     NtUserDestroyMenu @ 0x14006FF00 (NtUserDestroyMenu.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140070748 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     NtUserRemoveMenu @ 0x140070AC0 (NtUserRemoveMenu.c)
 *     xxxMNStartMenu @ 0x14009A980 (xxxMNStartMenu.c)
 *     LockPopupMenu @ 0x14009AD54 (LockPopupMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x14009D240 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     NtUserThunkedMenuInfo @ 0x1401A8FD0 (NtUserThunkedMenuInfo.c)
 *     LockDesktopMenu @ 0x1401A9864 (LockDesktopMenu.c)
 *     xxxGetSysMenu @ 0x1401B0B74 (xxxGetSysMenu.c)
 *     NtUserTrackPopupMenuEx @ 0x1401B1250 (NtUserTrackPopupMenuEx.c)
 *     NtUserGetMenuItemRect @ 0x1401B1410 (NtUserGetMenuItemRect.c)
 *     NtUserCheckMenuItem @ 0x1401C7270 (NtUserCheckMenuItem.c)
 *     NtUserEnableMenuItem @ 0x1401DD8F0 (NtUserEnableMenuItem.c)
 *     NtUserSetMenu @ 0x1401F5330 (NtUserSetMenu.c)
 *     NtUserSetMenuDefaultItem @ 0x1401F55F0 (NtUserSetMenuDefaultItem.c)
 *     NtUserMenuItemFromPoint @ 0x14020EC40 (NtUserMenuItemFromPoint.c)
 *     NtUserSetSystemMenu @ 0x1402178B0 (NtUserSetSystemMenu.c)
 *     NtUserSetMenuFlagRtoL @ 0x14021CFB0 (NtUserSetMenuFlagRtoL.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x14026CBB8 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 *     NtUserHiliteMenuItem @ 0x140298630 (NtUserHiliteMenuItem.c)
 *     NtUserSetMenuContextHelpId @ 0x14029DF10 (NtUserSetMenuContextHelpId.c)
 *     NtUserThunkedMenuItemInfo @ 0x1402A12D0 (NtUserThunkedMenuItemInfo.c)
 *     xxxMNDoubleClick @ 0x1402BDEDC (xxxMNDoubleClick.c)
 *     xxxMNSetTop @ 0x1402BE960 (xxxMNSetTop.c)
 *     xxxGetSystemMenu @ 0x1402C8A74 (xxxGetSystemMenu.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402E1C74 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1402E6618 (xxxDoScrollMenu.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator==(__int64 a1)
{
  return !*(_QWORD *)(a1 + 16) && **(_QWORD **)a1 == 0LL;
}
