/*
 * XREFs of EtwEventUnregister @ 0x1800F97B0
 * Callers:
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180133178 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x180133220 (LdrpAppxEtwIntegrityFailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwEventUnregister(__int64 a1)
{
  return EtwNotificationUnregister(a1, 0LL);
}
