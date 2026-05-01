/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void___lambda_c08ce6a39495b94ac81d1bf94c809a99__const_&_ @ 0x18028200C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void_::_Copy @ 0x180283A60 (std--_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void_--_Copy.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1801BC6D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void___lambda_d5554fb7d1d16b7c69ea1af45fa7d089____::_2_::_Guard_type::__Guard_type @ 0x180235A68 (_std--_Global_new_std--_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void___lamb.c)
 *     ??0?$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEBV01@@Z @ 0x1807200B0 (--0-$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void___lambda_c08ce6a39495b94ac81d1bf94c809a99__const___(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp+10h]

  v2 = (__int64 *)operator new(0x40uLL);
  v8 = v2;
  *v2 = (__int64)off_1807CBAE8;
  v9 = v2 + 1;
  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>(
    v2 + 1,
    a1,
    v3,
    v4);
  v2[3] = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v2 + 3);
  v2[4] = *(_QWORD *)(a1 + 24);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v2 + 4);
  *((_DWORD *)v2 + 10) = *(_DWORD *)(a1 + 32);
  winrt::hstring::hstring((winrt::hstring *)(v2 + 6), (winrt::impl **)(a1 + 40), v5);
  winrt::hstring::hstring((winrt::hstring *)(v2 + 7), (winrt::impl **)(a1 + 48), v6);
  v8 = 0LL;
  std::_Global_new_std::_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void___lambda_d5554fb7d1d16b7c69ea1af45fa7d089____::_2_::_Guard_type::__Guard_type((void **)&v8);
  return v2;
}
