/*
 * XREFs of RtlpCheckHeapSignature @ 0x18003F9F0
 * Callers:
 *     RtlDebugSizeHeap @ 0x18003F690 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x18003F7D0 (RtlValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x18004178C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800426EC (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800428AC (RtlDebugSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x18009CC30 (RtlDebugAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800A2A3C (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x18010E0EC (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugCompactHeap @ 0x18011EBF8 (RtlDebugCompactHeap.c)
 *     RtlDebugWalkHeap @ 0x18011EFE0 (RtlDebugWalkHeap.c)
 *     RtlDebugDestroyHeap @ 0x18011F328 (RtlDebugDestroyHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180144A24 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180144B18 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180144C14 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180031DF0 (RtlpBreakPointHeap.c)
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
