/*
 * XREFs of ??$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_WPEADAEBV_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@Z @ 0x180080178
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180081430 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003D548 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D810 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180076874 (-StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_InitializeHelper<_lambda_b11c054ca4b44c35188e9d098b3e0e31_>(
        wchar_t **a1,
        const wchar_t *a2,
        va_list a3,
        ...)
{
  unsigned __int64 v5; // rcx
  int v7; // ebx
  __int64 v8; // rbx
  wchar_t *v9; // rdi
  unsigned __int64 v10; // rax
  __int64 Value; // [rsp+58h] [rbp+20h] BYREF
  va_list Valuea; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Valuea, a3);
  Value = va_arg(va1, _QWORD);
  v5 = 32LL;
  while ( 1 )
  {
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           (__int64)a1,
           v5);
    if ( v7 < 0 )
      goto LABEL_7;
    v8 = (__int64)a1[2];
    v9 = *a1;
    _set_errno(0);
    v7 = StringCchVPrintfW(v9, v8, a2, a3);
    if ( v7 != -2147024774 )
      goto LABEL_10;
    LODWORD(Value) = 0;
    _get_errno((int *)Valuea);
    if ( (_DWORD)Value == 22 )
      break;
    v10 = (unsigned __int64)a1[2];
    v5 = v10 + 32;
    if ( v10 + 32 < v10 )
    {
      v7 = -2147024362;
      goto LABEL_7;
    }
  }
  v7 = -2147024809;
LABEL_10:
  if ( v7 < 0 )
  {
LABEL_7:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)a1);
    return (unsigned int)v7;
  }
  a1[1] = (wchar_t *)-1LL;
  return (unsigned int)v7;
}
