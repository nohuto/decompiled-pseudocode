/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x1406F9184
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x14085C13C (PiUEventProcessBroadcastNotifications.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EE72C (PnpNotifyDeviceClassChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IopGetSessionIdFromPDO @ 0x140A11704 (IopGetSessionIdFromPDO.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140ABCB94 (IopDeviceObjectFromSymbolicName.c)
 */

__int64 IopGetSessionIdFromSymbolicName()
{
  unsigned int SessionIdFromPDO; // edi
  __int64 v1; // rax
  void *v2; // rbx
  __int64 v3; // rax

  SessionIdFromPDO = -1;
  v1 = IopDeviceObjectFromSymbolicName();
  v2 = (void *)v1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 396) & 0x20000) == 0 )
      {
        SessionIdFromPDO = IopGetSessionIdFromPDO(v2);
        ObfDereferenceObject(v2);
      }
    }
  }
  return SessionIdFromPDO;
}
