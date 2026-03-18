/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x140903A00
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404D6D70 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     TtmiResetTerminalTimeouts @ 0x14076FB30 (TtmiResetTerminalTimeouts.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x140903BF4 (TtmpAcquireSessionById.c)
 */

__int64 __fastcall TtmNotifySessionDisplayBurst(unsigned int a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = TtmpAcquireSessionById(&v7, a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( a2 == 5 )
    {
      v5 = 1111769921;
    }
    else
    {
      v5 = 1111778643;
      if ( a2 == 16 )
        v5 = 1111769922;
    }
    TtmiResetTerminalTimeouts(v7, *(_QWORD *)(v7 + 32), a2, v5, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    return 0;
  }
  else
  {
    TtmiLogError("TtmNotifySessionDisplayBurst", 3243LL, (unsigned int)v3, (unsigned int)v3);
  }
  return v4;
}
