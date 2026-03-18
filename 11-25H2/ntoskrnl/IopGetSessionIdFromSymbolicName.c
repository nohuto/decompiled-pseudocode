/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x1406ED544
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x140967900 (PiUEventProcessBroadcastNotifications.c)
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14096CC3C (PnpNotifyDeviceClassChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IopGetSessionIdFromPDO @ 0x1409A1C44 (IopGetSessionIdFromPDO.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140AB8AB0 (IopDeviceObjectFromSymbolicName.c)
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
