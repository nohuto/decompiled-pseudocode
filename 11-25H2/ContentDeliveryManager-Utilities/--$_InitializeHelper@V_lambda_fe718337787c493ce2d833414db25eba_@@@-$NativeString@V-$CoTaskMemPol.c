/*
 * XREFs of ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x180028770
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180033CB0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 * Callees:
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18003B890 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003D368 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D630 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_fe718337787c493ce2d833414db25eba_>(
        __int64 a1,
        const unsigned __int16 *a2,
        char *a3,
        ...)
{
  __int64 v5; // rcx
  int v7; // ebx
  unsigned __int64 v8; // rbx
  unsigned __int16 *v9; // rdi
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
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v5);
    if ( v7 < 0 )
      goto LABEL_7;
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(unsigned __int16 **)a1;
    _set_errno(0);
    v7 = StringCchVPrintfW(v9, v8, a2, a3);
    if ( v7 != -2147024774 )
      goto LABEL_10;
    LODWORD(Value) = 0;
    _get_errno((int *)Valuea);
    if ( (_DWORD)Value == 22 )
      break;
    v10 = *(_QWORD *)(a1 + 16);
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
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
    return (unsigned int)v7;
  }
  *(_QWORD *)(a1 + 8) = -1LL;
  return (unsigned int)v7;
}
