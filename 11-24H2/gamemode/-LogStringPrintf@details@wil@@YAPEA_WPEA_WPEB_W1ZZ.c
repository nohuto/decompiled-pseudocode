/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x18000560C
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x180004C24 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x180002E2C (_vsnwprintf.c)
 */

wchar_t *wil::details::LogStringPrintf(wil::details *this, wchar_t *a2, const wchar_t *a3, const wchar_t *a4, ...)
{
  unsigned __int64 v4; // rdi
  wchar_t *v6; // rbx
  size_t v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  const wchar_t *Args; // [rsp+78h] [rbp+20h] BYREF

  Args = a4;
  v4 = ((char *)a2 - (char *)this) >> 1;
  v6 = (wchar_t *)this;
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFF )
    {
      *(_WORD *)this = 0;
    }
    else
    {
      v7 = v4 - 1;
      v8 = vsnwprintf((wchar_t *)this, v7, a3, (va_list)&Args);
      if ( v8 < 0 || v8 >= v7 )
        v6[v7] = 0;
    }
  }
  if ( a2 != v6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v6[v9] );
    v6 += v9;
  }
  return v6;
}
