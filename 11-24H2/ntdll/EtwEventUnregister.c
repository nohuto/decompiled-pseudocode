/*
 * XREFs of EtwEventUnregister @ 0x1800F2790
 * Callers:
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x18012F8C8 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x18012F970 (LdrpAppxEtwIntegrityFailure.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl EtwEventUnregister(REGHANDLE RegHandle)
{
  return EtwNotificationUnregister(RegHandle, 0LL);
}
