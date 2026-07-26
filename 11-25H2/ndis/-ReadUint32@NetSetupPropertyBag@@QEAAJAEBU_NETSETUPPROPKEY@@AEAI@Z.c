/*
 * XREFs of ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1401694D0
 * Callers:
 *     ndisIfReadHiddenFlag @ 0x140140CE0 (ndisIfReadHiddenFlag.c)
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140154E20 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140167770 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x140167EE0 (ndisWdfOpenConfigurationKey.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x140168750 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x140168BD0 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x140169780 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1401698F0 (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x140169BE0 (KRegKey--QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadUint32(
        NetSetupPropertyBag *this,
        const struct _NETSETUPPROPKEY *a2,
        unsigned int *a3)
{
  unsigned int inited; // ebx
  size_t v6; // r8
  ULONG v7; // r9d
  HANDLE v8; // rcx
  HANDLE v10; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  inited = NetSetupPropertyBag::OpenPropertyKey(this, a2, (struct KRegKey *)&Handle);
  if ( inited != -1073741772 )
  {
    if ( !inited )
    {
      DestinationString = 0LL;
      inited = RtlUnicodeStringInitWorker(&DestinationString, 0LL, v6, v7);
      if ( (inited & 0x80000000) == 0 )
        inited = KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___(&Handle, &DestinationString, a3);
      v8 = Handle;
      if ( !Handle )
        return inited;
      goto LABEL_9;
    }
LABEL_3:
    v8 = Handle;
    if ( !Handle )
      return inited;
LABEL_9:
    ZwClose(v8);
    return inited;
  }
  if ( !(unsigned __int8)netsetupIsImpliedProperty(a2) )
    goto LABEL_3;
  v10 = Handle;
  *a3 = 0;
  if ( v10 )
    ZwClose(v10);
  return 0LL;
}
