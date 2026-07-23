/*
 * XREFs of RtlCopyExtendedContext @ 0x180141DD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x180141DF0 (RtlpCopyExtendedContext.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  return RtlpCopyExtendedContext(
           (_DWORD)Destination,
           (_DWORD)Destination,
           (_DWORD)Source,
           ContextFlags,
           (__int64)Source);
}
