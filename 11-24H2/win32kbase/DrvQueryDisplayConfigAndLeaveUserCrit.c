/*
 * XREFs of DrvQueryDisplayConfigAndLeaveUserCrit @ 0x140023794
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x14016F580 (NtUserQueryDisplayConfig.c)
 * Callees:
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001E1E8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140020EE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DispBrokerGetCurrentMode @ 0x1400C83E0 (DispBrokerGetCurrentMode.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x1401A8A8C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvQueryDisplayConfigAndLeaveUserCrit(
        __int64 a1,
        unsigned int *a2,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4)
{
  __int64 v4; // rbx
  int v5; // esi
  bool v9; // di
  __int64 *v10; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v12; // ebx
  bool v14; // [rsp+28h] [rbp-30h]
  __int64 *v15; // [rsp+30h] [rbp-28h] BYREF
  bool v16; // [rsp+38h] [rbp-20h]
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = (unsigned int)a1;
  v5 = a1 & 7;
  v9 = v5 == 4 && ((unsigned int)DispBrokerGetCurrentMode() == 3 || (unsigned int)DispBrokerGetCurrentMode() == 2);
  v10 = *(__int64 **)(W32GetSessionState(a1) + 88);
  v15 = v10;
  v16 = !v9;
  if ( !v9 )
    GreAcquireSemaphoreShared<1,>(v10);
  UserSessionSwitchLeaveCritWithNonPaged();
  WdLogSingleEntry1(4LL, v4);
  WdLogGlobalForLineNumber = 12246;
  if ( v5 == 4 && ((unsigned int)DispBrokerGetCurrentMode() == 3 || (unsigned int)DispBrokerGetCurrentMode() == 2) )
  {
    if ( (unsigned int)DispBrokerGetCurrentMode() == 3 )
    {
      v17 = *a2;
      v12 = DispBrokerQueryDisplayConfig(v4 & 0xFFFFFFEF, v4 & 0x10, &v17, a3, a4, v14);
      if ( v12 >= 0 )
        *a2 = v17;
    }
    else
    {
      v12 = -1073741790;
    }
  }
  else
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, enum DISPLAYCONFIG_TOPOLOGY_ID *))(DxgkWin32kInterface + 216))(
            (unsigned int)v4 & 0xFFFFFFEF,
            v4 & 0x10,
            a2,
            a3,
            a4);
  }
  WdLogSingleEntry1(4LL, v12);
  WdLogGlobalForLineNumber = 12283;
  NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v15);
  return (unsigned int)v12;
}
