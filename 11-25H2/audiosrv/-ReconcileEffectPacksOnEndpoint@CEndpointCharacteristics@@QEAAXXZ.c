/*
 * XREFs of ?ReconcileEffectPacksOnEndpoint@CEndpointCharacteristics@@QEAAXXZ @ 0x18012DBF0
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x180078A24 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 *     std::_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCharacteristics___::_Do_call @ 0x1800F9620 (std--_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCh_ea_1800F9620.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800020BC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_4e7757eacc48e777df79214de0431eb5___ @ 0x180127D24 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--share_ea_180127D24.c)
 *     ?erase@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@2@0@Z @ 0x1801319A0 (-erase@-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@.c)
 */

void __fastcall CEndpointCharacteristics::ReconcileEffectPacksOnEndpoint(CEndpointCharacteristics *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 *v3; // r8
  __int64 *v4; // rdx
  __int64 **v5; // rax
  __int64 *v6; // rbx
  _DWORD *v7; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v9[2]; // [rsp+28h] [rbp-10h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 320);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 8);
  v3 = (__int64 *)*((_QWORD *)this + 46);
  v4 = (__int64 *)*((_QWORD *)this + 45);
  v8 = v1;
  while ( v4 != v3
       && __PAIR128__(_mm_srli_si128(*(__m128i *)*(_QWORD *)(*v4 + 1568), 8).m128i_u64[0], **(_QWORD **)(*v4 + 1568)) != *(_OWORD *)&CLSID_MEPAudioEffectPackID )
    v4 += 2;
  if ( v4 != v3 )
  {
    v5 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_4e7757eacc48e777df79214de0431eb5___(
           v9,
           *((__int64 **)this + 45),
           v3);
    v6 = *v5;
    if ( *v5 != *((__int64 **)this + 46) )
    {
      v7 = (_DWORD *)*((_QWORD *)this + 1036);
      if ( *v7 > 5u )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          (int)v7,
          (int)&unk_1801A5245);
      std::vector<std::shared_ptr<EffectPack>>::erase((char *)this + 360, v9, v6, *((_QWORD *)this + 46), v8);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
}
