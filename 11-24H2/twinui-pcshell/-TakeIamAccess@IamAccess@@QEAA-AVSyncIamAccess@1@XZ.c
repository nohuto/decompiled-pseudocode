/*
 * XREFs of ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1801947DC
 * Callers:
 *     ?ShellSetWindowPos@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@0PEAUtagRECT@@KKW4__MIDL___MIDL_itf_privilegedoperations_0000_0010_0001@@@Z @ 0x1801946D0 (-ShellSetWindowPos@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@0PEAUtagRECT@@KKW4__MIDL___MI.c)
 *     ?EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z @ 0x180194770 (-EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z.c)
 *     ?RegisterForCustomDockTargets@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@@Z @ 0x1802491E0 (-RegisterForCustomDockTargets@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@@Z.c)
 *     ?ApplyWindowAction@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@U_WINDOW_ACTION@@@Z @ 0x1803FA020 (-ApplyWindowAction@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@U_WINDOW_ACTION@@@Z.c)
 *     ?ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ @ 0x1803FA0F0 (-ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ.c)
 *     ?EnableShellWindowManagementBehavior@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0004_0001@@1@Z @ 0x1803FA150 (-EnableShellWindowManagementBehavior@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@W4__MIDL.c)
 *     ?MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z @ 0x1803FA430 (-MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?SetBridgeWindowChild@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1803FA6D0 (-SetBridgeWindowChild@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 *     ?SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z @ 0x1803FA740 (-SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z.c)
 *     ?SetFallbackForeground@CPrivilegedForegroundOperations@@EEAAJPEAUHWND__@@K@Z @ 0x1803FA7B0 (-SetFallbackForeground@CPrivilegedForegroundOperations@@EEAAJPEAUHWND__@@K@Z.c)
 *     ?SetProcessLaunchForegroundPolicy@CPrivilegedForegroundOperations@@EEAAJKW4tagPROCESS_LAUNCH_FOREGROUND_POLICY@@@Z @ 0x1803FA850 (-SetProcessLaunchForegroundPolicy@CPrivilegedForegroundOperations@@EEAAJKW4tagPROCESS_LAUNCH_FOR.c)
 *     ?SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z @ 0x1803FA8C0 (-SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z.c)
 *     ?SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z @ 0x1803FAA90 (-SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z.c)
 *     ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1803FAB14 (-SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?SuppressWindowDisplayChange@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1803FAC10 (-SuppressWindowDisplayChange@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x1803FAC80 (-UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall IamAccess::TakeIamAccess(__int64 a1, RTL_SRWLOCK **a2)
{
  signed __int32 v3; // eax

  *a2 = (RTL_SRWLOCK *)a1;
  if ( a1 )
  {
    do
      v3 = *(_DWORD *)(a1 + 36);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 36), v3 + 1, v3) );
  }
  AcquireSRWLockExclusive(*a2 + 6);
  EnableIAMAccess((*a2)[5].Ptr, 1LL);
  return a2;
}
