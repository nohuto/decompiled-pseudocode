/*
 * XREFs of RtlStringCbPrintfW @ 0x18011EF2C
 * Callers:
 *     LdrpLogEtwHotPatchStatus @ 0x18006F018 (LdrpLogEtwHotPatchStatus.c)
 *     RtlQueryProcessHeapInformation @ 0x18009A090 (RtlQueryProcessHeapInformation.c)
 *     RtlpGetTagName @ 0x18011B880 (RtlpGetTagName.c)
 * Callees:
 *     _vsnwprintf @ 0x180124640 (_vsnwprintf.c)
 */

__int64 RtlStringCbPrintfW(wchar_t *a1, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v3; // rdx
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(a1, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      v5 = -2147483643;
    }
    else if ( v7 != v6 )
    {
      return v5;
    }
    a1[v6] = 0;
  }
  else
  {
    v5 = -1073741811;
    if ( v3 )
      *a1 = 0;
  }
  return v5;
}
