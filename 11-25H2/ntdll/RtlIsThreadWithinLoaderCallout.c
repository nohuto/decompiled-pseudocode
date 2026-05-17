/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x1800FAFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_1801CE8A8 == NtCurrentTeb()->ClientId.UniqueThread;
}
