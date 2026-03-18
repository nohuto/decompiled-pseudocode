/*
 * XREFs of PopFxCompleteComponentActivation @ 0x14034C328
 * Callers:
 *     PopFxIdleWorkerTail @ 0x1403492B0 (PopFxIdleWorkerTail.c)
 *     PopFxActivateComponentWorker @ 0x140349BD0 (PopFxActivateComponentWorker.c)
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PopFxIdleComponent @ 0x14034C3F8 (PopFxIdleComponent.c)
 *     PopFxActivateComponentDependents @ 0x14034C650 (PopFxActivateComponentDependents.c)
 */

LONG __fastcall PopFxCompleteComponentActivation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  LONG result; // eax

  _InterlockedOr((volatile signed __int32 *)(a2 + 88), 0x80000000);
  KeSetEvent((PRKEVENT)(a2 + 104), 0, 0);
  if ( a3 )
    PopFxActivateComponentDependents(a2);
  PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(a2 + 16));
  _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 304));
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 248), 0, 0);
  return result;
}
