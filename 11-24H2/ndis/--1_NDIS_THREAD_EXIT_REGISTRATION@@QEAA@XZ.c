/*
 * XREFs of ??1_NDIS_THREAD_EXIT_REGISTRATION@@QEAA@XZ @ 0x1400E3FA4
 * Callers:
 *     NdisRegisterUserThreadExitCallback @ 0x1400E40C0 (NdisRegisterUserThreadExitCallback.c)
 *     NdisUnregisterUserThreadExitCallback @ 0x1400E4510 (NdisUnregisterUserThreadExitCallback.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400E3F6C (--1-$unique_storage@U-$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1-ObfDereferenceObject@@YA_J0.c)
 */

void __fastcall _NDIS_THREAD_EXIT_REGISTRATION::~_NDIS_THREAD_EXIT_REGISTRATION(_NDIS_THREAD_EXIT_REGISTRATION *this)
{
  wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>((__int64 *)this + 1);
  wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>((__int64 *)this);
}
