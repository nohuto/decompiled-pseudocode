/*
 * XREFs of ndisIsBindPathEnabled @ 0x140146180
 * Callers:
 *     ndisIsLwfBindingEnabled @ 0x1401462D8 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x14014637C (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x14014640C (ndisIsProtocolBindingEnabled.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140052980 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015C750 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

__int64 __fastcall ndisIsBindPathEnabled(NTSTRSAFE_PCWSTR pszSrc, char a2, bool *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  const struct _NETSETUPPROPKEY *v8; // rbx
  unsigned int Boolean; // edi
  KRegKey v10; // [rsp+20h] [rbp-60h] BYREF
  KRegKey *v11; // [rsp+28h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  int v13; // [rsp+40h] [rbp-40h]
  __int128 v14; // [rsp+44h] [rbp-3Ch]
  int v15; // [rsp+54h] [rbp-2Ch]
  __int128 v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+68h] [rbp-18h]
  char v18; // [rsp+6Ch] [rbp-14h] BYREF

  v10.m_ptr = 0LL;
  v5 = KRegKey::Open(&v10, 8u, pszSrc, 0LL);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 != -1073741772 )
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v10.m_ptr);
      return v6;
    }
  }
  else
  {
    v8 = (const struct _NETSETUPPROPKEY *)&v12;
    v13 = 80;
    v12 = NETSETUPPKEY_Binding_EnabledByController;
    v15 = 82;
    v17 = 84;
    v14 = NETSETUPPKEY_Binding_EnabledByUserPersisted;
    v11 = &v10;
    v16 = NETSETUPPKEY_Binding_EnabledByBindRules;
    while ( v8 != (const struct _NETSETUPPROPKEY *)&v18 )
    {
      Boolean = NetSetupPropertyBag::ReadBoolean((NetSetupPropertyBag *)&v11, v8, a3);
      if ( Boolean != -1073741772 )
        goto LABEL_9;
      v8 = (const struct _NETSETUPPROPKEY *)((char *)v8 + 20);
    }
  }
  *a3 = a2 ^ 1;
  Boolean = 0;
LABEL_9:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v10.m_ptr);
  return Boolean;
}
