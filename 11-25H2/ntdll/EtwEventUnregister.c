/*
 * XREFs of EtwEventUnregister @ 0x1800F97B0
 * Callers:
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180133178 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x180133220 (LdrpAppxEtwIntegrityFailure.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl EtwEventUnregister(REGHANDLE RegHandle)
{
  return EtwNotificationUnregister(RegHandle, 0LL);
}
