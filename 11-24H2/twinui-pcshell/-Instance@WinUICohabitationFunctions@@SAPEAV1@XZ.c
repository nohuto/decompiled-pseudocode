/*
 * XREFs of ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x180289D68
 * Callers:
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x180117958 (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 *     ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B2688 (-LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ?OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Activation@ApplicationModel@67@@Z @ 0x180211774 (-OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXU.c)
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x18024A880 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 *     wil::details::lambda_call__lambda_c150d498e477500fab2efa2e3399f645___::_lambda_call__lambda_c150d498e477500fab2efa2e3399f645___ @ 0x1802893D0 (wil--details--lambda_call__lambda_c150d498e477500fab2efa2e3399f645___--_lambda_call__lambda_c150.c)
 *     ?LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180289C94 (-LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Int.c)
 *     _lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator() @ 0x180456764 (_lambda_f5c7a19be5cc201203fc8ae0f408e847_--operator().c)
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x1804576E0 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VWinUICohabitationFunctions@@U?$default_delete@VWinUICohabitationFunctions@@@std@@@std@@QEAA@XZ @ 0x18044EC94 (--1-$unique_ptr@VWinUICohabitationFunctions@@U-$default_delete@VWinUICohabitationFunctions@@@std.c)
 *     ??R?$default_delete@VWinUICohabitationFunctions@@@std@@QEBAXPEAVWinUICohabitationFunctions@@@Z @ 0x18044EDD8 (--R-$default_delete@VWinUICohabitationFunctions@@@std@@QEBAXPEAVWinUICohabitationFunctions@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
struct WinUICohabitationFunctions *WinUICohabitationFunctions::Instance(void)
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rdx
  HMODULE *v4; // [rsp+20h] [rbp-28h]
  RTL_SRWLOCK *v5; // [rsp+28h] [rbp-20h] BYREF

  AcquireSRWLockExclusive(&WinUICohabitationFunctions::s_lock);
  v5 = &WinUICohabitationFunctions::s_lock;
  v0 = WinUICohabitationFunctions::s_instance;
  if ( !WinUICohabitationFunctions::s_instance )
  {
    v4 = (HMODULE *)operator new(8uLL);
    *v4 = LoadLibraryExW(L"WinUICohabitation.dll", 0LL, 0x800u);
    v5 = 0LL;
    v2 = WinUICohabitationFunctions::s_instance;
    WinUICohabitationFunctions::s_instance = (__int64)v4;
    if ( v2 )
      std::default_delete<WinUICohabitationFunctions>::operator()(v1, v2);
    std::unique_ptr<WinUICohabitationFunctions>::~unique_ptr<WinUICohabitationFunctions>(&v5);
    v0 = WinUICohabitationFunctions::s_instance;
  }
  ReleaseSRWLockExclusive(&WinUICohabitationFunctions::s_lock);
  return (struct WinUICohabitationFunctions *)v0;
}
