/*
 * XREFs of RtlpCheckHeapSignature @ 0x180020320
 * Callers:
 *     RtlDebugAllocateHeap @ 0x18001F7A4 (RtlDebugAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x18001FFC0 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x180020100 (RtlValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800E66BC (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108FCC (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010C554 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugCompactHeap @ 0x18011CE28 (RtlDebugCompactHeap.c)
 *     RtlDebugWalkHeap @ 0x18011D210 (RtlDebugWalkHeap.c)
 *     RtlDebugDestroyHeap @ 0x18011D558 (RtlDebugDestroyHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180142DD4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180142EC8 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180142FC4 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlpBreakPointHeap @ 0x18000D5E4 (RtlpBreakPointHeap.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
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
