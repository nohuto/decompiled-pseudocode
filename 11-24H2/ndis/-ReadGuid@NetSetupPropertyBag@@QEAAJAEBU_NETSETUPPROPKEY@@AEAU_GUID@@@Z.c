/*
 * XREFs of ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x140143134
 * Callers:
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400C939C (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140052980 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___ @ 0x140142A08 (KRegKey--QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x14015C830 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x14015C9A0 (netsetupIsImpliedProperty.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadGuid(
        NetSetupPropertyBag *this,
        const struct _NETSETUPPROPKEY *a2,
        struct _GUID *a3)
{
  unsigned int v4; // ebx
  size_t v6; // r8
  ULONG v7; // r9d
  int v8; // r10d
  NTSTATUS inited; // eax
  struct KRegKey v11; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0;
  v11.m_ptr = 0LL;
  v8 = NetSetupPropertyBag::OpenPropertyKey(this, a2, &v11);
  if ( v8 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      *a3 = 0LL;
      goto LABEL_9;
    }
LABEL_5:
    v4 = v8;
    goto LABEL_9;
  }
  if ( v8 )
    goto LABEL_5;
  DestinationString = 0LL;
  inited = RtlUnicodeStringInitWorker(&DestinationString, 0LL, v6, v7);
  if ( inited >= 0 )
    inited = KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___(&v11.m_ptr, &DestinationString, a3);
  v4 = inited;
LABEL_9:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11.m_ptr);
  return v4;
}
