/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x14099DFB0
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404D01C0 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     TtmiResetTerminalTimeouts @ 0x14076FD50 (TtmiResetTerminalTimeouts.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x14099E1A4 (TtmpAcquireSessionById.c)
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
