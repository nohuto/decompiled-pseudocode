/*
 * XREFs of PopDeepSleepInitialize @ 0x140C305B0
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void (*__fastcall PopDeepSleepInitialize(int a1))()
{
  void (*result)(); // rax

  if ( a1 )
  {
    if ( a1 == 3 && !byte_140F0BB54 )
      PopDeepSleepDisengageReasonMask |= 2u;
  }
  else
  {
    result = PopDeepSleepEvaluateCallback;
    PopDeepSleepDisengageReasonMask = 65;
    PopDeepSleepEvaluateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDeepSleepEvaluateCallback;
    PopDeepSleepEvaluateWorkItem.Parameter = 0LL;
    PopDeepSleepEvaluateWorkItem.List.Flink = 0LL;
  }
  return result;
}
