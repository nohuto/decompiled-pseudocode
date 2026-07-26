/*
 * XREFs of ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x14015C4A0
 * Callers:
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x14014A150 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x14015B800 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015BC80 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___ @ 0x140142714 (KRegKey--QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x14015C830 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x14015C9A0 (netsetupIsImpliedProperty.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadUint64(
        NetSetupPropertyBag *this,
        const struct _NETSETUPPROPKEY *a2,
        unsigned __int64 *a3)
{
  unsigned int v5; // esi
  size_t v6; // r8
  ULONG v7; // r9d
  HANDLE v8; // rcx
  NTSTATUS inited; // ebx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(this, a2, (struct KRegKey *)&Handle);
  if ( v5 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      v8 = Handle;
      *a3 = 0LL;
      if ( v8 )
        ZwClose(v8);
      return 0LL;
    }
    goto LABEL_7;
  }
  if ( v5 )
  {
LABEL_7:
    if ( Handle )
      ZwClose(Handle);
    return v5;
  }
  DestinationString = 0LL;
  inited = RtlUnicodeStringInitWorker(&DestinationString, 0LL, v6, v7);
  if ( inited >= 0 )
    inited = KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___(&Handle, &DestinationString, a3);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
