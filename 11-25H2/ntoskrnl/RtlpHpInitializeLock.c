/*
 * XREFs of RtlpHpInitializeLock @ 0x1402F78D4
 * Callers:
 *     RtlpHpLfhOwnerInitialize @ 0x1402F7060 (RtlpHpLfhOwnerInitialize.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x1402F7508 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpHeapCreate @ 0x1405F89CC (RtlpHpHeapCreate.c)
 *     RtlpHpFixedHeapCreate @ 0x1405F9290 (RtlpHpFixedHeapCreate.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1405F95B0 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpSegContextInitialize @ 0x1405F9C0C (RtlpHpSegContextInitialize.c)
 *     RtlpHpLfhBucketInitialize @ 0x1405FA14C (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpVsSlotCreate @ 0x1405FB1BC (RtlpHpVsSlotCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpInitializeLock(_QWORD *a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
    result = 0LL;
  *a1 = 0LL;
  return result;
}
