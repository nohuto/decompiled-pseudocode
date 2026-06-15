/*
 * XREFs of _lambda_aa1414ab8e95a4429593081bb8a30d1f_::operator() @ 0x1801298F4
 * Callers:
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x1800839A8 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800057E0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800366C0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180040B98 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 *     ??4?$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800411B4 (--4-$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18012E6D0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_aa1414ab8e95a4429593081bb8a30d1f_::operator()(__int64 a1)
{
  CEndpointCharacteristics *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  int *v5; // r13
  GUID *v6; // rdi
  int v7; // eax
  unsigned int v8; // r15d
  _QWORD *v9; // r12
  _QWORD *v10; // rdi
  __int128 v11; // kr00_16
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r14d
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  struct _GUID *v17; // rcx
  int v18; // eax
  struct EffectPack **v20; // rdi
  _QWORD *v21; // rdx
  int v22; // eax
  unsigned int v23; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v24[3]; // [rsp+4Ch] [rbp-35h] BYREF
  struct _GUID v25; // [rsp+58h] [rbp-29h] BYREF
  LPCOLESTR lpsz[2]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v27; // [rsp+78h] [rbp-9h]
  struct _GUID v28; // [rsp+88h] [rbp+7h] BYREF
  struct _GUID v29; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v2 = *(CEndpointCharacteristics **)a1;
  if ( CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)a1) )
  {
    *(_OWORD *)lpsz = 0LL;
    v27 = 0LL;
    v3 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, LPCOLESTR *))(**((_QWORD **)v2 + 9) + 40LL))(
           *((_QWORD *)v2 + 9),
           &PKEY_AudioEndpoint_UserSelectedEffectPack,
           lpsz);
    v4 = v3;
    v5 = *(int **)(a1 + 8);
    *v5 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E1,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v3);
LABEL_29:
      PropVariantClear((PROPVARIANT *)lpsz);
      return v4;
    }
    if ( LOWORD(lpsz[0]) == 31 )
    {
      v6 = *(GUID **)(a1 + 16);
      if ( CLSIDFromString(lpsz[1], v6) >= 0 )
      {
        v25 = *v6;
        v7 = CEndpointCharacteristics::SetCurrentEffectPackInternal(v2, &v25);
        *v5 = v7;
        if ( v7 >= 0 )
        {
LABEL_28:
          v4 = 0;
          goto LABEL_29;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1775LL,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v7);
      }
    }
    v8 = 0;
    v9 = (_QWORD *)*((_QWORD *)v2 + 46);
    v10 = (_QWORD *)*((_QWORD *)v2 + 45);
    if ( v10 != v9 )
    {
      v11 = PKEY_FX_EffectPack_Schema_V1;
      do
      {
        v12 = *(_QWORD *)(*v10 + 1568LL);
        if ( *(_BYTE *)(v12 + 1917) )
        {
          v13 = *(_QWORD *)(v12 + 1936) - v11;
          if ( !v13 )
            v13 = *(_QWORD *)(v12 + 1944) - *((_QWORD *)&v11 + 1);
          v14 = *(_DWORD *)(v12 + 1952) + 10000;
          if ( v13 )
            v14 = *(_DWORD *)(v12 + 1952);
          v15 = (_DWORD *)*((_QWORD *)v2 + 1036);
          if ( v14 >= v8 )
          {
            if ( *v15 > 5u )
            {
              v23 = v8;
              v24[0] = v14;
              v29 = *(struct _GUID *)v12;
              *(_QWORD *)&v25.Data1 = &v29;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (int)v15,
                (int)&unk_1801A4F12,
                *((__int64 *)&v11 + 1),
                v11,
                &v25,
                (__int64)v24,
                (__int64)&v23);
            }
            std::shared_ptr<EffectPack>::operator=(*(_QWORD **)(a1 + 24), v10);
            v8 = v14;
            goto LABEL_21;
          }
          if ( *v15 > 5u )
          {
            v24[0] = v8;
            v23 = v14;
            v28 = *(struct _GUID *)v12;
            *(_QWORD *)&v25.Data1 = &v28;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (int)v15,
              (int)&unk_1801A4FCC,
              *((__int64 *)&v11 + 1),
              v11,
              &v25,
              (__int64)&v23,
              (__int64)v24);
LABEL_21:
            v11 = PKEY_FX_EffectPack_Schema_V1;
          }
        }
        v10 += 2;
      }
      while ( v10 != v9 );
    }
    if ( !**(_QWORD **)(a1 + 24) )
    {
      v16 = *((_QWORD *)v2 + 50);
      if ( v16 )
      {
        v17 = *(struct _GUID **)(v16 + 1568);
        if ( *(_QWORD *)&v17[120].Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
          || *(_QWORD *)v17[120].Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
        {
          v28 = v17[120];
          v18 = CEndpointCharacteristics::SetCurrentEffectPackInternal(v2, &v28);
          *v5 = v18;
          if ( v18 >= 0 )
            goto LABEL_28;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1852LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v18);
        }
      }
    }
    PropVariantClear((PROPVARIANT *)lpsz);
  }
  v20 = *(struct EffectPack ***)(a1 + 24);
  if ( *v20 )
    goto LABEL_38;
  v21 = (_QWORD *)*((_QWORD *)v2 + 45);
  if ( *((_QWORD *)v2 + 46) - (_QWORD)v21 == 16LL
    && __PAIR128__(_mm_srli_si128(*(__m128i *)*(_QWORD *)(*v21 + 1568LL), 8).m128i_u64[0], **(_QWORD **)(*v21 + 1568LL)) == *(_OWORD *)&CLSID_VOCAAudioEffectPackID )
  {
    std::shared_ptr<EffectPack>::operator=(*(_QWORD **)(a1 + 24), v21);
  }
  if ( *v20 || (std::shared_ptr<EffectPack>::operator=(v20, (_QWORD *)v2 + 50), *v20) )
  {
LABEL_38:
    v22 = CEndpointCharacteristics::SetCurrentEffectPackInternal(v2, v20);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1882LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v22);
  }
  return 0LL;
}
