/*
 * XREFs of ndisIfReadHiddenFlag @ 0x140135CE0
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1401479DC (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015BC80 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140064730 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015C580 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015C750 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x140160BF0 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 */

NTSTATUS __fastcall ndisIfReadHiddenFlag(NetSetupPropertyBag *this, PDEVICE_OBJECT DeviceObject, bool *a3)
{
  NTSTATUS result; // eax
  int v7; // eax
  HANDLE v8; // rcx
  int v9; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-28h] BYREF
  HANDLE DeviceRegKey; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  if ( !DeviceObject )
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Driver_HideInUi, a3);
  v12 = 0;
  if ( (int)NetSetupPropertyBag::ReadUint32(
              this,
              (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_PnpDeviceInterfaceNumber,
              &v12) >= 0 )
  {
    if ( v12 )
      return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Driver_HideInUi, a3);
  }
  DeviceRegKey = 0LL;
  result = IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x80000000, &DeviceRegKey);
  if ( result < 0 )
    return result;
  Handle = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &Handle,
    DeviceRegKey);
  v13 = 0;
  v7 = KRegKey::QueryValueUlong((KRegKey *)&Handle, L"Characteristics", &v13);
  v8 = Handle;
  v9 = v7;
  if ( v7 == -1073741772 )
  {
    if ( Handle )
      ZwClose(Handle);
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Driver_HideInUi, a3);
  }
  if ( v7 )
  {
    if ( Handle )
      ZwClose(Handle);
    return v9;
  }
  else
  {
    *a3 = (v13 & 8) != 0;
    if ( v8 )
      ZwClose(v8);
    return 0;
  }
}
