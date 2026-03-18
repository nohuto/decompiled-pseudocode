/*
 * XREFs of ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x140043F60
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x140043B58 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x140043D6C (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ?Initialize@FxSystemWorkItem@@AEAAJPEAX@Z @ 0x140043F00 (-Initialize@FxSystemWorkItem@@AEAAJPEAX@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400775E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxWorkItem::Allocate(MxWorkItem *this, _DEVICE_OBJECT *DeviceObject, void *a3)
{
  struct _IO_WORKITEM *WorkItem; // rax
  unsigned int v5; // ecx

  WorkItem = IoAllocateWorkItem(DeviceObject);
  v5 = 0;
  this->m_WorkItem = WorkItem;
  if ( !WorkItem )
    return (unsigned int)-1073741670;
  return v5;
}
