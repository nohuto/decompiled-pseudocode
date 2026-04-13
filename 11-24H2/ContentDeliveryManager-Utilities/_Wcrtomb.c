/*
 * XREFs of _Wcrtomb @ 0x180005FBC
 * Callers:
 *     ?do_out@?$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z @ 0x180019A20 (-do_out@-$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18001BB10 (-do_unshift@-$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 *     ?_Donarrow@?$ctype@_W@std@@IEBAD_WD@Z @ 0x180059CF0 (-_Donarrow@-$ctype@_W@std@@IEBAD_WD@Z.c)
 *     ?do_out@?$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z @ 0x18006A740 (-do_out@-$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18006A9B0 (-do_unshift@-$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

int __cdecl Wcrtomb(char *lpMultiByteStr, wchar_t a2, mbstate_t *a3, const _Cvtvec *a4)
{
  bool v4; // zf
  int result; // eax
  WCHAR WideCharStr; // [rsp+40h] [rbp-58h] BYREF
  WINBOOL UsedDefaultChar; // [rsp+48h] [rbp-50h] BYREF
  __int128 v8; // [rsp+50h] [rbp-48h]
  __int128 v9; // [rsp+60h] [rbp-38h]
  __int128 v10; // [rsp+70h] [rbp-28h]

  v4 = *(_DWORD *)a4->_Isleadbyte == 0;
  WideCharStr = a2;
  if ( !v4 )
  {
    if ( a2 <= 0xFFu )
    {
      *lpMultiByteStr = a2;
      return 1;
    }
    goto LABEL_6;
  }
  UsedDefaultChar = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  result = WideCharToMultiByte(a4->_Mbcurmax, 0, &WideCharStr, 1, lpMultiByteStr, a4->_Isclocale, 0LL, &UsedDefaultChar);
  if ( !result || UsedDefaultChar )
  {
LABEL_6:
    *_errno() = 42;
    return -1;
  }
  return result;
}
