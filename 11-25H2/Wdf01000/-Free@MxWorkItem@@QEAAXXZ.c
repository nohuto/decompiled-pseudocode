/*
 * XREFs of ?Free@MxWorkItem@@QEAAXXZ @ 0x14004C4F8
 * Callers:
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x14004C058 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x14004C1B8 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??1FxThreadedEventQueue@@QEAA@XZ @ 0x14004C68C (--1FxThreadedEventQueue@@QEAA@XZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140077D68 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MxWorkItem::Free(MxWorkItem *this)
{
  struct _IO_WORKITEM *m_WorkItem; // rcx

  m_WorkItem = this->m_WorkItem;
  if ( m_WorkItem )
  {
    IoFreeWorkItem(m_WorkItem);
    this->m_WorkItem = 0LL;
  }
}
