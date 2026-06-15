/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call @ 0x180039AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x180003624 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x180008B40 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rax
  __int64 v2; // r8
  CApplicationManager *v3; // rcx

  v1 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(*(_QWORD *)(a1 + 8));
  CApplicationManager::OnAppStateChanged(v3, v1, *(_QWORD *)(v2 + 24), *(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 36));
}
