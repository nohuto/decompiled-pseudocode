/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x14001F318
 * Callers:
 *     XilCommonBuffer_AcquireBufferEx @ 0x14001DE44 (XilCommonBuffer_AcquireBufferEx.c)
 *     Control_MapTransfer @ 0x14001DEC0 (Control_MapTransfer.c)
 *     Control_Transfer_DetermineTransferMechanism @ 0x14001EFE0 (Control_Transfer_DetermineTransferMechanism.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140043830 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Crashdump_CommonBufferAcquire @ 0x14004FE44 (Crashdump_CommonBufferAcquire.c)
 *     XilCoreCommand_AllocateResources @ 0x140056068 (XilCoreCommand_AllocateResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x140056528 (XilCoreDeviceSlot_AllocateResources.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x14001F364 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x14001F51C (CommonBuffer_QueueWorkItem.c)
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
