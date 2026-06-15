/*
 * XREFs of ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180040B98
 * Callers:
 *     _lambda_aa1414ab8e95a4429593081bb8a30d1f_::operator() @ 0x1801298F4 (_lambda_aa1414ab8e95a4429593081bb8a30d1f_--operator().c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18012E6D0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x1800056A4 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_G.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetLastSetEffectPackId@CEndpointCharacteristics@@AEBA?AU_GUID@@XZ @ 0x180041014 (-GetLastSetEffectPackId@CEndpointCharacteristics@@AEBA-AU_GUID@@XZ.c)
 *     ?PersistLastSetEffectPack@CEndpointCharacteristics@@AEAAXU_GUID@@@Z @ 0x1800410DC (-PersistLastSetEffectPack@CEndpointCharacteristics@@AEAAXU_GUID@@@Z.c)
 *     ??4?$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800411B4 (--4-$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x180041234 (-ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapSz@G@@@Z @ 0x18004C764 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvi.c)
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800A4994 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z @ 0x18012B290 (-CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x18012BCE8 (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z @ 0x1801300B8 (-UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::SetCurrentEffectPackInternal(
        CEndpointCharacteristics *this,
        struct EffectPack **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  int v5; // r8d
  int v6; // r9d
  _DWORD *v7; // rcx
  __int64 v8; // rax
  struct _GUID *v9; // rax
  struct _GUID *LastSetEffectPackId; // r8
  __m128i *v11; // rdx
  unsigned __int64 v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  int v17; // esi
  __m128i v18; // xmm0
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // esi
  const char *v22; // r9
  __int64 result; // rax
  int updated; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int EffectPackContexts; // eax
  int v30; // eax
  int v31; // [rsp+20h] [rbp-98h]
  __int64 v32; // [rsp+40h] [rbp-78h] BYREF
  int v33[2]; // [rsp+48h] [rbp-70h] BYREF
  int v34[2]; // [rsp+50h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+58h] [rbp-60h] BYREF
  struct _GUID v36; // [rsp+60h] [rbp-58h] BYREF
  struct _GUID v37; // [rsp+70h] [rbp-48h] BYREF
  __int128 v38; // [rsp+80h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 320);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 8);
  v35 = v4;
  v7 = (_DWORD *)*((_QWORD *)this + 1036);
  if ( *v7 > 5u )
  {
    v32 = *((_QWORD *)this + 6);
    v8 = *((_QWORD *)this + 48);
    if ( v8 )
    {
      v38 = *(_OWORD *)*(_QWORD *)(v8 + 1568);
      v9 = (struct _GUID *)&v38;
    }
    else
    {
      v37 = GUID_00000000_0000_0000_0000_000000000000;
      v9 = &v37;
    }
    *(_QWORD *)v33 = v9;
    v36 = *(struct _GUID *)*((_QWORD *)*a2 + 196);
    *(_QWORD *)v34 = &v36;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
      (_DWORD)v7,
      (unsigned int)&unk_1801A51D6,
      v5,
      v6,
      (__int64)v34,
      (__int64)v33,
      (__int64)&v32);
  }
  try
  {
    LastSetEffectPackId = CEndpointCharacteristics::GetLastSetEffectPackId(this, &v36);
    v11 = (__m128i *)*((_QWORD *)*a2 + 196);
    v12 = v11->m128i_i64[0] - *(_QWORD *)&LastSetEffectPackId->Data1;
    if ( !v12 )
      v12 = _mm_srli_si128(*v11, 8).m128i_u64[0] - *(_QWORD *)LastSetEffectPackId->Data4;
    if ( v12 )
    {
      v13 = (_DWORD *)*((_QWORD *)this + 1036);
      if ( *v13 > 5u )
      {
        *(_QWORD *)v34 = CEndpointCharacteristics::GetLastSetEffectPackId(this, &v37);
        v36 = *(struct _GUID *)*((_QWORD *)*a2 + 196);
        *(_QWORD *)v33 = &v36;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
          (int)v13,
          (int)&unk_1801A5171,
          v14,
          v15,
          v33,
          (__int64 *)v34);
      }
      v16 = ClearMixFormatCache(*((struct IPropertyStore **)this + 9), 1, 1);
      v17 = v16;
      if ( v16 >= 0 )
        v17 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1BD1,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v16);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x667,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v17,
          v31);
      v18 = *(__m128i *)*((_QWORD *)*a2 + 196);
      v19 = v18.m128i_i64[0] - DRIVER_APO_EFFECTPACK_ID;
      if ( v18.m128i_i64[0] == DRIVER_APO_EFFECTPACK_ID )
        v19 = _mm_srli_si128(v18, 8).m128i_u64[0] - 0x10FBC52DF1C269BBLL;
      if ( v19 )
      {
        v20 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists(this);
        v21 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x66D,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v20);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v35);
          return v21;
        }
        updated = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
                    this,
                    *(struct _GUID **)(*((_QWORD *)*a2 + 196) + 1320LL),
                    *(_DWORD *)(*((_QWORD *)*a2 + 196) + 1312LL),
                    (const unsigned __int16 *)(*((_QWORD *)*a2 + 196) + 544LL));
        if ( updated < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x672,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)updated,
            v31);
        v25 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
                this,
                *(struct _GUID **)(*((_QWORD *)*a2 + 196) + 1352LL),
                *(_DWORD *)(*((_QWORD *)*a2 + 196) + 1344LL),
                (const unsigned __int16 *)(*((_QWORD *)*a2 + 196) + 544LL));
        if ( v25 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x675,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v25,
            v31);
        v26 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
                this,
                *(struct _GUID **)(*((_QWORD *)*a2 + 196) + 1384LL),
                *(_DWORD *)(*((_QWORD *)*a2 + 196) + 1376LL),
                (const unsigned __int16 *)(*((_QWORD *)*a2 + 196) + 544LL));
        if ( v26 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x678,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v26,
            v31);
        v27 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
                this,
                *(struct _GUID **)(*((_QWORD *)*a2 + 196) + 1416LL),
                *(_DWORD *)(*((_QWORD *)*a2 + 196) + 1408LL),
                (const unsigned __int16 *)(*((_QWORD *)*a2 + 196) + 544LL));
        if ( v27 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x67C,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v27,
            v31);
        v28 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
                this,
                *(struct _GUID **)(*((_QWORD *)*a2 + 196) + 1448LL),
                *(_DWORD *)(*((_QWORD *)*a2 + 196) + 1440LL),
                (const unsigned __int16 *)(*((_QWORD *)*a2 + 196) + 544LL));
        if ( v28 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x67F,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v28,
            v31);
        EffectPackContexts = CEndpointCharacteristics::CreateEffectPackContexts(this, *a2);
        if ( EffectPackContexts < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x682,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)EffectPackContexts,
            v31);
      }
    }
    v30 = EffectPack::DeriveEffectiveConnectorAndEffectPackCapabilities(*a2);
    if ( v30 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x687,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v30,
        v31);
    std::shared_ptr<EffectPack>::operator=((char *)this + 384, a2);
    v36 = *(struct _GUID *)*((_QWORD *)*a2 + 196);
    CEndpointCharacteristics::PersistLastSetEffectPack(this, &v36);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 56LL))(
      g_policyConfigInternal,
      *((_QWORD *)this + 6));
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x692,
                           (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                           v22);
  }
  return result;
}
