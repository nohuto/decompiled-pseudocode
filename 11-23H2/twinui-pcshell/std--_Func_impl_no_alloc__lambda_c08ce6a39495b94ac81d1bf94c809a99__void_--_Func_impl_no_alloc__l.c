/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void_::_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void___lambda_c08ce6a39495b94ac81d1bf94c809a99__0_ @ 0x180281BB8
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void___lambda_c08ce6a39495b94ac81d1bf94c809a99___ @ 0x180282108 (std--_Global_new_std--_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__ea_180282108.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1801BC6D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void_::_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void___lambda_c08ce6a39495b94ac81d1bf94c809a99__0_(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rax

  *a1 = off_1807CBAE8;
  v4 = a1 + 1;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = *(_QWORD *)a2;
  a1[2] = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = a1 + 3;
  *v5 = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  v6 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  v4[3] = v6;
  *((_DWORD *)v4 + 8) = *(_DWORD *)(a2 + 32);
  winrt::hstring::hstring((winrt::hstring *)(v4 + 5), (winrt::impl **)(a2 + 40), v7);
  v8 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  v4[6] = v8;
  return a1;
}
