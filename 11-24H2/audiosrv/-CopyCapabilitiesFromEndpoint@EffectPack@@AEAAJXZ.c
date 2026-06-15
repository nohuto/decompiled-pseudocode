/*
 * XREFs of ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x18008C1D4
 * Callers:
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800A0DA4 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180030F10 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18003A68C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003A750 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18003AFBC (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18005473C (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x18005CC64 (--A-$span@H$0-0@gsl@@QEBAAEAH_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall EffectPack::CopyCapabilitiesFromEndpoint(EffectPack *this)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 *i; // rbp
  int v4; // ebx
  _DWORD *v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _GUID *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  CAudioSignalProcessingModeArray *v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  CAudioSignalProcessingModeArray *v16; // rdi
  const struct _GUID *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // r8
  _QWORD *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r10
  _QWORD *v24; // rdx
  struct _GUID v25; // [rsp+30h] [rbp-48h] BYREF
  struct _GUID v26; // [rsp+40h] [rbp-38h] BYREF
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
LABEL_18:
    v26 = 0LL;
    EffectPack::GetDefaultConnectorProcessingModeConfiguration(this, 0, &v26, 0LL, 0LL);
    v25 = v26;
    EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(this, &v26, 0, &v25);
    v19 = *((_QWORD *)this + 198);
    v20 = *(_QWORD **)(v19 + 280);
    v21 = *(_QWORD **)(v19 + 272);
    if ( v21 != v20 )
    {
      v22 = *(_QWORD *)v26.Data4;
      v23 = *(_QWORD *)&v26.Data1;
      do
      {
        v24 = (_QWORD *)*v21;
        if ( *(_QWORD *)*v21 == v23 && v24[1] == v22 && v24[3] == v24[2] )
          *(_QWORD *)(*((_QWORD *)this + 198) + 240LL) = 0LL;
        ++v21;
      }
      while ( v21 != v20 );
    }
    return 0LL;
  }
  while ( **((_QWORD **)this + 196) != DRIVER_APO_EFFECTPACK_ID
       || _mm_srli_si128(*(__m128i *)*((_QWORD *)this + 196), 8).m128i_u64[0] != 0x10FBC52DF1C269BBLL )
  {
    if ( *(int *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                    (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
                    v6)
                + 8) <= 0 )
      break;
    v7 = *((_QWORD *)this + 198);
    if ( *(_BYTE *)(v7 + 8235) )
      break;
    v8 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(v7 + 216), v6);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v8,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      v10 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
              v6);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v10,
                           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
      {
        v11 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
                v6);
        v9 = (struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v11, 0);
      }
      else
      {
        v9 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
    }
    else
    {
      v9 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    v26 = *v9;
    v12 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                               (unsigned __int64 *)this + 214,
                                               v6);
    v13 = CAudioSignalProcessingModeArray::AddMultiple(v12, 1u, &v26);
    if ( v13 < 0 )
    {
      v14 = 2371LL;
      goto LABEL_15;
    }
LABEL_17:
    if ( ++v6 >= *((_QWORD *)this + 214) )
      goto LABEL_18;
  }
  v16 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                             (unsigned __int64 *)this + 214,
                                             v6);
  v17 = *(const struct _GUID **)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                  (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
                                  v6);
  v18 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
          (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
          v6);
  v13 = CAudioSignalProcessingModeArray::AddMultiple(v16, *(_DWORD *)(v18 + 8), v17);
  if ( v13 >= 0 )
    goto LABEL_17;
  v14 = 2376LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
