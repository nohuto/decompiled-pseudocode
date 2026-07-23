/*
 * XREFs of NtContinue @ 0x14069F110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  return NtContinueEx(ContextRecord, (PVOID)TestAlert);
}
