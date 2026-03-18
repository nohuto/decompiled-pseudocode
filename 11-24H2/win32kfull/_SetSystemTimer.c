/*
 * XREFs of _SetSystemTimer @ 0x140094830
 * Callers:
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1400946FC (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxFlashWindow @ 0x14024CA50 (xxxFlashWindow.c)
 *     xxxTrackMouseMove @ 0x140255AC4 (xxxTrackMouseMove.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x140257920 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetSystemTimer @ 0x14029EB80 (NtUserSetSystemTimer.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E2820 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x14005F804 (InternalSetTimer.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall SetSystemTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r8

  if ( a1 && (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    if ( a5 )
      return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    v11 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v11 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) )
      return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
    UserSetLastError(5);
  }
  return 0LL;
}
