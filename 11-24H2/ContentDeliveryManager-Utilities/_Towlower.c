/*
 * XREFs of _Towlower @ 0x180005C44
 * Callers:
 *     ?do_tolower@?$ctype@_W@std@@MEBA_W_W@Z @ 0x18005D2C0 (-do_tolower@-$ctype@_W@std@@MEBA_W_W@Z.c)
 *     ?do_tolower@?$ctype@_W@std@@MEBAPEB_WPEA_WPEB_W@Z @ 0x18005D2E0 (-do_tolower@-$ctype@_W@std@@MEBAPEB_WPEA_WPEB_W@Z.c)
 * Callees:
 *     _GetLocaleHandleByColl @ 0x18000DD68 (_GetLocaleHandleByColl.c)
 *     __crtLCMapStringW_Stub @ 0x18000DE48 (__crtLCMapStringW_Stub.c)
 */

wchar_t __cdecl Towlower(wchar_t a1, const _Ctypevec *a2)
{
  __int64 LocaleHandleByColl; // rax
  wchar_t v4; // cx
  int v5; // eax
  wchar_t v7; // [rsp+50h] [rbp+8h] BYREF
  wchar_t v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = a1;
  v8 = a1;
  LocaleHandleByColl = GetLocaleHandleByColl(a2);
  if ( v7 == 0xFFFF )
    return v8;
  if ( LocaleHandleByColl || v7 >= 0x100u )
  {
    v5 = _crtLCMapStringW_Stub(LocaleHandleByColl, 256, (unsigned int)&v7, 1, (__int64)&v8, 1, *(&a2->_Page + 1));
    v4 = v7;
    if ( !v5 )
      return v4;
    return v8;
  }
  if ( (unsigned __int16)(v7 - 65) > 0x19u )
    return v8;
  return v7 + 32;
}
