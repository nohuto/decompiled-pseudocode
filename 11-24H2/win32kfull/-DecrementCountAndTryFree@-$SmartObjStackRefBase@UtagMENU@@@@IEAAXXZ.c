/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1400736D4
 * Callers:
 *     NtUserCreateWindowEx @ 0x14004AF20 (NtUserCreateWindowEx.c)
 *     xxxEnableMenuItem @ 0x14006F560 (xxxEnableMenuItem.c)
 *     _GetSubMenu @ 0x14006F7B4 (_GetSubMenu.c)
 *     xxxSetSysMenu @ 0x14006F958 (xxxSetSysMenu.c)
 *     _SetMenuDefaultItem @ 0x14006FBFC (_SetMenuDefaultItem.c)
 *     NtUserDeleteMenu @ 0x14006FD90 (NtUserDeleteMenu.c)
 *     NtUserDestroyMenu @ 0x14006FF00 (NtUserDestroyMenu.c)
 *     xxxSetMenuItemInfo @ 0x14006FFFC (xxxSetMenuItemInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1400701D4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxMNCanClose @ 0x1400708B0 (xxxMNCanClose.c)
 *     NtUserRemoveMenu @ 0x140070AC0 (NtUserRemoveMenu.c)
 *     xxxGetSysMenuPtr @ 0x140070C28 (xxxGetSysMenuPtr.c)
 *     MNLookUpItem @ 0x140070DE8 (MNLookUpItem.c)
 *     xxxCalcClientRect @ 0x1400712A8 (xxxCalcClientRect.c)
 *     xxxInsertMenuItem @ 0x140071A30 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1400726F0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSendMenuSelect @ 0x14009E36C (xxxSendMenuSelect.c)
 *     NtUserCheckMenuItem @ 0x1401C7270 (NtUserCheckMenuItem.c)
 *     NtUserSetMenu @ 0x1401F5330 (NtUserSetMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  void *CurrentWin32kStackRefLookAside; // rax

  result = *a1;
  if ( *a1 != gSmartObjNullRef )
  {
    --*(_DWORD *)(*a1 + 8);
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 8) )
    {
      result = *a1;
      if ( *(_BYTE *)(*a1 + 12) )
      {
        v2 = *a1;
        CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
        return Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v2);
      }
    }
  }
  return result;
}
