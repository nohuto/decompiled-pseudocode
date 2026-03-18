/*
 * XREFs of ?InvokeClient@FxPnpDeviceSelfManagedIoCleanup@@MEAAJXZ @ 0x140078990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPnpDeviceSelfManagedIoCleanup::InvokeClient(FxPnpDeviceSelfManagedIoCleanup *this)
{
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax

  m_Method = this->m_Method;
  if ( m_Method )
    m_Method(this->m_Device);
  return 0LL;
}
