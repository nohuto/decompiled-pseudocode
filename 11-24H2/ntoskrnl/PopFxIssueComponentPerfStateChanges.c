/*
 * XREFs of PopFxIssueComponentPerfStateChanges @ 0x1404B168C
 * Callers:
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x1405CD980 (PoFxIssueComponentPerfStateChangeMultiple.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     PopFxQueueWorkOrder @ 0x1403AA1E0 (PopFxQueueWorkOrder.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B149C (PopFxCompleteComponentPerfState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404B18C4 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopPluginRequestComponentPerfState @ 0x1404B19A4 (PopPluginRequestComponentPerfState.c)
 *     PopDiagTraceFxPerfRequest @ 0x1404B1A24 (PopDiagTraceFxPerfRequest.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

NTSTATUS __fastcall PopFxIssueComponentPerfStateChanges(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        unsigned int a4,
        void *Src,
        __int64 a6)
{
  __int64 v10; // rbx
  int v11; // r15d
  __int64 v12; // r8
  char v13; // r13
  int v14; // r14d
  char v15; // r12
  int v16; // r13d
  unsigned int *v17; // rsi
  unsigned int v18; // edx
  char v19; // cl
  __int64 v21; // r9
  signed __int32 v22[8]; // [rsp+0h] [rbp-68h] BYREF
  char v23; // [rsp+78h] [rbp+10h] BYREF

  KeGetCurrentIrql();
  v10 = *(_QWORD *)(a2 + 424);
  if ( !v10 )
    PopFxBugCheck(0x61BuLL, *(_QWORD *)(BugCheckParameter2 + 64), BugCheckParameter2, *(unsigned int *)(a2 + 16));
  v11 = *(_DWORD *)(*(_QWORD *)v10 + 16LL);
  if ( a4 > *(_DWORD *)(v10 + 144) )
    PopFxBugCheck(0x61CuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), 0LL);
  if ( (_InterlockedExchange((volatile __int32 *)(v10 + 40), 0) & 7) != 0 )
    PopFxBugCheck(0x61DuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), *(_QWORD *)(v10 + 80));
  if ( *(_BYTE *)(v10 + 74) )
  {
    memmove(*(void **)(v10 + 48), Src, 16LL * a4);
    *(_DWORD *)(v10 + 56) = a4;
    *(_BYTE *)(v10 + 72) = 0;
    *(_QWORD *)(v10 + 64) = MEMORY[0xFFFFF78000000008];
  }
  *(_QWORD *)(v10 + 80) = a6;
  KeResetEvent((PRKEVENT)(v10 + 8));
  PopDiagTraceFxPerfRequest(v10, a4, Src);
  v13 = a3;
  v14 = a3 & 2;
  v15 = 1;
  v16 = v13 & 1;
  if ( v16 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x88000000);
  }
  else if ( v14 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x10000000u);
  }
  _InterlockedAdd((volatile signed __int32 *)(v10 + 40), 4u);
  _InterlockedOr(v22, 0);
  v17 = (unsigned int *)(a2 + 16);
  if ( *(_BYTE *)(v10 + 73) )
  {
    v18 = *v17;
    v23 = 0;
    v15 = PopPluginRequestComponentPerfState(BugCheckParameter2, v18, a4, (_DWORD)Src, (__int64)&v23);
    if ( !v15 )
      goto LABEL_18;
    v19 = v23;
  }
  else
  {
    v19 = 1;
    v23 = 1;
  }
  _InterlockedOr((volatile signed __int32 *)(v10 + 40), v19 != 0 ? 1610612736 : 0x20000000);
  _InterlockedDecrement((volatile signed __int32 *)(v10 + 40));
LABEL_18:
  PopDiagTraceFxPerfRequestProgress(
    v10,
    ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 0xFFFFFFFF) - 1) & 7,
    v12);
  if ( v15 )
  {
    if ( v14 )
    {
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
      return PopFxQueueWorkOrder(v10 + 88, BugCheckParameter2);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x80000000);
      return PopFxCompleteComponentPerfState(BugCheckParameter2, *v17, v10, v23);
    }
  }
  else if ( v16 )
  {
    return KeWaitForSingleObject((PVOID)(v10 + 8), Executive, 0, 0, 0LL);
  }
  else
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
    return (unsigned int)PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, (unsigned __int8)v21 + 20, v21);
  }
}
