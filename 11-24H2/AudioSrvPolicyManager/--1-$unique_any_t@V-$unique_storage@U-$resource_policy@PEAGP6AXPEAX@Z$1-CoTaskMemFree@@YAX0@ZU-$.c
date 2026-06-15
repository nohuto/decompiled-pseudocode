/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016130
 * Callers:
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$7 @ 0x180049210 (_CApplicationManager--RpcGetProcess_--_1_--dtor$7.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$8 @ 0x180049230 (_CApplicationManager--RpcGetProcess_--_1_--dtor$8.c)
 *     _OpenSessionKey_::_1_::dtor$1 @ 0x180049840 (_OpenSessionKey_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$3 @ 0x18004AB76 (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$3.c)
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$4 @ 0x18004AB8C (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$4.c)
 *     _CApplication::CApplication_::_1_::dtor$1 @ 0x18004AF13 (_CApplication--CApplication_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor$3 @ 0x18004B75E (_ApplicationSpecificEndpointInfo--LoadApplicationDefaultEndpoints_--_1_--dtor$3.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$1 @ 0x18004B770 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$7 @ 0x18004B794 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
