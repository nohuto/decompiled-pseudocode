/*
 * XREFs of RtlUnicodeStringInitWorker @ 0x140096778
 * Callers:
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401351B0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x140135680 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ReadConfigurationPath@NetSetupPropertyBag@@QEAAJAEAUNetSetupConfigurationPath@@@Z @ 0x1401359B0 (-ReadConfigurationPath@NetSetupPropertyBag@@QEAAJAEAUNetSetupConfigurationPath@@@Z.c)
 *     ?SetValueBlob@KRegKey@@QEAAJPEB_WKPEBE@Z @ 0x140135F20 (-SetValueBlob@KRegKey@@QEAAJPEB_WKPEBE@Z.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x140135F90 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x140135FF0 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x140142478 (-DeleteValue@KRegKey@@QEAAJPEB_W@Z.c)
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x140143134 (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1401431F0 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1401442D8 (Ndis--BindRegistry--LoadNetworkInterfaceAddress.c)
 *     ndisLoadNamedFilterAltitudes @ 0x14014649C (ndisLoadNamedFilterAltitudes.c)
 *     ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x140149F10 (-SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x14015A870 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015AC50 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015BC80 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x14015BF80 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015C360 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x14015C4A0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015C580 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015C650 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015C750 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x14015C830 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KW4NetSetupSubkeyType@@AEAVKRegKey@@@Z @ 0x14015CEA0 (-OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KW4NetSetupSubkeyType@@AEAVKRegKey@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x140160990 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x140160A20 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140160AF0 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x140160BF0 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1401656C0 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1401659F0 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140167430 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x140167820 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringInitWorker(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS v4; // r8d
  __int64 v5; // r10
  NTSTRSAFE_PCWSTR v6; // rax
  unsigned __int16 v7; // r9

  v4 = 0;
  *DestinationString = 0LL;
  if ( pszSrc )
  {
    v5 = 0x7FFFLL;
    v6 = pszSrc;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    if ( v5 )
    {
      if ( !DestinationString )
        return -1073741811;
      v7 = 2 * (0x7FFF - v5);
      DestinationString->Buffer = (wchar_t *)pszSrc;
      DestinationString->Length = v7;
      DestinationString->MaximumLength = v7 + 2;
    }
    return v5 == 0 ? 0xC000000D : 0;
  }
  return v4;
}
