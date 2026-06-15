/*
 * XREFs of ?RemoveAt@?$TList@VCKsNotificationsMonitor@@@@QEAAXPEAX@Z @ 0x180117650
 * Callers:
 *     ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180066260 (-KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall TList<CKsNotificationsMonitor>::RemoveAt(__int64 a1, __int64 *a2)
{
  if ( a2 == (__int64 *)g_lstKsNotificationMonitors )
    g_lstKsNotificationMonitors = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (__int64 *)qword_1801CF618 )
    qword_1801CF618 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  --dword_1801CF620;
  *a2 = 0LL;
  a2[1] = 0LL;
  return TItem<CKsNotificationsMonitor>::`scalar deleting destructor'(a2);
}
