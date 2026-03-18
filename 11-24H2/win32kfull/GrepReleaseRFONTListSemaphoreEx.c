/*
 * XREFs of GrepReleaseRFONTListSemaphoreEx @ 0x140156AB0
 * Callers:
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BBF8C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140156AE4 (--$GreReleaseSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GrepReleaseRFONTListSemaphoreEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1, a2, a3);
  return GreReleaseSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(
           GreReleaseSemaphoreExclusiveInternal,
           *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 20352LL));
}
