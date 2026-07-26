/*
 * XREFs of ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x14014DEAC
 * Callers:
 *     ndisBlowStringListIntoAtoms @ 0x1401507C8 (ndisBlowStringListIntoAtoms.c)
 * Callees:
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140002E20 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006D500 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x14014DB90 (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x140169780 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1401698F0 (netsetupIsImpliedProperty.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadStringArray(
        NetSetupPropertyBag *a1,
        const struct _NETSETUPPROPKEY *a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  size_t v6; // r8
  ULONG v7; // r9d
  int v8; // r10d
  NTSTATUS inited; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  struct KRegKey v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v12.m_ptr = 0LL;
  v8 = NetSetupPropertyBag::OpenPropertyKey(a1, a2, &v12);
  if ( v8 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(a3, 0LL);
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
    inited = KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___(
               &v12.m_ptr,
               &DestinationString,
               a3,
               a3);
  v4 = inited;
LABEL_9:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v12.m_ptr);
  return v4;
}
