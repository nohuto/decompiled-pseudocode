/*
 * XREFs of ?OnRemoteSessionDisconnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@@Z @ 0x18066BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18066AC38 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     ?Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18066AE24 (-Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::OnRemoteSessionDisconnected(
        RTL_SRWLOCK **this,
        const struct winrt::hstring *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(this[7], &v9, (__int64 *)a2);
  if ( v9 )
  {
    v8 = 0LL;
    v4 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int64, __int64, __int64 *))this[6]->Ptr + 8))(
           this[6],
           v9,
           5LL,
           &v8);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8C,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
        (const char *)(unsigned int)v4,
        v6);
    v5 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))this[6]->Ptr + 13))(this[6], v9, v8);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8D,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
        (const char *)(unsigned int)v5,
        v6);
    winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Remove(this[7], a2);
    if ( v8 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v8);
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v9);
  }
}
