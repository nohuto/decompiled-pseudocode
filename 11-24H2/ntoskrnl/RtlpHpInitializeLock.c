/*
 * XREFs of RtlpHpInitializeLock @ 0x1403D970C
 * Callers:
 *     RtlpHpLfhOwnerInitialize @ 0x1403D7EC4 (RtlpHpLfhOwnerInitialize.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x1403D8348 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpHeapCreate @ 0x14060234C (RtlpHpHeapCreate.c)
 *     RtlpHpFixedHeapCreate @ 0x140602C10 (RtlpHpFixedHeapCreate.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140602F30 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpSegContextInitialize @ 0x14060358C (RtlpHpSegContextInitialize.c)
 *     RtlpHpLfhBucketInitialize @ 0x140603ACC (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpVsSlotCreate @ 0x140604AFC (RtlpHpVsSlotCreate.c)
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
