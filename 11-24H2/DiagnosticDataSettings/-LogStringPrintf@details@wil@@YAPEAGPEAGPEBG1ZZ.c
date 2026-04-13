/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18000318C
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800029F8 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x180002070 (_vsnwprintf.c)
 */

unsigned __int16 *wil::details::LogStringPrintf(
        wil::details *this,
        char *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        ...)
{
  unsigned __int64 v4; // rdi
  unsigned __int16 *v6; // rbx
  size_t v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  const unsigned __int16 *Args; // [rsp+78h] [rbp+20h] BYREF

  Args = a4;
  v4 = (a2 - (char *)this) >> 1;
  v6 = (unsigned __int16 *)this;
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
  if ( a2 != (char *)v6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v6[v9] );
    v6 += v9;
  }
  return v6;
}
