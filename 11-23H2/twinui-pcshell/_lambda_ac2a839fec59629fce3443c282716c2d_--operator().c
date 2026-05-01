/*
 * XREFs of _lambda_ac2a839fec59629fce3443c282716c2d_::operator() @ 0x180682F88
 * Callers:
 *     winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run @ 0x1806851D0 (winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementation_ea_1806851D0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x180681FFC (--$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ac2a839fec59629fce3443c282716c2d_::operator()(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = *(_QWORD *)(a1 + 48);
  winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
    &v8,
    (__int64 (__fastcall *)(_QWORD, GUID *, void *, __int64 *))IUnknown_QueryService,
    &v9);
  v2 = v8;
  v3 = *v8;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = (*(_QWORD *)(a1 + 32) - v4) >> 4;
  v7 = *(_OWORD *)(a1 + 8);
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int128 *, __int64, __int64))(v3 + 48))(
             v8,
             *(_QWORD *)a1,
             &v7,
             v5,
             v4);
  if ( v2 )
    return winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v8);
  return result;
}
