/*
 * XREFs of std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Do_call @ 0x1800E7A60
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z @ 0x1800E6768 (-OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Do_call(
        __int64 a1,
        __int64 a2)
{
  unsigned __int16 *v2; // rax
  BluetoothBroadcastProvider *v3; // r8
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 16), a2);
  v4 = BluetoothBroadcastProvider::OnMulticastChildSessionDescriptorKeyChanged(v3, v2);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      194LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)(unsigned int)v4);
}
