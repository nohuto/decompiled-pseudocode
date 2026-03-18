/*
 * XREFs of DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x140023600
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x14016CB70 (NtUserGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001E1E8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140020EE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DispBrokerGetCurrentMode @ 0x1400C83E0 (DispBrokerGetCurrentMode.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x1401A8A8C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizesAndLeaveUserCrit(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdi
  int v3; // esi
  int v4; // ebx
  bool v6; // bp
  __int64 *v7; // rcx
  __int64 DxgkWin32kInterface; // rax
  int DisplayConfig; // eax
  bool v11; // [rsp+28h] [rbp-20h]
  __int64 *v12; // [rsp+30h] [rbp-18h] BYREF
  bool v13; // [rsp+38h] [rbp-10h]

  v2 = (unsigned int)a1;
  v3 = a1 & 7;
  v4 = 0;
  v6 = v3 == 4 && ((unsigned int)DispBrokerGetCurrentMode() == 3 || (unsigned int)DispBrokerGetCurrentMode() == 2);
  v7 = *(__int64 **)(W32GetSessionState(a1) + 88);
  v12 = v7;
  v13 = !v6;
  if ( !v6 )
    GreAcquireSemaphoreShared<1,>(v7);
  UserSessionSwitchLeaveCritWithNonPaged();
  WdLogSingleEntry1(4LL, v2);
  WdLogGlobalForLineNumber = 12169;
  if ( v3 == 4 && ((unsigned int)DispBrokerGetCurrentMode() == 3 || (unsigned int)DispBrokerGetCurrentMode() == 2) )
  {
    if ( (unsigned int)DispBrokerGetCurrentMode() == 3 )
    {
      DisplayConfig = DispBrokerQueryDisplayConfig(v2 & 0xFFFFFFEF, v2 & 0x10, a2, 0LL, 0LL, v11);
      if ( DisplayConfig != -1073741789 )
        v4 = DisplayConfig;
    }
    else
    {
      v4 = -1073741790;
    }
  }
  else
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(DxgkWin32kInterface + 208))((unsigned int)v2, a2);
  }
  WdLogSingleEntry1(4LL, v4);
  WdLogGlobalForLineNumber = 12200;
  NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v12);
  return (unsigned int)v4;
}
