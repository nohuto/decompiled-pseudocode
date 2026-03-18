/*
 * XREFs of xxxPlayEventSound @ 0x1400A4F40
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 *     NtUserPlayEventSound @ 0x14029A350 (NtUserPlayEventSound.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z @ 0x1400A4F9C (-xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4) + 67056) & 0x1000000) != 0
    && (_InterlockedCompareExchange((volatile signed __int32 *)v3 + 132, 0, 0) & 4) == 0 )
  {
    CUserPlaySound::xxxPlaySoundAsynchronous(v2);
  }
  return 1LL;
}
