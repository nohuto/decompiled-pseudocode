/*
 * XREFs of RtlpHpInitializeLock @ 0x1402B5710
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x1402B5728 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhOwnerInitialize @ 0x1404C2244 (RtlpHpLfhOwnerInitialize.c)
 *     RtlpHpHeapCreate @ 0x140604D0C (RtlpHpHeapCreate.c)
 *     RtlpHpFixedHeapCreate @ 0x1406055D0 (RtlpHpFixedHeapCreate.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1406058F0 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpSegContextInitialize @ 0x140605F4C (RtlpHpSegContextInitialize.c)
 *     RtlpHpLfhBucketInitialize @ 0x14060648C (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpVsSlotCreate @ 0x1406074FC (RtlpHpVsSlotCreate.c)
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
