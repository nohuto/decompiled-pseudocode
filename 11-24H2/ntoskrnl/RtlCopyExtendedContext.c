/*
 * XREFs of RtlCopyExtendedContext @ 0x1405E78C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x1403D4F10 (RtlpCopyExtendedContext.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  return RtlpCopyExtendedContext(1u, (__int64)Destination, 0LL, ContextFlags, (__int64)Source, 0LL);
}
