/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_::_Do_call @ 0x18003AE00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x180008B40 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rax
  __int64 v2; // r8
  CApplicationManager *v3; // rcx

  v1 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(*(_QWORD *)(a1 + 8));
  return CApplicationManager::HandleMediaPlaybackRequestForApp(v3, v1, *(_QWORD *)(v2 + 24), *(_DWORD *)(v2 + 32));
}
