/*
 * XREFs of ?OnRemoteSessionConnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@@Z @ 0x18066BCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180016B3C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1801E5480 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18032CCE0 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?Add@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@AEBU?$com_ptr@UIVirtualDesktop@@@6@@Z @ 0x18066ABC4 (-Add@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@AEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::OnRemoteSessionConnected(
        winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator *this,
        const struct winrt::hstring *a2)
{
  int v4; // eax
  HRESULT v5; // eax
  int v6; // eax
  int v7; // eax
  const struct winrt::impl::slim_source_location *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-19h] BYREF
  __int64 v10; // [rsp+28h] [rbp-11h] BYREF
  PCWSTR sourceString; // [rsp+30h] [rbp-9h] BYREF
  UINT32 length[2]; // [rsp+38h] [rbp-1h]
  __int64 v13; // [rsp+40h] [rbp+7h]
  HSTRING string; // [rsp+48h] [rbp+Fh] BYREF
  _BYTE v15[24]; // [rsp+50h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 6) )
  {
    v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v15);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)&sourceString,
      v8);
    throw (winrt::hresult_illegal_method_call *)&sourceString;
  }
  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v13 = 0LL;
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
         &sourceString,
         (__int64)&_ImageBase,
         14002LL);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x73,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
      (const char *)(unsigned int)v4,
      v9);
  string = 0LL;
  memset(&hstringHeader, 0, sizeof(hstringHeader));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
  v5 = WindowsCreateStringReference(sourceString, length[0], &hstringHeader, &string);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x77,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
      (const char *)(unsigned int)v5,
      v9);
  v10 = 0LL;
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
         *((_QWORD *)this + 6),
         &GUID_53f5ca0b_158f_4124_900c_057158060b27,
         &v10);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7A,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
      (const char *)(unsigned int)v6,
      v9);
  v9 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v10 + 160LL))(v10, string, &v9);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7D,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
      (const char *)(unsigned int)v7,
      v9);
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Add(
    *((RTL_SRWLOCK **)this + 7),
    (__int64 *)a2,
    &v9);
  if ( v9 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v9);
  if ( v10 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
}
