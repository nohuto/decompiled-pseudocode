/*
 * XREFs of ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x18008FF40
 * Callers:
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800A4994 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180035CD0 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180036160 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18003E41C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003E4E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18004E258 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x18004E3B0 (--A-$span@H$0-0@gsl@@QEBAAEAH_K@Z.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x180061E80 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceClarityEffectPack@@@details@wil@@QEAA_NXZ @ 0x1801318B4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceClarityEffectPack@@@details@.c)
 */

__int64 __fastcall EffectPack::CopyCapabilitiesFromEndpoint(EffectPack *this)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 *i; // rbp
  int v4; // ebx
  _DWORD *v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  struct _GUID *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  CAudioSignalProcessingModeArray *v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  CAudioSignalProcessingModeArray *v15; // rdi
  const struct _GUID *v16; // rbx
  __int64 v17; // rax
  CAudioSignalProcessingModeArray *v18; // rdi
  const struct _GUID *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // r8
  _QWORD *v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r10
  _QWORD *v26; // rdx
  struct _GUID v27; // [rsp+30h] [rbp-48h] BYREF
  struct _GUID v28; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = 0LL;
  for ( i = (unsigned __int64 *)((char *)this + 1616); v1 < *i; *v5 = v4 )
  {
    v4 = *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(*((_QWORD *)this + 198) + 120LL), v1);
    v5 = (_DWORD *)gsl::span<int,-1>::operator[](i, v1++);
  }
  v6 = 0LL;
  if ( !*((_QWORD *)this + 214) )
  {
LABEL_20:
    v28 = 0LL;
    EffectPack::GetDefaultConnectorProcessingModeConfiguration(this, 0, &v28, 0LL, 0LL);
    v27 = v28;
    EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(this, &v28, 0, &v27);
    v21 = *((_QWORD *)this + 198);
    v22 = *(_QWORD **)(v21 + 280);
    v23 = *(_QWORD **)(v21 + 272);
    if ( v23 != v22 )
    {
      v24 = *(_QWORD *)v28.Data4;
      v25 = *(_QWORD *)&v28.Data1;
      do
      {
        v26 = (_QWORD *)*v23;
        if ( *(_QWORD *)*v23 == v25 && v26[1] == v24 && v26[3] == v26[2] )
          *(_QWORD *)(*((_QWORD *)this + 198) + 240LL) = 0LL;
        ++v23;
      }
      while ( v23 != v22 );
    }
    return 0LL;
  }
  while ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceClarityEffectPack>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_VoiceClarityEffectPack>::GetImpl'::`2'::impl) )
  {
    if ( **((_QWORD **)this + 196) == DRIVER_APO_EFFECTPACK_ID
      && _mm_srli_si128(*(__m128i *)*((_QWORD *)this + 196), 8).m128i_u64[0] == 0x10FBC52DF1C269BBLL
      || *(int *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                    (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
                    v6)
                + 8) <= 0 )
    {
      v15 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                                 (unsigned __int64 *)this + 214,
                                                 v6);
      v16 = *(const struct _GUID **)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                      (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
                                      v6);
      v17 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
              v6);
      v12 = CAudioSignalProcessingModeArray::AddMultiple(v15, *(_DWORD *)(v17 + 8), v16);
      if ( v12 < 0 )
      {
        v13 = 2356LL;
        goto LABEL_15;
      }
    }
    else
    {
      v7 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
             (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
             v6);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v7,
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
      {
        v9 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
               (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
               v6);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             v9,
                             &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
        {
          v10 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                  (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
                  v6);
          v8 = (struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v10, 0);
        }
        else
        {
          v8 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        }
      }
      else
      {
        v8 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
      v28 = *v8;
      v11 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                                 (unsigned __int64 *)this + 214,
                                                 v6);
      v12 = CAudioSignalProcessingModeArray::AddMultiple(v11, 1u, &v28);
      if ( v12 < 0 )
      {
        v13 = 2351LL;
        goto LABEL_15;
      }
    }
LABEL_19:
    if ( ++v6 >= *((_QWORD *)this + 214) )
      goto LABEL_20;
  }
  v18 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                             (unsigned __int64 *)this + 214,
                                             v6);
  v19 = *(const struct _GUID **)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                  (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
                                  v6);
  v20 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
          (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
          v6);
  v12 = CAudioSignalProcessingModeArray::AddMultiple(v18, *(_DWORD *)(v20 + 8), v19);
  if ( v12 >= 0 )
    goto LABEL_19;
  v13 = 2362LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
