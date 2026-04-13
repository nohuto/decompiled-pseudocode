/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x180076400
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x180075F1C (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180076454 (-StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z.c)
 */

wchar_t *wil::details::LogStringPrintf(wchar_t *this, wchar_t *a2, const wchar_t *a3, const wchar_t *a4, ...)
{
  wchar_t *v5; // rdi
  __int64 v6; // rax
  const wchar_t *v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = a4;
  v5 = this;
  StringCchVPrintfW(this, a2 - this, a3, (char *)&v8);
  if ( a2 != v5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    v5 += v6;
  }
  return v5;
}
