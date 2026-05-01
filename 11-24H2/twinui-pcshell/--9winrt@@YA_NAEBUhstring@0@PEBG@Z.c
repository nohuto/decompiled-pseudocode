/*
 * XREFs of ??9winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1802CE7B0
 * Callers:
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18064CA34 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x180652280 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801C9A54 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 */

char __fastcall winrt::operator!=(__int64 *a1)
{
  return winrt::operator==(a1, (char *)&pvData) ^ 1;
}
