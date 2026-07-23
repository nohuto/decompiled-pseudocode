/*
 * XREFs of ZwCallEnclave @ 0x1406A8610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallEnclave(PENCLAVE_ROUTINE Routine, PVOID Reserved, ULONG Flags, PVOID *RoutineParamReturn)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Routine);
}
