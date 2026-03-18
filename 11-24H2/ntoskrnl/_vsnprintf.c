/*
 * XREFs of _vsnprintf @ 0x1404FD380
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1402CB420 (vDbgPrintExWithPrefixInternalHelper.c)
 *     KsepLogEtwMessage @ 0x14048E728 (KsepLogEtwMessage.c)
 *     RtlStringVPrintfWorkerA @ 0x14053A388 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x140595C68 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1404FD3A0 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
