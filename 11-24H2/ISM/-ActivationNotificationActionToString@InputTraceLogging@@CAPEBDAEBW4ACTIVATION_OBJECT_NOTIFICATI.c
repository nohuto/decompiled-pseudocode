/*
 * XREFs of ?ActivationNotificationActionToString@InputTraceLogging@@CAPEBDAEBW4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@@Z @ 0x1800AC96C
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManagerServer@InputTraceLogging@@SAXAEBU_tagActivationObjectNotification@@@Z @ 0x180023198 (-OnActivationObjectNotification@ForegroundManagerServer@InputTraceLogging@@SAXAEBU_tagActivation.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::ActivationNotificationActionToString(
        const enum ACTIVATION_OBJECT_NOTIFICATION_ACTION *a1)
{
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      return "Created";
    case 1:
      return "Destroyed";
    case 2:
      return "ForegroundGained";
    case 3:
      return "ForegroundLost";
    case 4:
      return "ForegroundRedirectionChanged";
  }
  return "UNKNOWN";
}
