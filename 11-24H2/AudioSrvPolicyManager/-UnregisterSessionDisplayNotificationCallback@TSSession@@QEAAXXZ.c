/*
 * XREFs of ?UnregisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x180040B34
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x18003D610 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x18003FC50 (-TsSessionIdLogoff@@YAJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TSSession::UnregisterSessionDisplayNotificationCallback(TSSession *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 128);
  if ( v2 )
  {
    PowerSettingUnregisterNotification(v2);
    *((_QWORD *)this + 128) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 129);
  if ( v3 )
  {
    PowerSettingUnregisterNotification(v3);
    *((_QWORD *)this + 129) = 0LL;
  }
  *((_DWORD *)this + 253) = 1;
}
