/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180011710
 * Callers:
 *     ??_E?$RuntimeClass@UIRandomAccessStreamReference@Streams@Storage@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180011B90 (--_E-$RuntimeClass@UIRandomAccessStreamReference@Streams@Storage@Windows@@VFtmBase@WRL@Microsoft.c)
 *     _anonymous_namespace_::StreamReference::_scalar_deleting_destructor_ @ 0x180011C10 (_anonymous_namespace_--StreamReference--_scalar_deleting_destructor_.c)
 *     ??1?$RuntimeClass@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x180018FA0 (--1-$RuntimeClass@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@WRL@.c)
 *     ??1FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180019270 (--1FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??1GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180025CA8 (--1GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??1Iterator@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x180025E00 (--1Iterator@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@Internal@C.c)
 *     ??_E?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x180026ED0 (--_E-$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultLifetimeTraits@PEAUHSTRING__.c)
 *     ??_GChunkElementIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x180026F30 (--_GChunkElementIterator@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPre.c)
 *     ??_EGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180026FD0 (--_EGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     ??_GSplitIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x1800270E0 (--_GSplitIterator@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@.c)
 *     ??_GTileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180027150 (--_GTileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     ??_EGameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x1800398C0 (--_EGameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  result = (unsigned __int64)v2 >> 63;
  if ( v2 < 0 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release((volatile signed __int32 *)(2 * v2));
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
