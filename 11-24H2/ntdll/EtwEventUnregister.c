/*
 * XREFs of EtwEventUnregister @ 0x1800F7C20
 * Callers:
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180131698 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x180131740 (LdrpAppxEtwIntegrityFailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwEventUnregister(__int64 a1)
{
  return EtwNotificationUnregister(a1, 0LL);
}
