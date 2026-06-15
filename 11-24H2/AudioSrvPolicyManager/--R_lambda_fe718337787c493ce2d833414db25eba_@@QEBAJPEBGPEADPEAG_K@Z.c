/*
 * XREFs of ??R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z @ 0x1800488BC
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180016930 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 * Callees:
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180018A10 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     _get_errno @ 0x1800211C2 (_get_errno.c)
 *     _set_errno @ 0x180021224 (_set_errno.c)
 */

__int64 __fastcall _lambda_fe718337787c493ce2d833414db25eba_::operator()(
        __int64 a1,
        const unsigned __int16 *a2,
        va_list a3,
        unsigned __int16 *a4,
        unsigned __int64 a5)
{
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 Value; // [rsp+30h] [rbp+8h] BYREF

  Value = a1;
  set_errno(0);
  v8 = StringCchVPrintfW(a4, a5, a2, a3);
  v9 = -2147024774;
  if ( v8 != -2147024774 )
    return v8;
  LODWORD(Value) = 0;
  get_errno((int *)&Value);
  if ( (_DWORD)Value == 22 )
    return (unsigned int)-2147024809;
  return v9;
}
