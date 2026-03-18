/*
 * XREFs of NVMeCompletionQueuesDedicatedSubmissionQueuesInit @ 0x14001C538
 * Callers:
 *     NVMeCleanUpSqCqMapping @ 0x14001BD1C (NVMeCleanUpSqCqMapping.c)
 *     NVMeCompletionQueueInit @ 0x14001C334 (NVMeCompletionQueueInit.c)
 * Callees:
 *     GetMaxDedicatedSqPerCqCount @ 0x140019FD4 (GetMaxDedicatedSqPerCqCount.c)
 */

__int64 __fastcall NVMeCompletionQueuesDedicatedSubmissionQueuesInit(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r10
  unsigned __int16 *v5; // r11
  __int16 MaxDedicatedSqPerCqCount; // r9
  __int64 result; // rax
  int v8; // ecx

  v4 = a2;
  v5 = a1;
  if ( a4 )
    *(_QWORD *)(a2 + 224) = a4;
  *(_QWORD *)(a2 + 212) = 0LL;
  if ( a1[166] )
  {
    *(_WORD *)(a2 + 232) = *(_QWORD *)(a2 + 224) != 0LL;
    MaxDedicatedSqPerCqCount = GetMaxDedicatedSqPerCqCount(a1);
    *(_WORD *)(v4 + 234) = MaxDedicatedSqPerCqCount;
  }
  else
  {
    MaxDedicatedSqPerCqCount = *(_WORD *)(a2 + 234);
  }
  result = 0xFFFFFFFFLL;
  if ( *(_WORD *)(v4 + 232) )
    v8 = *((_DWORD *)v5 + 1024);
  else
    v8 = -1;
  *(_DWORD *)(v4 + 236) = v8;
  if ( MaxDedicatedSqPerCqCount )
    result = *((unsigned int *)v5 + 1025);
  *(_DWORD *)(v4 + 240) = result;
  return result;
}
