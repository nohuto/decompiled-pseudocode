/*
 * XREFs of NVMeFreePool @ 0x14001DC5C
 * Callers:
 *     IoQueuesFreeResources @ 0x140007110 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x140007AD0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x140008210 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeRequestComplete @ 0x14000AAB0 (NVMeRequestComplete.c)
 *     AdminQueuesFreeResources @ 0x140017250 (AdminQueuesFreeResources.c)
 *     AdminQueueInitialize @ 0x140019CE4 (AdminQueueInitialize.c)
 *     IoQueuesInitialize @ 0x14001A6C8 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x14001ADD8 (IoReservedQueuesInitialize.c)
 *     IoctlDeleteReservedQueuePair @ 0x1400208C0 (IoctlDeleteReservedQueuePair.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x14002BB3C (NVMeReservedSubmissionQueueCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreePool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a2 )
    return StorPortExtendedFunction(1LL, a1, a2, a4);
  return result;
}
