/*
 * XREFs of ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401DFCE4
 * Callers:
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     xxxRemoteDisconnect @ 0x1401DF3C8 (xxxRemoteDisconnect.c)
 *     FreeWindowStation @ 0x1401E89C0 (FreeWindowStation.c)
 *     xxxRemoteNotify @ 0x140212C80 (xxxRemoteNotify.c)
 *     WakeRITForShutdown @ 0x14021BE70 (WakeRITForShutdown.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x14022F338 (-TerminateDesktopThreads@@YAXXZ.c)
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 *     ?NumHandles@@YAKPEAX@Z @ 0x1402737D8 (-NumHandles@@YAKPEAX@Z.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x14028246C (-_LoadCursorsAndIcons@@YAHXZ.c)
 *     xxxDesktopThread @ 0x1402864A0 (xxxDesktopThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HYDRA_HINT(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = a1;
  result = W32GetUserSessionState(a1, a2);
  *(_DWORD *)(result + 69192) |= v2;
  return result;
}
