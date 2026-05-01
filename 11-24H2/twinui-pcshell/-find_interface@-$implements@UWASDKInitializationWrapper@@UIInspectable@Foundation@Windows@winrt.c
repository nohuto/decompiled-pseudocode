/*
 * XREFs of ?find_interface@?$implements@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180450070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<WASDKInitializationWrapper,winrt::Windows::Foundation::IInspectable>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  if ( *a2 == winrt::impl::guid_v<IInspectable> && a2[1] == 0x901E1065AAD75A9CuLL )
    return (a1 + 16) & -(__int64)(a1 != 0);
  else
    return 0LL;
}
