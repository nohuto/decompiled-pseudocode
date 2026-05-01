/*
 * XREFs of CrmStateMonitorTrackedStateNotificationMethod @ 0x18002E0B0
 * Callers:
 *     CrmActivityStart @ 0x18002D920 (CrmActivityStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorTrackedStateNotificationMethod(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 23:
    case 26:
    case 27:
    case 28:
    case 30:
    case 31:
    case 32:
    case 33:
    case 35:
    case 37:
    case 42:
      result = 0LL;
      break;
    default:
      result = 1LL;
      break;
  }
  return result;
}
