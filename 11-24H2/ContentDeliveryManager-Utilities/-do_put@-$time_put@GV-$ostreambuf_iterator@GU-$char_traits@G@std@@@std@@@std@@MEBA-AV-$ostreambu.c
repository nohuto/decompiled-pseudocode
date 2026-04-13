/*
 * XREFs of ?do_put@?$time_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBUtm@@DD@Z @ 0x18001B780
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_impl@PEA_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@YA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@0@PEA_W0V10@U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18000E98C (--$_Copy_impl@PEA_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@YA-AV-$ostreambuf.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002264D (--3@YAXPEAX@Z_0.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005BFF4 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int128 *__fastcall std::time_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::do_put(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        struct tm *Timeptr,
        char a7,
        char a8)
{
  __int64 i; // rbx
  wchar_t *v12; // rcx
  size_t v13; // rcx
  wchar_t **v14; // rax
  wchar_t **v15; // rdx
  __int128 v17; // [rsp+40h] [rbp-59h] BYREF
  __int128 v18; // [rsp+50h] [rbp-49h] BYREF
  wchar_t *Buffer[2]; // [rsp+60h] [rbp-39h] BYREF
  size_t Max_size; // [rsp+70h] [rbp-29h]
  unsigned __int64 v21; // [rsp+78h] [rbp-21h]
  wchar_t Format[4]; // [rsp+80h] [rbp-19h] BYREF
  __int16 v23; // [rsp+88h] [rbp-11h]

  wcscpy(Format, L"!%x");
  v23 = 0;
  v21 = 7LL;
  Max_size = 0LL;
  LOWORD(Buffer[0]) = 0;
  if ( a8 )
  {
    Format[2] = a8;
    Format[3] = a7;
  }
  else
  {
    Format[2] = a7;
  }
  for ( i = 16LL; ; i *= 2LL )
  {
    std::wstring::append(Buffer, i, 0LL);
    v12 = (wchar_t *)Buffer;
    if ( v21 >= 8 )
      v12 = Buffer[0];
    v13 = _Wcsftime(v12, Max_size, Format, Timeptr, *(void **)(a1 + 16));
    if ( v13 )
      break;
  }
  v14 = Buffer;
  if ( v21 >= 8 )
    v14 = (wchar_t **)Buffer[0];
  v15 = Buffer;
  if ( v21 >= 8 )
    v15 = (wchar_t **)Buffer[0];
  v17 = *a3;
  std::_Copy_impl<wchar_t *,std::ostreambuf_iterator<wchar_t>>(
    &v18,
    (unsigned __int16 *)v15 + 1,
    (unsigned __int16 *)v14 + v13,
    (__int64)&v17);
  *a2 = *a3;
  if ( v21 >= 8 )
    operator delete(Buffer[0]);
  return a2;
}
