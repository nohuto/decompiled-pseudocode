/*
 * XREFs of ??R_lambda_f90fd89f5c660ec91b58f654b0e35989_@@QEBA@AEBUILauncherStatics@System@Windows@winrt@@@Z @ 0x180622568
 * Callers:
 *     ??$call@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@Z @ 0x18061DC58 (--$call@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@@Z @ 0x1806332CC (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@.c)
 * Callees:
 *     ?LaunchUriAsync@?$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUUri@Foundation@Windows@3@AEBULauncherOptions@System@63@@Z @ 0x180633260 (-LaunchUriAsync@-$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@_ea_180633260.c)
 */

__int64 __fastcall _lambda_f90fd89f5c660ec91b58f654b0e35989_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_System_ILauncherStatics<winrt::Windows::System::ILauncherStatics>::LaunchUriAsync(
    a3,
    a2,
    *a1,
    a1[1]);
  return a2;
}
