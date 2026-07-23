/*
 * XREFs of PopFxCompleteComponentPerfState @ 0x1404B149C
 * Callers:
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B168C (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxComponentPerfWork @ 0x1405CE0C0 (PopFxComponentPerfWork.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1404B15A0 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404B18C4 (PopDiagTraceFxPerfRequestProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxCompleteComponentPerfState(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int v8; // ebx
  __int64 i; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx

  v8 = _InterlockedDecrement((volatile signed __int32 *)(a3 + 40));
  for ( i = 0LL;
        (unsigned int)i < *(_DWORD *)(a3 + 56);
        *(_QWORD *)(v11 + 8) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v10 + 8) )
  {
    v10 = (unsigned int)i;
    i = (unsigned int)(i + 1);
    v10 *= 2LL;
    v11 = *(_QWORD *)(a3 + 152) + 32LL * *(unsigned int *)(*(_QWORD *)(a3 + 48) + 8 * v10);
    *(_QWORD *)(v11 + 16) = *(_QWORD *)(a3 + 64);
    *(_BYTE *)(v11 + 24) = 0;
  }
  PopDiagTraceFxPerfRequestProgress(a3, v8 & 7, i);
  if ( v8 >= 0 )
  {
    v8 = _InterlockedDecrement((volatile signed __int32 *)(a3 + 40));
    if ( (v8 & 0x8000000) == 0 )
      PopFxAddLogEntry(*(_QWORD *)(a1 + 48), a2, 15, 1LL);
  }
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 192), a2);
  if ( v8 < 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 40));
    KeSetEvent((PRKEVENT)(a3 + 8), 0, 0);
  }
  LOBYTE(v12) = a4;
  return PopDiagTraceFxPerfRequestComplete(a3, v12);
}
