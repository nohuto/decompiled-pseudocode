/*
 * XREFs of _vsnprintf @ 0x1404FAC40
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140275C70 (vDbgPrintExWithPrefixInternalHelper.c)
 *     KsepLogEtwMessage @ 0x140488B58 (KsepLogEtwMessage.c)
 *     RtlStringVPrintfWorkerA @ 0x140537BC8 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x140592C98 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1404FAC60 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
