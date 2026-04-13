/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003D368
 * Callers:
 *     ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x180028770 (--$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800712D0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_WPEADAEBV_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@Z @ 0x18007FD48 (--$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_W_K@Z @ 0x180082120 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800AA3B8 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x18003C5AC (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D488 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rcx
  int v5; // ebx
  _WORD *v6; // rax
  __int64 v7; // rcx
  SIZE_T v8; // rsi
  LPVOID v9; // rax
  SIZE_T cb; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return (unsigned int)-2147024362;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
    if ( *(_QWORD *)a1 )
      v4 = *(_QWORD *)(a1 + 8) + 1LL;
    else
      v4 = 0LL;
    *(_QWORD *)(a1 + 16) = v4;
  }
  if ( v4 )
  {
    v5 = 0;
    if ( v2 > v4 )
    {
      cb = 0LL;
      v5 = ULongLongMult(v4, 2uLL, &cb);
      if ( v5 >= 0 )
      {
        v8 = cb;
        if ( cb - v7 > 0x800 )
          v8 = v7 + 2048;
        if ( v2 > v8 )
          v8 = v2;
        v9 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v8);
        if ( v9 )
        {
          *(_QWORD *)(a1 + 16) = v8;
          *(_QWORD *)a1 = v9;
          return (unsigned int)v5;
        }
        return (unsigned int)-2147024882;
      }
    }
  }
  else
  {
    cb = 0LL;
    v5 = ULongLongMult(v2, 2uLL, &cb);
    if ( v5 >= 0 )
    {
      v6 = CoTaskMemAlloc(cb);
      if ( v6 )
      {
        *(_QWORD *)(a1 + 16) = v2;
        *(_QWORD *)a1 = v6;
        *v6 = 0;
        return (unsigned int)v5;
      }
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v5;
}
