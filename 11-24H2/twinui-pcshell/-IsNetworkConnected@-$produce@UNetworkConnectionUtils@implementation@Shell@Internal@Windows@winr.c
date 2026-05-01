/*
 * XREFs of ?IsNetworkConnected@?$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtils@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180670650
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D64 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18007CC04 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetInternetConnectionProfile@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@XZ @ 0x1805D2758 (-GetInternetConnectionProfile@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtils>::IsNetworkConnected(
        __int64 a1,
        char *a2)
{
  char v3; // bl
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp+18h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+48h] [rbp+20h] BYREF

  v6 = HIDWORD(a1);
  v5 = 0;
  try
  {
    winrt::Windows::Networking::Connectivity::NetworkInformation::GetInternetConnectionProfile(&v7);
    v8 = 0LL;
    v3 = 1;
    v5 = 1;
    if ( !winrt::Windows::Foundation::operator!=(&v7, &v8)
      || !(unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v7) )
    {
      v3 = 0;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
    *a2 = v3;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
