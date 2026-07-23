/*
 * XREFs of RtlCheckForOrphanedCriticalSections @ 0x1800F4CE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckHeldCriticalSections @ 0x1800F4D10 (RtlCheckHeldCriticalSections.c)
 */

void __cdecl RtlCheckForOrphanedCriticalSections(HANDLE ThreadHandle)
{
  RtlCheckHeldCriticalSections(ThreadHandle);
}
