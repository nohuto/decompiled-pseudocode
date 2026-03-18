/*
 * XREFs of vDbgPrintExWithPrefix @ 0x1402CB150
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402CB374 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((_DWORD)Prefix, ComponentId, Level, (_DWORD)Format, arglist, 1);
}
