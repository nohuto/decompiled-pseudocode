/*
 * XREFs of NtUserUpdateDefaultDesktopThumbnail @ 0x1402A1860
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastStatus @ 0x14015E5E8 (UserSetLastStatus.c)
 *     DwmAsyncUpdateDefaultDesktopThumbnail @ 0x1403240C0 (DwmAsyncUpdateDefaultDesktopThumbnail.c)
 */

_BOOL8 __fastcall NtUserUpdateDefaultDesktopThumbnail(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // rdi
  BOOL v10; // ebx
  NTSTATUS updated; // eax
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  void *v16; // rax

  EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v9 = ValidateHwnd(a1);
    if ( !v9 )
    {
      v10 = 0;
      goto LABEL_16;
    }
  }
  else
  {
    v9 = 0LL;
  }
  v8 = MmUserProbeAddress;
  if ( !v9 || IsTopLevelWindow(v9) && (unsigned int)IsWindowDesktopComposed(v9) )
  {
    v12 = PtiCurrent(v8, v7);
    v8 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 62880);
    if ( *((_QWORD *)v12 + 62) == v8
      && (!v9 || (v8 = *(_QWORD *)(W32GetUserSessionState(v8, v15) + 62880), *(_QWORD *)(v9 + 24) == v8)) )
    {
      v16 = (void *)ReferenceDwmApiPort(v8, v15);
      updated = DwmAsyncUpdateDefaultDesktopThumbnail(v16, a4, a5);
    }
    else
    {
      updated = -1073741790;
    }
  }
  else
  {
    updated = -1073741816;
  }
  v10 = updated >= 0;
  if ( updated < 0 )
  {
    v10 = 0;
    UserSetLastStatus(updated, 1);
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
