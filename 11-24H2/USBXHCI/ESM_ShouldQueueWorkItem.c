/*
 * XREFs of ESM_ShouldQueueWorkItem @ 0x140029B80
 * Callers:
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x140007160 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 * Callees:
 *     Controller_IsRunningWithIrqlRaisedAndTracked @ 0x140040D38 (Controller_IsRunningWithIrqlRaisedAndTracked.c)
 */

char __fastcall ESM_ShouldQueueWorkItem(__int64 a1, char a2)
{
  _QWORD *v2; // r14
  char v5; // bl

  v2 = *(_QWORD **)(a1 + 960);
  v5 = 0;
  if ( KeGetCurrentIrql()
    && (a2 || *(_BYTE *)(a1 + 1018) && !(unsigned __int8)Controller_IsRunningWithIrqlRaisedAndTracked(*v2)) )
  {
    return 1;
  }
  return v5;
}
