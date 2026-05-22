/*
 * XREFs of ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x18004F1B4
 * Callers:
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18004EEA8 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x18004EFC0 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(wchar_t *a1, __int64 a2, const wchar_t *a3)
{
  signed __int64 v3; // r8
  __int64 v4; // rdx
  wchar_t v5; // ax
  wchar_t *v6; // rax

  v3 = (char *)a3 - (char *)a1;
  v4 = 260LL;
  do
  {
    if ( v4 == -2147483386 )
      break;
    v5 = *(wchar_t *)((char *)a1 + v3);
    if ( !v5 )
      break;
    *a1++ = v5;
    --v4;
  }
  while ( v4 );
  v6 = a1 - 1;
  if ( v4 )
    v6 = a1;
  *v6 = 0;
  return v4 == 0 ? 0x8007007A : 0;
}
