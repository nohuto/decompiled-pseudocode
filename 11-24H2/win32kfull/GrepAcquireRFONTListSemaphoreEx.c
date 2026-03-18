/*
 * XREFs of GrepAcquireRFONTListSemaphoreEx @ 0x14015A630
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14015A684 (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GrepAcquireRFONTListSemaphoreEx(int a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 20352LL);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"RFONTList", v2, 0LL);
  return GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v2);
}
