/*
 * XREFs of ?_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x140271680
 * Callers:
 *     <none>
 * Callees:
 *     ??_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z @ 0x14009028C (--_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?MarkWorkItemFinished@USB4_POWERON_WORK_QUEUE@@QEAAXXZ @ 0x140270FC0 (-MarkWorkItemFinished@USB4_POWERON_WORK_QUEUE@@QEAAXXZ.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1402716D8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 */

void __fastcall USB4_POWERON_WORK_QUEUE::_HandlePowerOn(
        USB4_POWERON_WORK_QUEUE *IoObject,
        struct USB4_POWERON_WORK_CONTEXT *Context,
        PIO_WORKITEM IoWorkItem)
{
  USB4_POWERON_WORK_QUEUE *v3; // rbx

  v3 = *(USB4_POWERON_WORK_QUEUE **)Context;
  USB4_POWERON_WORK_QUEUE::_HandlePowerOnInternal(IoObject, Context);
  USB4_POWERON_WORK_QUEUE::MarkWorkItemFinished(v3);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  USB4_POWERON_WORK_CONTEXT::`scalar deleting destructor'(Context);
}
