/*
 * XREFs of UserSetLastStatus @ 0x1C0013298
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C0022CE0 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00232D0 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C0024010 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserConsoleControl @ 0x1C0042CD0 (NtUserConsoleControl.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0066280 (NtUserFindExistingCursorIcon.c)
 *     NtUserRegisterWindowMessage @ 0x1C00667D0 (NtUserRegisterWindowMessage.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C0081350 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0094360 (NtUserSetWindowCompositionTransition.c)
 *     NtUserOpenWindowStation @ 0x1C009B310 (NtUserOpenWindowStation.c)
 *     NtUserDwmKernelStartup @ 0x1C009EBA0 (NtUserDwmKernelStartup.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C01356A0 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01541B0 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserDwmKernelShutdown @ 0x1C01CE960 (NtUserDwmKernelShutdown.c)
 *     NtUserSetAutoRotation @ 0x1C01D9C70 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C01DEBA0 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01DEE20 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status, int a2)
{
  NTSTATUS v4; // ebx
  struct _NT_TIB *result; // rax
  ULONG v6; // eax

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
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process();
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[200].Self) = Status;
    }
    if ( a2 )
    {
      v6 = RtlNtStatusToDosError(v4);
      return (struct _NT_TIB *)UserSetLastError(v6);
    }
  }
  return result;
}
