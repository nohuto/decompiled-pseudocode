/*
 * XREFs of ?MonitorInterfaceCallbackInternal@CMonitorPDO@OPM@@AEAAJPEBU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x14008B5D0
 * Callers:
 *     ?MonitorInterfaceCallback@CMonitorPDO@OPM@@CAJPEAX0@Z @ 0x14008B5B0 (-MonitorInterfaceCallback@CMonitorPDO@OPM@@CAJPEAX0@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

__int64 __fastcall OPM::CMonitorPDO::MonitorInterfaceCallbackInternal(
        OPM::CMonitorPDO *this,
        const struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *a2)
{
  GUID *p_Event; // rdx
  __int64 v5; // r8
  OPM::CMutex *v7; // rbx
  bool v8; // si

  p_Event = &a2->Event;
  v5 = *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 - *(_QWORD *)&p_Event->Data1;
  if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 == *(_QWORD *)&p_Event->Data1 )
    v5 = *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4 - *(_QWORD *)p_Event->Data4;
  if ( v5 )
  {
    memcmp(&GUID_DEVICE_INTERFACE_ARRIVAL, p_Event, 0x10uLL);
  }
  else
  {
    v7 = (OPM::CMutex *)*((_QWORD *)this + 1);
    v8 = 0;
    OPM::CMutex::Lock(v7);
    if ( *((_QWORD *)this + 4) )
      v8 = RtlCompareUnicodeString((PCUNICODE_STRING)((char *)this + 24), a2->SymbolicLinkName, 0) == 0;
    OPM::CMutex::Unlock(v7);
    if ( v8 )
      (*(void (__fastcall **)(OPM::CMonitorPDO *))(*(_QWORD *)this + 8LL))(this);
  }
  return 0LL;
}
