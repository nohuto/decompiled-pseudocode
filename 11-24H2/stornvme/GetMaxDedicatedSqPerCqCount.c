/*
 * XREFs of GetMaxDedicatedSqPerCqCount @ 0x140019FD4
 * Callers:
 *     IoQueuesInitialize @ 0x14001A6C8 (IoQueuesInitialize.c)
 *     NVMeCleanUpSqCqMapping @ 0x14001BD1C (NVMeCleanUpSqCqMapping.c)
 *     NVMeCompletionQueuesDedicatedSubmissionQueuesInit @ 0x14001C538 (NVMeCompletionQueuesDedicatedSubmissionQueuesInit.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall GetMaxDedicatedSqPerCqCount(unsigned __int16 *a1)
{
  int v1; // edx
  __int16 result; // ax
  int v3; // r8d

  v1 = a1[165];
  result = 0;
  v3 = a1[117];
  if ( (unsigned __int16)v1 > (unsigned __int16)v3 )
    return (v1 - v3 - 1) / a1[166] + 1;
  return result;
}
