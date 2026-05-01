/*
 * XREFs of ??$check_bool@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YA?AV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@V123@AEBUslim_source_location@impl@0@@Z @ 0x1803D5488
 * Callers:
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x18018F0B4 (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802DFC4C (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::impl::slim_source_location *__fastcall winrt::check_bool<Microsoft::WRL::ComPtr<IServiceProvider>>(
        const struct winrt::impl::slim_source_location *a1,
        const struct winrt::impl::slim_source_location *a2,
        winrt *a3)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    winrt::throw_last_error(a3, a2);
  *(_QWORD *)a1 = 0LL;
  if ( a1 != a2 )
  {
    *(_QWORD *)a1 = v4;
    *(_QWORD *)a2 = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
  return a1;
}
