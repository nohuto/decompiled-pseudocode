/*
 * XREFs of ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401681D0
 * Callers:
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013F734 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140064730 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEB_W@Z @ 0x14013F628 (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 */

void __fastcall ndisPcwEnableAlwaysOnCounters(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  HANDLE DeviceRegKey; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  DeviceRegKey = 0LL;
  if ( IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2u, 1u, &DeviceRegKey) >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &Handle,
      DeviceRegKey);
    ndisPcwEnableAlwaysOnCounterSet(a1, (KRegKey *)&Handle, 1u, 25, L"EnabledDatapathEventCounters");
    ndisPcwEnableAlwaysOnCounterSet(a1, (KRegKey *)&Handle, 2u, 12, L"EnabledDatapathCycleCounters");
    if ( Handle )
      ZwClose(Handle);
  }
}
