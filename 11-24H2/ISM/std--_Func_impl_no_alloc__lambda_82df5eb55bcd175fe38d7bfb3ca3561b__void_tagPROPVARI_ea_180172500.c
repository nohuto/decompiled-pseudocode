/*
 * XREFs of std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_&_::_Delete_this @ 0x180172500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const___::_Delete_this(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 3);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
