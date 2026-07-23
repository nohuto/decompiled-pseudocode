/*
 * XREFs of vDbgPrintEx @ 0x1801380F0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800EC740 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __cdecl vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((__int64)&Flags, ComponentId, Level, (__int64)Format, (__int64)arglist, 1);
}
