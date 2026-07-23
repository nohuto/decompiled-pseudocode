/*
 * XREFs of RtlStringCchPrintfW @ 0x180081F4C
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x18007FBD0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x180145198 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x180145300 (RtlpEtcIsValidFeatureId.c)
 * Callees:
 *     _vsnwprintf @ 0x180120D90 (_vsnwprintf.c)
 */

__int64 RtlStringCchPrintfW(wchar_t *a1, __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147483643;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    a1[v4] = 0;
  }
  return v5;
}
