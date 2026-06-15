/*
 * XREFs of ?AddTail@?$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z @ 0x180116764
 * Callers:
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x18008E130 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall TList<CKsNotificationsMonitor>::AddTail(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v3 = operator new(0x18uLL);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  *v3 = 0LL;
  v3[1] = 0LL;
  v3[2] = a2;
  v3[1] = qword_1801CF618;
  *v3 = 0LL;
  if ( qword_1801CF618 )
    *(_QWORD *)qword_1801CF618 = v3;
  else
    g_lstKsNotificationMonitors = (__int64)v3;
  ++dword_1801CF620;
  qword_1801CF618 = (__int64)v3;
  return v4;
}
