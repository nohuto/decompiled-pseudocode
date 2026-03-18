/*
 * XREFs of ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584
 * Callers:
 *     NtUserSetThreadInputBlocked @ 0x1C0005190 (NtUserSetThreadInputBlocked.c)
 *     NtUserFindWindowEx @ 0x1C003B4B0 (NtUserFindWindowEx.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C004340C (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z.c)
 *     NtUserDestroyCursor @ 0x1C0045800 (NtUserDestroyCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00461C0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserGetIconInfo @ 0x1C0048BA0 (NtUserGetIconInfo.c)
 *     NtUserSetCursorIconDataEx @ 0x1C0049940 (NtUserSetCursorIconDataEx.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C004A78C (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     _GetClassInfoEx @ 0x1C00A9E08 (_GetClassInfoEx.c)
 *     NtUserBuildHwndList @ 0x1C00B1800 (NtUserBuildHwndList.c)
 *     ?OnHideAppStartCursor@@YAXXZ @ 0x1C00EF020 (-OnHideAppStartCursor@@YAXXZ.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00F16EC (xxxProcessNotifyWinEvent.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F88D0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall AtomicExecutionCheck::EnforceConsistency(AtomicExecutionCheck *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  PERESOURCE *v5; // rax

  if ( !*(_QWORD *)(SGDGetUserSessionState(this) + 8)
    || (v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v2, v1, v3, v4),
        !ExIsResourceAcquiredSharedLite(*v5)) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
}
