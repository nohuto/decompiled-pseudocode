/*
 * XREFs of PopSetSystemAwayMode @ 0x140747CD0
 * Callers:
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     PopAcquireUserPresentSpinLock @ 0x1404A3E28 (PopAcquireUserPresentSpinLock.c)
 *     PopReleaseUserPresentSpinLock @ 0x1404ABF50 (PopReleaseUserPresentSpinLock.c)
 *     PopSetAwayModeStatus @ 0x140747C54 (PopSetAwayModeStatus.c)
 *     PopNotifyConsoleUserPresent @ 0x1409638B0 (PopNotifyConsoleUserPresent.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( a1 )
  {
    if ( !byte_140F0B711 )
    {
      if ( byte_140F0B710 )
      {
        PopAcquireUserPresentSpinLock(&v3);
        KeResetEvent(&PopUserPresentCompletedEvent);
        dword_140F0B714 = 1;
        if ( PopUserPresentSetStatus )
        {
          PopReleaseUserPresentSpinLock(v3);
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        }
        else
        {
          PopReleaseUserPresentSpinLock(v3);
        }
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_140F0B714);
        KiSetTimerEx(
          (__int64)&PopAwayModeUserPresenceTimer,
          -30000000LL,
          0,
          0,
          (__int64)&PopAwayModeUserPresenceDpcObject);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_AWAYMODE);
        PopSetAwayModeStatus(1);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else if ( byte_140F0B711 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0LL, (unsigned int)PopAwaymodeExitReason);
  }
  return v1;
}
