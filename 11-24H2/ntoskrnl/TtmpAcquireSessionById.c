/*
 * XREFs of TtmpAcquireSessionById @ 0x140903BF4
 * Callers:
 *     TtmNotifySessionPowerRequestDeleted @ 0x140769BB0 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiAcquireCurrentSession @ 0x140769DB0 (TtmiAcquireCurrentSession.c)
 *     TtmpInsertPowerRequestToSession @ 0x14076A838 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x14076B174 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmNotifyLowPowerStateExited @ 0x140902F78 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140902FF4 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140903084 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x140903874 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x140903A00 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140903D68 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409BAC8C (TtmNotifyConsoleUserPresent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionLock @ 0x1406F73C8 (TtmpAcquireSessionLock.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 *     TtmIsEnabled @ 0x1409BBDE8 (TtmIsEnabled.c)
 */

__int64 __fastcall TtmpAcquireSessionById(_QWORD *a1, int a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  *a1 = 0LL;
  if ( (unsigned __int8)TtmIsEnabled() )
  {
    TtmpAcquireSessionLock();
    if ( TtmpSession && *(_DWORD *)TtmpSession == a2 )
    {
      *a1 = TtmpSession;
    }
    else
    {
      v2 = -1073740715;
      TtmiLogError("TtmpAcquireSessionById", 1697, -1, -1073740715);
      ExReleaseResourceLite(&TtmpSessionLock);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById", 1686, -1, -1073741637);
  }
  return v2;
}
