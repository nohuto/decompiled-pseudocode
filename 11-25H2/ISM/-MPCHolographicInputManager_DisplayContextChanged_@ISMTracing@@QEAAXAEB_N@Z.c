/*
 * XREFs of ?MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BCC34
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x1800BDCC0 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180002414 (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_DisplayContextChanged_(ISMTracing *this, const bool *a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  ISMTracing *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  if ( ISMTracing::IsEnabled() )
  {
    v3 = ISMTracing::Provider();
    if ( *(_DWORD *)v3 > 4u && tlgKeywordOn((__int64)v3, 1LL) )
    {
      LOBYTE(v6) = *a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
        v4,
        (__int64)&unk_180207221,
        v4,
        v5,
        (__int64)&v6);
    }
  }
}
