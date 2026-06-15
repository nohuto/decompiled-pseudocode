/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180016710
 * Callers:
 *     _lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator() @ 0x18001652C (_lambda_d1e543e32deb761d4b0a6b2d9b3a008a_--operator().c)
 *     _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x18001E0A0 (_lambda_715f26a8cf03ec1bdf3d6747fabae5e9_--operator().c)
 *     _lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator() @ 0x18004AF6C (_lambda_7a32b90734f372e87ecd5e5e89c702f7_--operator().c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001DA94 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001DACC (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ??R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z @ 0x18004B0DC (--R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        _QWORD *a1,
        __int64 a2,
        ...)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // eax
  unsigned __int64 v8; // rax
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  v3 = 32LL;
  while ( 1 )
  {
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v3);
    if ( v6 < 0 )
      goto LABEL_6;
    v7 = _lambda_fe718337787c493ce2d833414db25eba_::operator()(v5, a2, (__int64 *)va, *a1, a1[2]);
    v6 = v7;
    if ( v7 != -2147024774 )
      break;
    v8 = a1[2];
    v3 = v8 + 32;
    if ( v8 + 32 < v8 )
    {
      v6 = -2147024362;
LABEL_6:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
      return (unsigned int)v6;
    }
  }
  if ( v7 < 0 )
    goto LABEL_6;
  a1[1] = -1LL;
  return (unsigned int)v6;
}
