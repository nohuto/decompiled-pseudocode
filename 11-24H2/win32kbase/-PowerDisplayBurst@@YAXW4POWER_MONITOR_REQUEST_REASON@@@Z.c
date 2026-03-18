/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401ADF6C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 * Callees:
 *     QueuePowerRequest @ 0x1400E98F0 (QueuePowerRequest.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PowerDisplayBurst@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401AE098 (-PowerDisplayBurst@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

void __fastcall PowerDisplayBurst(enum POWER_MONITOR_REQUEST_REASON a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 UserSessionState; // rdi
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v1 = a1;
  v4 = 0uLL;
  v6 = 0;
  InputTraceLogging::Power::PowerDisplayBurst(a1);
  UserSessionState = W32GetUserSessionState(v2);
  switch ( (_DWORD)v1 )
  {
    case 6:
      *(_QWORD *)(UserSessionState + 2864) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 5:
    case 0x10:
      *(_QWORD *)(UserSessionState + 2872) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 0x19:
      *(_QWORD *)(UserSessionState + 2880) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1508);
      break;
  }
  if ( !*(_DWORD *)(UserSessionState + 2760) )
  {
    v5 = 4;
    v7 = v1;
    QueuePowerRequest(&v4, 0);
  }
}
