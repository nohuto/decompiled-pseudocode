/*
 * XREFs of ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x14001B880
 * Callers:
 *     ??$CreateExternalObjectVector@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@2Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@1234@@Z @ 0x14001B364 (--$CreateExternalObjectVector@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V-$Vector.c)
 *     ??$CreateExternalObjectVector@VAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@1234@@Z @ 0x14001B668 (--$CreateExternalObjectVector@VAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudioDevic.c)
 *     ??$CreateExternalObjectVector@UIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@1234@@Z @ 0x14004C7D4 (--$CreateExternalObjectVector@UIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@Streams@St.c)
 *     ?TraceOperationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14007FF7C (-TraceOperationStart@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devi.c)
 * Callees:
 *     <none>
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *a1,
        const WCHAR **a2)
{
  HSTRING *v2; // r9
  const WCHAR *v4; // rcx
  unsigned __int64 v5; // rdx
  HRESULT StringReference; // eax

  v2 = (HSTRING *)&a1[1];
  a1[1].Reserved.Reserved1 = 0LL;
  v4 = *a2;
  v5 = -1LL;
  do
    ++v5;
  while ( v4[v5] );
  if ( v5 > 0xFFFFFFFF )
    goto LABEL_8;
  if ( (int)v5 + 1 < (unsigned int)v5 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    __debugbreak();
LABEL_8:
    RaiseException(0x80070216, 1u, 0, 0LL);
    __debugbreak();
    goto LABEL_9;
  }
  StringReference = WindowsCreateStringReference(v4, v5, a1, v2);
  if ( StringReference < 0 )
  {
LABEL_9:
    RaiseException(StringReference, 1u, 0, 0LL);
    __debugbreak();
    JUMPOUT(0x14001B92DLL);
  }
  return a1;
}
