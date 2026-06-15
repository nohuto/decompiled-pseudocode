/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Do_call @ 0x18003D320
 * Callers:
 *     <none>
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x18000DBB0 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const unsigned __int16 *v4; // rax
  __int64 v5; // r8

  v4 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(
                                   *(_QWORD *)(a1 + 8),
                                   a2,
                                   a1,
                                   a4);
  return CApplicationManager::OnApplicationClosed(
           g_ApplicationManager,
           v4,
           *(CApplication **)(v5 + 24),
           *(_DWORD *)(v5 + 32));
}
