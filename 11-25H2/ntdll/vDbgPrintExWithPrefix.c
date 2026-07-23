/*
 * XREFs of vDbgPrintExWithPrefix @ 0x180138120
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800EC740 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __cdecl vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((__int64)Prefix, ComponentId, Level, (__int64)Format, (__int64)arglist, 1);
}
