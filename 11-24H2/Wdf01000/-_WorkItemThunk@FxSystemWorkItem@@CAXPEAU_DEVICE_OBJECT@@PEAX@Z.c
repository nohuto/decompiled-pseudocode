/*
 * XREFs of ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x14005B710
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x14005B758 (-WorkItemHandler@FxSystemWorkItem@@AEAAXXZ.c)
 */

void __fastcall FxSystemWorkItem::_WorkItemThunk(_DEVICE_OBJECT *DeviceObject, FxSystemWorkItem *Context)
{
  FxSystemWorkItem::WorkItemHandler(Context);
  if ( _InterlockedExchangeAdd(&Context->m_OutStandingWorkItem, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Context->m_RemoveEvent.m_Event.m_Event, 0, 0);
}
