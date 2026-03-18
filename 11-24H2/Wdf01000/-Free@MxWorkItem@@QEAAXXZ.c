/*
 * XREFs of ?Free@MxWorkItem@@QEAAXXZ @ 0x1400406D8
 * Callers:
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x140040238 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x140040398 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??1FxThreadedEventQueue@@QEAA@XZ @ 0x14004086C (--1FxThreadedEventQueue@@QEAA@XZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400775E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
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
