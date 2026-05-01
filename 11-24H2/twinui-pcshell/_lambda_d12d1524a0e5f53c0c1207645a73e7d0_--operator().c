/*
 * XREFs of _lambda_d12d1524a0e5f53c0c1207645a73e7d0_::operator() @ 0x18066B308
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_d12d1524a0e5f53c0c1207645a73e7d0___::Invoke @ 0x18066BC40 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18066BC40.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Construct_from_weak@VCAppThumbnailWindow@@@?$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEBV?$weak_ptr@VCAppThumbnailWindow@@@1@@Z @ 0x1804A499C (--$_Construct_from_weak@VCAppThumbnailWindow@@@-$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEB.c)
 *     ?revoke@?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18065592C (-revoke@-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18066AC38 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_d12d1524a0e5f53c0c1207645a73e7d0_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v4; // rdi
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  std::_Ref_count_base *v8[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v10; // [rsp+48h] [rbp+18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a2;
  *(_OWORD *)v8 = 0LL;
  std::_Ptr_base<CAppThumbnailWindow>::_Construct_from_weak<CAppThumbnailWindow>((__int64)v8, a1);
  v4 = v8[0];
  if ( v8[0] )
  {
    v11 = 0LL;
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v8[0] + 6))(
           *((_QWORD *)v8[0] + 6),
           &GUID_53f5ca0b_158f_4124_900c_057158060b27,
           &v11);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x53,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
        (const char *)(unsigned int)v5,
        (int)v8[0]);
    winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(
      *((RTL_SRWLOCK **)v4 + 7),
      &v10,
      (__int64 *)(a1 + 16));
    v6 = v10;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 168LL))(v11, v10, 1LL);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x57,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
        (const char *)(unsigned int)v7,
        (int)v8[0]);
    winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::revoke((__int64)v4 + 72);
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
    if ( v11 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
  }
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
}
