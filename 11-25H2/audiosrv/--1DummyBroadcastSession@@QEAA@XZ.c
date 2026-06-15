/*
 * XREFs of ??1DummyBroadcastSession@@QEAA@XZ @ 0x1800DF714
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@@QEAU1@AEAV?$allocator@UDummyBroadcastSession@@@0@@Z @ 0x1800DDDF0 (--$_Destroy_range@V-$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@.c)
 *     ?RetrieveBroadcastSession@BluetoothBroadcastProvider@@AEAAAEAUBluetoothBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800E2710 (-RetrieveBroadcastSession@BluetoothBroadcastProvider@@AEAAAEAUBluetoothBroadcastSession@@AEBU_GU.c)
 *     ?RetrieveBroadcastSession@DummyBroadcastProvider@@AEAAAEAUDummyBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800F7E08 (-RetrieveBroadcastSession@DummyBroadcastProvider@@AEAAAEAUDummyBroadcastSession@@AEBU_GUID@@W4RB.c)
 *     _DummyBroadcastProvider::RetrieveBroadcastSession_::_1_::dtor$1 @ 0x180165D1D (_DummyBroadcastProvider--RetrieveBroadcastSession_--_1_--dtor$1.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800A6B54 (-_Tidy@-$vector@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 */

void __fastcall DummyBroadcastSession::~DummyBroadcastSession(void **this)
{
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::_Tidy((__int64)(this + 3));
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(this + 2);
}
