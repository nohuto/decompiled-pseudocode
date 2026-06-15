/*
 * XREFs of ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x180137798
 * Callers:
 *     _lambda_7219fec9e44238e31abb5a0eaf15be97_::operator() @ 0x18013115C (_lambda_7219fec9e44238e31abb5a0eaf15be97_--operator().c)
 *     ?SetUserSelectedEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013855C (-SetUserSelectedEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180005C50 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapSz@G@@@Z @ 0x180045E98 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvi.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180052E14 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x18008D140 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x180133F5C (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CEndpointCharacteristics::SetCurrentEffectPackInternal(
        struct _RTL_CRITICAL_SECTION *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *p_Type; // rbx
  _QWORD *v8; // r14
  __m128i *v9; // rcx
  unsigned __int64 v10; // rax
  _DWORD *v11; // rcx
  _QWORD *LockSemaphore; // rax
  PROPVARIANT *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // rcx
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+40h] [rbp-78h] BYREF
  struct _GUID *v21; // [rsp+48h] [rbp-70h] BYREF
  int v22[2]; // [rsp+50h] [rbp-68h] BYREF
  struct EffectPack *v23; // [rsp+58h] [rbp-60h] BYREF
  std::_Ref_count_base *v24; // [rsp+60h] [rbp-58h]
  const WCHAR *v25; // [rsp+68h] [rbp-50h] BYREF
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v27; // [rsp+80h] [rbp-38h]
  __int128 v28; // [rsp+88h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = this + 8;
  EnterCriticalSection(this + 8);
  v20 = v4;
  p_Type = &this[9].DebugInfo->Type;
  v8 = *(_QWORD **)&this[9].LockCount;
  while ( p_Type != v8 )
  {
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v23, p_Type);
    v9 = (__m128i *)*((_QWORD *)v23 + 196);
    v10 = v9->m128i_i64[0] - *(_QWORD *)&a2->Data1;
    if ( !v10 )
      v10 = _mm_srli_si128(*v9, 8).m128i_u64[0] - *(_QWORD *)a2->Data4;
    if ( !v10 )
    {
      v11 = *(_DWORD **)&this[207].LockCount;
      if ( *v11 > 5u )
      {
        v25 = *(const WCHAR **)&this[1].LockCount;
        LockSemaphore = this[9].LockSemaphore;
        if ( LockSemaphore )
        {
          v28 = *(_OWORD *)LockSemaphore[196];
          v13 = (PROPVARIANT *)&v28;
        }
        else
        {
          *(GUID *)pvar = GUID_00000000_0000_0000_0000_000000000000;
          v13 = pvar;
        }
        v21 = (struct _GUID *)v13;
        *(_QWORD *)v22 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
          (int)v11,
          (int)&unk_1801B01B3,
          v5,
          v6,
          (__int64 *)v22,
          (__int64 *)&v21,
          &v25);
      }
      v14 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists((CEndpointCharacteristics *)this);
      v15 = v14;
      if ( v14 >= 0 )
      {
        *(_OWORD *)pvar = 0LL;
        v27 = 0LL;
        LOWORD(pvar[0]) = 0;
        v17 = (*(__int64 (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)&this[2].LockCount
                                                                                    + 48LL))(
                *(_QWORD *)&this[2].LockCount,
                &PKEY_AudioEndpoint_Disable_SysFx,
                pvar);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1605LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v17);
        PropVariantClear(pvar);
        v18 = CEndpointCharacteristics::SetCurrentEffectPackInternal(this, &v23);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1608LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v18);
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x63F,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v14);
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
        return v15;
      }
    }
    if ( v24 )
      std::_Ref_count_base::_Decref(v24);
    p_Type += 2;
  }
  v19 = *(_DWORD **)&this[207].LockCount;
  if ( *v19 > 5u )
  {
    *(_QWORD *)v22 = *(_QWORD *)&this[1].LockCount;
    v21 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
      (int)v19,
      (int)&unk_1801B015B,
      v5,
      v6,
      (__int64 *)&v21,
      (const WCHAR **)v22);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
  return 2147942487LL;
}
