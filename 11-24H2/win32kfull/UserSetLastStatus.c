/*
 * XREFs of UserSetLastStatus @ 0x14015E5E8
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x140034540 (NtUserUpdateLayeredWindow.c)
 *     NtUserConsoleControl @ 0x14015D3C0 (NtUserConsoleControl.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x14015DA00 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserSetLayeredWindowAttributes @ 0x14015DB60 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x14015E100 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserDwmKernelStartup @ 0x140194D20 (NtUserDwmKernelStartup.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1401AC430 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1401BC850 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserOpenWindowStation @ 0x1401DD2E0 (NtUserOpenWindowStation.c)
 *     NtUserSetWindowCompositionTransition @ 0x1401DE8F0 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x140218EF0 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelShutdown @ 0x140294400 (NtUserDwmKernelShutdown.c)
 *     NtUserFindExistingCursorIcon @ 0x140294EB0 (NtUserFindExistingCursorIcon.c)
 *     NtUserRegisterCoreMessagingEndPoint @ 0x14029AFA0 (NtUserRegisterCoreMessagingEndPoint.c)
 *     NtUserRegisterWindowMessage @ 0x14029B900 (NtUserRegisterWindowMessage.c)
 *     NtUserSetAutoRotation @ 0x14029C740 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1402A1860 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status, int a2)
{
  NTSTATUS v4; // ebx
  struct _NT_TIB *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  ULONG v9; // eax

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
  {
    v4 = 0;
    if ( Status < 0 )
      v4 = -1073741823;
  }
  else
  {
    v4 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process(v7, v6, v8);
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[200].Self) = Status;
    }
    if ( a2 )
    {
      v9 = RtlNtStatusToDosError(v4);
      return UserSetLastError(v9);
    }
  }
  return result;
}
