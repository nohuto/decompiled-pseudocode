/*
 * XREFs of ?WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x1801B2D54
 * Callers:
 *     ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B2688 (-LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows.c)
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x18024A880 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 *     wil::details::lambda_call__lambda_c150d498e477500fab2efa2e3399f645___::_lambda_call__lambda_c150d498e477500fab2efa2e3399f645___ @ 0x1802893D0 (wil--details--lambda_call__lambda_c150d498e477500fab2efa2e3399f645___--_lambda_call__lambda_c150.c)
 *     _lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator() @ 0x180456764 (_lambda_f5c7a19be5cc201203fc8ae0f408e847_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031DBA0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WinUICohabitationFunctions::WinAppSDKCohabitation_UnregisterWASDKThreadWrapper(HMODULE *this)
{
  __int64 (*ProcAddress)(void); // rax
  const char *v2; // r9
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ProcAddress = GetProcAddress(*this, "WinAppSDKCohabitation_UnregisterWASDKThread");
  if ( !ProcAddress )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x2A,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\WinUICohabitationFunctions.h",
      v2);
  v3 = ProcAddress();
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\WinUICohabitationFunctions.h",
      (const char *)(unsigned int)v3,
      v4);
}
