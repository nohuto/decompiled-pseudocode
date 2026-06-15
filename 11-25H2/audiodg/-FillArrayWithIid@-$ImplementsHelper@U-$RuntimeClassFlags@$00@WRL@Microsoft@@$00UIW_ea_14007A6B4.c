/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007A6B4
 * Callers:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007A6D8 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAudioDeviceBr.c)
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007A6FC (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UI_ea_14007A6FC.c)
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAudioDeviceModule@Devices@Media@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007A720 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAudioDeviceMo.c)
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007A744 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UI_ea_14007A744.c)
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIModuleCommandResult@Devices@Media@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007A768 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIModuleCommand.c)
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007A7B0 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIAudioDeviceBr.c)
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007A7D4 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIAudioDeviceMo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_00000038_0000_0000_c000_000000000046;
  result = (unsigned int)(v3 + 1);
  *a2 = result;
  return result;
}
