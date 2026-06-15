/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_::_Do_call @ 0x1800F8410
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnMulticastChildSessionDescriptorKeyChanged@DummyBroadcastProvider@@AEAAJPEBG@Z @ 0x1800F79F8 (-OnMulticastChildSessionDescriptorKeyChanged@DummyBroadcastProvider@@AEAAJPEBG@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_::_Do_call(__int64 a1)
{
  unsigned __int16 *v1; // rax
  DummyBroadcastProvider *v2; // r8
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 16));
  v3 = DummyBroadcastProvider::OnMulticastChildSessionDescriptorKeyChanged(v2, v1);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      156LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
      (const char *)(unsigned int)v3);
}
