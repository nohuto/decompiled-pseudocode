/*
 * XREFs of ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x18020EE7C
 * Callers:
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18024DF30 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1802D11C4 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x18045EEC8 (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall PerSessionState::IsCurrentThreadOnInputDesktop(PerSessionState *this)
{
  char v1; // bl
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  int pvInfo; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  CurrentThreadId = GetCurrentThreadId();
  ThreadDesktop = GetThreadDesktop(CurrentThreadId);
  if ( ThreadDesktop )
  {
    pvInfo = 0;
    if ( GetUserObjectInformationW(ThreadDesktop, 6, &pvInfo, 4u, 0LL) )
      return pvInfo != 0;
  }
  return v1;
}
