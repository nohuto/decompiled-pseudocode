/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A068
 * Callers:
 *     NtUserThunkedMenuInfo @ 0x1C0012550 (NtUserThunkedMenuInfo.c)
 *     NtUserCreateWindowEx @ 0x1C006D320 (NtUserCreateWindowEx.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C00E4AC0 (NtUserThunkedMenuItemInfo.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00E558C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     NtUserGetMenuItemRect @ 0x1C01D1DF0 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01DE5E0 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1)
{
  SmartObjStackRefBase<tagMENU>::Init(a1, 0LL);
  a1[2] = 0LL;
  return a1;
}
