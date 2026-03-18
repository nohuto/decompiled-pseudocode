/*
 * XREFs of ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1400247CC
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x14016C140 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DrvEnumDisplaySettings @ 0x140024870 (DrvEnumDisplaySettings.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserEnumDisplaySettingsShared(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        struct _devicemodeW *a3,
        int a4)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1LL);
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
  {
    W32GetUserSessionState();
    v6 = DrvEnumDisplaySettings(a1, a4);
  }
  else
  {
    v6 = -1073741823;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v6;
}
