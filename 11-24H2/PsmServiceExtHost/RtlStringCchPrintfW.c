/*
 * XREFs of RtlStringCchPrintfW @ 0x180092004
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x180099DDC (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString @ 0x18009E170 (AslGuidToString.c)
 *     AslGuidToString_UStr @ 0x18009E24C (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x1800A3300 (AslpFileQueryVersionString.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x180092050 (RtlStringVPrintfWorkerW.c)
 */

__int64 RtlStringCchPrintfW(_WORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(a1, a2, a3, a3, (__int64 *)va);
  result = 3221225485LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
