/*
 * XREFs of ZwContinue @ 0x1406A7C10
 * Callers:
 *     RtlRestoreContext @ 0x1404FA460 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
