/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x140077B68
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14001C1EC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrok.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14001C2C8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAu_ea_14001C2C8.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14003DE10 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModu.c)
 *     ?QueryInterface@AudioDeviceModule@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007B300 (-QueryInterface@AudioDeviceModule@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIModuleCommandResult@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007B3D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIModuleCom.c)
 *     ?QueryInterface@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007B580 (-QueryInterface@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007B630 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_14007B630.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14002CA60 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140077BB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

int __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  void **v2; // r8
  __int64 v3; // r9
  const struct _GUID *v4; // r10
  int result; // eax

  if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v2 = (void *)v3;
    return 0;
  }
  else
  {
    result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v3 + 8), v4, v2);
    if ( result == -2147467262 )
      return -2147467262;
  }
  return result;
}
