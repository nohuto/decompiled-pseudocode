/*
 * XREFs of RtlCopyExtendedContext @ 0x1405DE220
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x14025F9E0 (RtlpCopyExtendedContext.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  return RtlpCopyExtendedContext(1u, (__int64)Destination, 0LL, ContextFlags, (__int64)Source, 0LL);
}
