/*
 * XREFs of RtlpCheckHeapSignature @ 0x1800933E0
 * Callers:
 *     RtlDebugAllocateHeap @ 0x180025BE0 (RtlDebugAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18002B9EC (RtlDebugReAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x180093080 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x1800931C0 (RtlValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x18009517C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800960DC (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180096590 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180110BBC (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugCompactHeap @ 0x1801204C8 (RtlDebugCompactHeap.c)
 *     RtlDebugWalkHeap @ 0x1801208B0 (RtlDebugWalkHeap.c)
 *     RtlDebugDestroyHeap @ 0x180120BF8 (RtlDebugDestroyHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180145F94 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180146088 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146184 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x18005A8C0 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCheckHeapSignature(_DWORD *a1, const char *a2)
{
  if ( a1[38] == -285217025 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", a1);
  if ( a2 )
    DbgPrint(", passed to %s", a2);
  DbgPrint("\n");
  RtlpBreakPointHeap();
  return 0;
}
