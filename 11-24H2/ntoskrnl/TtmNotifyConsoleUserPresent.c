/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x1409BAC8C
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1409BB660 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     TtmiResetTerminalTimeouts @ 0x14076FB30 (TtmiResetTerminalTimeouts.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x140903BF4 (TtmpAcquireSessionById.c)
 *     TtmiLogConsoleUserPresent @ 0x140AC15A8 (TtmiLogConsoleUserPresent.c)
 */

__int64 __fastcall TtmNotifyConsoleUserPresent(unsigned int a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = TtmpAcquireSessionById(&v7, a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    TtmiResetTerminalTimeouts(v7, *(_QWORD *)(v7 + 32), a2, 1347765070, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyConsoleUserPresent", 3299, v4, -1);
  }
  return TtmiLogConsoleUserPresent(a1, a2, v5);
}
