/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x1800F93B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_1801CC8A8 == NtCurrentTeb()->ClientId.UniqueThread;
}
