/*
 * XREFs of ?GetNext@?$TList@VCKsNotificationsMonitor@@@@QEBAHAEAPEAXPEAPEAVCKsNotificationsMonitor@@@Z @ 0x1800651EC
 * Callers:
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180089860 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TList<CKsNotificationsMonitor>::GetNext(__int64 a1, _QWORD **a2, _QWORD *a3)
{
  _QWORD *v3; // rcx

  v3 = *a2;
  if ( !*a2 )
    return 0LL;
  *a2 = (_QWORD *)*v3;
  if ( a3 )
    *a3 = v3[2];
  return 1LL;
}
