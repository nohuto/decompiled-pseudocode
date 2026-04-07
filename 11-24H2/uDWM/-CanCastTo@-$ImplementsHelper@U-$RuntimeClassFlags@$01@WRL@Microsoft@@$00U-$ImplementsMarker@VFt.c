/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800A3180
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3E40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Impleme.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerDisabledEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3EE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A3EE0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerEnabledEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3F80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A3F80.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerPathsFailedOrInvalidatedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4020 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A4020.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800A37AC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  int IsEqualGUID; // eax
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  unsigned int v6; // r9d

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90);
  v6 = 0;
  if ( IsEqualGUID || (unsigned int)InlineIsEqualGUID(v3, &GUID_00000003_0000_0000_c000_000000000046) )
    *v4 = v5;
  else
    return (unsigned int)-2147467262;
  return v6;
}
