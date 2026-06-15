/*
 * XREFs of ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003AA30
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_634ef5bcbc861a4dce38fda21ab07393__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180081890 (std--_Func_impl_no_alloc__lambda_634ef5bcbc861a4dce38fda21ab07393__long_SystemEffectDescriptor__.c)
 *     std::_Func_impl_no_alloc__lambda_0d5767a0eff5e346db70c56f41998fe8__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x1801307C0 (std--_Func_impl_no_alloc__lambda_0d5767a0eff5e346db70c56f41998fe8__long_SystemEffec_ea_1801307C0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180037234 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18003B800 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18003D5F4 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003E4E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18004E258 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _lambda_c4b06e3056b944e8c68b4f3e8aaba954_::_lambda_c4b06e3056b944e8c68b4f3e8aaba954_ @ 0x1801280EC (_lambda_c4b06e3056b944e8c68b4f3e8aaba954_--_lambda_c4b06e3056b944e8c68b4f3e8aaba954_.c)
 *     _lambda_09a4ae26156b72c7f708229d4da24567_::operator() @ 0x1801289A4 (_lambda_09a4ae26156b72c7f708229d4da24567_--operator().c)
 *     _lambda_c4b06e3056b944e8c68b4f3e8aaba954_::operator() @ 0x180129C8C (_lambda_c4b06e3056b944e8c68b4f3e8aaba954_--operator().c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x18012C7FC (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::DecideVssEffectUsage(
        CEndpointCharacteristics **this,
        struct SystemEffectDescriptor *a2,
        struct SystemEffectChainDescriptor *a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  unsigned int VirtualSurroundEffectMode; // edi
  unsigned int v9; // r12d
  char *v10; // r13
  bool v11; // bl
  __int64 v12; // rcx
  unsigned int i; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int j; // edx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v24; // [rsp+20h] [rbp-49h]
  unsigned int v25; // [rsp+30h] [rbp-39h] BYREF
  __int64 v26; // [rsp+38h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-29h] BYREF
  __int64 v28; // [rsp+48h] [rbp-21h] BYREF
  struct SystemEffectDescriptor *v29; // [rsp+50h] [rbp-19h]
  _BYTE v30[16]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v31; // [rsp+68h] [rbp-1h] BYREF

  v4 = (int)a4;
  v29 = a2;
  v25 = a4;
  lambda_c4b06e3056b944e8c68b4f3e8aaba954_::_lambda_c4b06e3056b944e8c68b4f3e8aaba954_(v30, this, &v25);
  VirtualSurroundEffectMode = CEndpointCharacteristics::GetVirtualSurroundEffectMode(*(CEndpointCharacteristics **)(v7 + 1584));
  if ( VirtualSurroundEffectMode )
  {
    if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this[198]) )
    {
      v25 = 0;
      CEndpointCharacteristics::GetSpatialRenderingMode(this[198], &v25);
      if ( v25 != 1 && v25 - 3 > 3 )
        VirtualSurroundEffectMode = 0;
    }
  }
  v9 = 0;
  if ( *((int *)a3 + 2) > 0 )
  {
    v10 = (char *)(this + 214);
    do
    {
      v31 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a3, v9);
      v11 = VirtualSurroundEffectMode != 0;
      if ( VirtualSurroundEffectMode == 2 )
      {
        v26 = 0LL;
        v28 = 0LL;
        pv = 0LL;
        v25 = 0;
        if ( (int)lambda_c4b06e3056b944e8c68b4f3e8aaba954_::operator()(v30, v29, &v31, &v26, &v28) >= 0 )
        {
          v12 = v28;
          if ( v28
            && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v28 + 24LL))(
                 v28,
                 &pv,
                 &v25,
                 0LL) >= 0 )
          {
            for ( i = 0; i < v25; ++i )
            {
              v12 = 2LL * i;
              v14 = *((_QWORD *)pv + 2 * i) - *(_QWORD *)&GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( !v14 )
                v14 = *((_QWORD *)pv + 2 * i + 1) - *(_QWORD *)GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v14 )
                goto LABEL_26;
              v15 = *((_QWORD *)pv + 2 * i) - *(_QWORD *)&GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( !v15 )
                v15 = *((_QWORD *)pv + 2 * i + 1) - *(_QWORD *)GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v15 )
                goto LABEL_26;
            }
          }
          if ( v26
            && ((unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v12, v26, 48000LL, 6LL)
             || (unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v16, v26, 48000LL, 8LL)
             || (unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v17, v26, 44100LL, 6LL)
             || (unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v18, v26, 44100LL, 8LL)) )
          {
LABEL_26:
            v11 = 0;
          }
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
      }
      v19 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v10, v4);
      for ( j = 0; j < *(_DWORD *)(v19 + 8); ++j )
      {
        v21 = (_QWORD *)(*(_QWORD *)v19 + 16LL * j);
        v22 = *v21 - v31;
        if ( *v21 == (_QWORD)v31 )
          v22 = v21[1] - *((_QWORD *)&v31 + 1);
        if ( !v22 )
          goto LABEL_35;
      }
      j = -1;
LABEL_35:
      LODWORD(v24) = 1;
      SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        v29,
        a3,
        v11,
        (unsigned __int64)&unk_180185740 & -(__int64)v11,
        v24,
        j != -1);
      ++v9;
    }
    while ( (signed int)v9 < *((_DWORD *)a3 + 2) );
  }
  *((_DWORD *)a3 + 4) = 28;
  return 0LL;
}
