/*
 * XREFs of ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1801366AC
 * Callers:
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x1801DC638 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1802AE86C (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(wchar_t *a1, __int64 a2, const wchar_t *a3)
{
  __int64 v3; // r9
  signed __int64 v4; // r10
  wchar_t v5; // ax
  wchar_t *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = (char *)a3 - (char *)a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = *(wchar_t *)((char *)a1 + v4);
      if ( !v5 )
        break;
      *a1++ = v5;
      --a2;
    }
    while ( a2 );
    v6 = a1 - 1;
    if ( a2 )
      v6 = a1;
    *v6 = 0;
    return a2 == 0 ? 0x8007007A : 0;
  }
  return result;
}
