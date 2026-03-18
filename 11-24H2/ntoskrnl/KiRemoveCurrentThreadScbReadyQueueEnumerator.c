/*
 * XREFs of KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x14030E650
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiDetermineNextScbForScbReadyQueueEnumerator @ 0x140299AFC (KiDetermineNextScbForScbReadyQueueEnumerator.c)
 *     KiRemoveThreadFromScbQueue @ 0x14030D7C0 (KiRemoveThreadFromScbQueue.c)
 *     KiStartReadyListEnumerator @ 0x1404585A4 (KiStartReadyListEnumerator.c)
 */

unsigned __int8 __fastcall KiRemoveCurrentThreadScbReadyQueueEnumerator(__int64 a1)
{
  __int64 ScbForScbReadyQueueEnumerator; // rbx
  char v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int8 result; // al

  *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  ScbForScbReadyQueueEnumerator = KiDetermineNextScbForScbReadyQueueEnumerator(*(_QWORD **)(a1 + 8));
  result = KiRemoveThreadFromScbQueue(*(struct _KPRCB **)a1, v4, v5, v3);
  if ( result )
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
