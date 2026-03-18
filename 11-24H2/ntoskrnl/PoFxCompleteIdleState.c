/*
 * XREFs of PoFxCompleteIdleState @ 0x14044C090
 * Callers:
 *     DifPoFxCompleteIdleStateWrapper @ 0x140637250 (DifPoFxCompleteIdleStateWrapper.c)
 * Callees:
 *     PopPluginComponentIdleState @ 0x1403159F0 (PopPluginComponentIdleState.c)
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14044C130 (PopDiagTraceFxComponentIdleState.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall PoFxCompleteIdleState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8[18]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  memset_0(v8, 0, 0x40uLL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 872) + 8 * v2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 140), 0xFFFFFFFF) == 1 )
  {
    PopFxAddLogEntry(*(_QWORD *)(a1 + 48), v2, 14, 1LL);
    PopDiagTraceFxComponentIdleState(*(_QWORD *)(a1 + 48), (unsigned int)v2, *(unsigned int *)(v4 + 152));
    if ( PopPluginComponentIdleState(a1, v2, v5, v8) )
      PopFxProcessWork(0LL, v8, v6, v7);
  }
}
