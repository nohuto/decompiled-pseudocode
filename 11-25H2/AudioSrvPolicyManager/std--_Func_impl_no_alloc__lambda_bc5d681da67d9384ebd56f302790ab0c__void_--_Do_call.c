/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call @ 0x18003C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x18000B9A8 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x18000DBB0 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const unsigned __int16 *v4; // rax
  __int64 v5; // r8
  CApplicationManager *v6; // rcx

  v4 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(
                                   *(_QWORD *)(a1 + 8),
                                   a2,
                                   a1,
                                   a4);
  CApplicationManager::OnAppStateChanged(v6, v4, *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 32), *(_DWORD *)(v5 + 36));
}
