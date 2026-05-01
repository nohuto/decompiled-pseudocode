/*
 * XREFs of ?UpdateRemoteDesktopName@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@0@Z @ 0x18066F640
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18066AC38 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::UpdateRemoteDesktopName(
        RTL_SRWLOCK **this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  const WCHAR *v5; // rax
  UINT32 v6; // edx
  int v7; // eax
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  HSTRING string; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(this[17], &v10, (__int64 *)a2);
  if ( v10 )
  {
    string = 0LL;
    memset(&hstringHeader, 0, sizeof(hstringHeader));
    v5 = winrt::hstring::c_str(a3);
    WindowsCreateStringReference(v5, v6, &hstringHeader, &string);
    v9 = 0LL;
    v7 = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, __int64 *))this[19]->Ptr)(
           this[19],
           &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
           &v9);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x263,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
        (const char *)(unsigned int)v7,
        v9);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING))(*(_QWORD *)v9 + 128LL))(v9, v10, string);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x264,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
        (const char *)(unsigned int)v8,
        v9);
    if ( v9 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v9);
  }
  if ( v10 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
}
