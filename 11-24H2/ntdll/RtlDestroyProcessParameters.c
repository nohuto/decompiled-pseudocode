/*
 * XREFs of RtlDestroyProcessParameters @ 0x1800F6550
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDestroyProcessParameters(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ProcessParameters);
  return 0;
}
