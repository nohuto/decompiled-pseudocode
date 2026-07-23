/*
 * XREFs of RtlIsCriticalSectionLockedByThread @ 0x1800DF280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlIsCriticalSectionLockedByThread(PRTL_CRITICAL_SECTION CriticalSection)
{
  return CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
