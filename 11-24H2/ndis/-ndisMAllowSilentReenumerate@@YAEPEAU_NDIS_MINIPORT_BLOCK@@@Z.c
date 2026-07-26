/*
 * XREFs of ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013E934
 * Callers:
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A6D4C (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140052980 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140064730 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x1401426CC (-SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x140160C40 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

bool __fastcall ndisMAllowSilentReenumerate(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  bool v2; // bl
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  KRegKey v5; // [rsp+38h] [rbp+10h] BYREF
  HANDLE v6; // [rsp+40h] [rbp+18h] BYREF

  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  v2 = 0;
  v6 = 0LL;
  v4 = 0;
  v5.m_ptr = 0LL;
  if ( IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2u, 0xC2000000, &v6) >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v5.m_ptr,
      v6);
    if ( (int)KRegKey::QueryValueUlong(&v5, &stru_1400F4B30, &v4) >= 0 )
    {
      if ( v4 )
        v2 = (int)KRegKey::SetValueUlong(&v5, &stru_1400F4B30, v4 - 1) >= 0;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v5.m_ptr);
  return v2;
}
