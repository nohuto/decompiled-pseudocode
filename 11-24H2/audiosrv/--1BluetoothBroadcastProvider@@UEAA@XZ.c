/*
 * XREFs of ??1BluetoothBroadcastProvider@@UEAA@XZ @ 0x1800E4070
 * Callers:
 *     ??_EBluetoothBroadcastProvider@@UEAAPEAXI@Z @ 0x1800E5050 (--_EBluetoothBroadcastProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800A2F7C (-_Tidy@-$vector@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C01E0 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAXPEAUBluetoothBroadcastSession@@QEAU1@AEAV?$allocator@UBluetoothBroadcastSession@@@0@@Z @ 0x1800E27E0 (--$_Destroy_range@V-$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAXPEAUBluetoothBroadcast.c)
 */

void __fastcall BluetoothBroadcastProvider::~BluetoothBroadcastProvider(
        BluetoothBroadcastProvider *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  wil::details *v3; // rcx
  BluetoothBroadcastSession *v4; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 15);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, a2);
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::_Tidy((__int64)this + 88);
  v4 = (BluetoothBroadcastSession *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<BluetoothBroadcastSession>>(v4, *((BluetoothBroadcastSession **)this + 9));
    std::_Deallocate<16,0>(
      *((char **)this + 8),
      (const struct std::nothrow_t *)(16 * ((__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) >> 4)));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 3) = -1073741823;
}
