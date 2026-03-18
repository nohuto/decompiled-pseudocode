/*
 * XREFs of KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x1403521F4
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x140352968 (KiRemoveThreadFromScbQueue.c)
 *     KiDetermineNextScbForScbReadyQueueEnumerator @ 0x140353884 (KiDetermineNextScbForScbReadyQueueEnumerator.c)
 *     KiStartReadyListEnumerator @ 0x140353A68 (KiStartReadyListEnumerator.c)
 */

__int64 __fastcall KiRemoveCurrentThreadScbReadyQueueEnumerator(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 ScbForScbReadyQueueEnumerator; // rbx
  __int64 result; // rax

  v3 = *(unsigned __int8 *)(a1 + 20);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  *(_QWORD *)(a1 + 24) = v4;
  ScbForScbReadyQueueEnumerator = KiDetermineNextScbForScbReadyQueueEnumerator(*(_QWORD *)(a1 + 8), a2, v4, v3);
  result = KiRemoveThreadFromScbQueue(*(struct _KPRCB **)a1);
  if ( (_BYTE)result )
  {
    if ( ScbForScbReadyQueueEnumerator )
      result = KiStartReadyListEnumerator(
                 a1 + 16,
                 *(unsigned __int16 *)(ScbForScbReadyQueueEnumerator + 120),
                 ScbForScbReadyQueueEnumerator + 144);
    *(_QWORD *)(a1 + 8) = ScbForScbReadyQueueEnumerator;
  }
  return result;
}
