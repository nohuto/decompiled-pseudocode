/*
 * XREFs of PoFxCompleteIdleState @ 0x14044CB70
 * Callers:
 *     DifPoFxCompleteIdleStateWrapper @ 0x14062B290 (DifPoFxCompleteIdleStateWrapper.c)
 * Callees:
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopPluginComponentIdleState @ 0x140357BF0 (PopPluginComponentIdleState.c)
 *     PopFxAddLogEntry @ 0x140359640 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14044CC10 (PopDiagTraceFxComponentIdleState.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall PoFxCompleteIdleState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned int v6[18]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  memset_0(v6, 0, 0x40uLL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 872) + 8 * v2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 140), 0xFFFFFFFF) == 1 )
  {
    PopFxAddLogEntry(*(_QWORD *)(a1 + 48), v2, 14, 1LL);
    PopDiagTraceFxComponentIdleState(*(_QWORD *)(a1 + 48), (unsigned int)v2, *(unsigned int *)(v4 + 152));
    if ( PopPluginComponentIdleState(a1, v2, v5, v6) )
      PopFxProcessWork(0LL, v6);
  }
}
