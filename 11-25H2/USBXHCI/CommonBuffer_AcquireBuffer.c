/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x140004238
 * Callers:
 *     XilCommonBuffer_AcquireBufferEx @ 0x140003EB4 (XilCommonBuffer_AcquireBufferEx.c)
 *     Control_Transfer_DetermineTransferMechanism @ 0x140003F00 (Control_Transfer_DetermineTransferMechanism.c)
 *     Control_MapTransfer @ 0x140004680 (Control_MapTransfer.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140043CE0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Crashdump_CommonBufferAcquire @ 0x1400507A4 (Crashdump_CommonBufferAcquire.c)
 *     XilCoreCommand_AllocateResources @ 0x140056C08 (XilCoreCommand_AllocateResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x140057108 (XilCoreDeviceSlot_AllocateResources.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x140004284 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x14000444C (CommonBuffer_QueueWorkItem.c)
 */

__int64 __fastcall CommonBuffer_AcquireBuffer(char *Context, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5 = XilCoreCommonBuffer_AcquireBuffer(Context + 88, a2, a3, a4, &v7);
  if ( v7 == 1 )
    CommonBuffer_QueueWorkItem(Context);
  return v5;
}
