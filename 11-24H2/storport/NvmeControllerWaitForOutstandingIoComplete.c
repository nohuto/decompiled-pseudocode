/*
 * XREFs of NvmeControllerWaitForOutstandingIoComplete @ 0x1400F5D14
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     NvmeControllerIoQueuesDeletion @ 0x1400F1250 (NvmeControllerIoQueuesDeletion.c)
 *     NvmeControllerSendNonReadWriteCommand @ 0x140129D10 (NvmeControllerSendNonReadWriteCommand.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019C384 (NvmeAdapterStopDeviceIrp.c)
 * Callees:
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     NvmeControllerIsOutstandingRequest @ 0x1400DB950 (NvmeControllerIsOutstandingRequest.c)
 */

char __fastcall NvmeControllerWaitForOutstandingIoComplete(__int64 a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  ULONG v5; // ebx
  char v6; // di

  v2 = 0;
  v4 = 1000000 * a2;
  v5 = 1000;
  while ( 1 )
  {
    v6 = 1;
    if ( !NvmeControllerIsOutstandingRequest(a1) )
      break;
    StorDelayExecution(v5);
    v2 += v5;
    if ( v4 && v2 >= v4 )
      return 0;
    if ( v5 < 0x186A0 )
    {
      v5 *= 2;
      if ( v5 >= 0x186A0 )
        v5 = 100000;
    }
  }
  return v6;
}
