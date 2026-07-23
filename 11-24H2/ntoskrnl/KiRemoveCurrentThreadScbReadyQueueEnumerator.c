/*
 * XREFs of KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x1402D8A9C
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiDetermineNextScbForScbReadyQueueEnumerator @ 0x1402A85EC (KiDetermineNextScbForScbReadyQueueEnumerator.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402D8F60 (KiRemoveThreadFromScbQueue.c)
 *     KiStartReadyListEnumerator @ 0x14044DA54 (KiStartReadyListEnumerator.c)
 */

__int64 __fastcall KiRemoveCurrentThreadScbReadyQueueEnumerator(__int64 a1)
{
  __int64 ScbForScbReadyQueueEnumerator; // rbx
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  ScbForScbReadyQueueEnumerator = KiDetermineNextScbForScbReadyQueueEnumerator(*(_QWORD **)(a1 + 8));
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
