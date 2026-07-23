/*
 * XREFs of RtlDestroyProcessParameters @ 0x1800FD850
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDestroyProcessParameters(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ProcessParameters);
  return 0;
}
