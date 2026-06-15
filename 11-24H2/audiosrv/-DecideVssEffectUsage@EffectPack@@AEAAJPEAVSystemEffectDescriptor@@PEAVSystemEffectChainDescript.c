/*
 * XREFs of ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003B694
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_634ef5bcbc861a4dce38fda21ab07393__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x18006F0B0 (std--_Func_impl_no_alloc__lambda_634ef5bcbc861a4dce38fda21ab07393__long_SystemEffectDescriptor__.c)
 *     std::_Func_impl_no_alloc__lambda_0d5767a0eff5e346db70c56f41998fe8__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180139890 (std--_Func_impl_no_alloc__lambda_0d5767a0eff5e346db70c56f41998fe8__long_SystemEffec_ea_180139890.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180032474 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180039868 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003A750 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18003AFBC (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18003C464 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _lambda_8dedf90f1f70af288e66d072af95fd4f_::_lambda_8dedf90f1f70af288e66d072af95fd4f_ @ 0x1801301B0 (_lambda_8dedf90f1f70af288e66d072af95fd4f_--_lambda_8dedf90f1f70af288e66d072af95fd4f_.c)
 *     _lambda_09a4ae26156b72c7f708229d4da24567_::operator() @ 0x180130A70 (_lambda_09a4ae26156b72c7f708229d4da24567_--operator().c)
 *     _lambda_8dedf90f1f70af288e66d072af95fd4f_::operator() @ 0x180131CB4 (_lambda_8dedf90f1f70af288e66d072af95fd4f_--operator().c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x180134D48 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::DecideVssEffectUsage(
        CEndpointCharacteristics **this,
        struct SystemEffectDescriptor *a2,
        struct SystemEffectChainDescriptor *a3,
        unsigned int a4)
{
  unsigned __int64 v4; // rsi
  __int64 v7; // rdx
  unsigned int VirtualSurroundEffectMode; // edi
  signed int v9; // r12d
  unsigned __int64 *v10; // r13
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
  unsigned int v24; // [rsp+30h] [rbp-39h] BYREF
  __int64 v25; // [rsp+38h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-29h] BYREF
  __int64 v27; // [rsp+48h] [rbp-21h] BYREF
  struct SystemEffectDescriptor *v28; // [rsp+50h] [rbp-19h]
  _BYTE v29[16]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v30; // [rsp+68h] [rbp-1h] BYREF

  v4 = (int)a4;
  v28 = a2;
  v24 = a4;
  lambda_8dedf90f1f70af288e66d072af95fd4f_::_lambda_8dedf90f1f70af288e66d072af95fd4f_(v29, this, &v24);
  VirtualSurroundEffectMode = CEndpointCharacteristics::GetVirtualSurroundEffectMode(*(CEndpointCharacteristics **)(v7 + 1584));
  if ( VirtualSurroundEffectMode )
  {
    if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this[198]) )
    {
      v24 = 0;
      CEndpointCharacteristics::GetSpatialRenderingMode(this[198], &v24);
      if ( v24 != 1 && v24 - 3 > 3 )
        VirtualSurroundEffectMode = 0;
    }
  }
  v9 = 0;
  if ( *((int *)a3 + 2) > 0 )
  {
    v10 = (unsigned __int64 *)(this + 214);
    do
    {
      v30 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)a3, v9);
      v11 = VirtualSurroundEffectMode != 0;
      if ( VirtualSurroundEffectMode == 2 )
      {
        v25 = 0LL;
        v27 = 0LL;
        pv = 0LL;
        v24 = 0;
        if ( (int)lambda_8dedf90f1f70af288e66d072af95fd4f_::operator()(v29, v28, &v30, &v25, &v27) >= 0 )
        {
          v12 = v27;
          if ( v27
            && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v27 + 24LL))(
                 v27,
                 &pv,
                 &v24,
                 0LL) >= 0 )
          {
            for ( i = 0; i < v24; ++i )
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
          if ( v25
            && ((unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v12, v25, 48000LL, 6LL)
             || (unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v16, v25, 48000LL, 8LL)
             || (unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v17, v25, 44100LL, 6LL)
             || (unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v18, v25, 44100LL, 8LL)) )
          {
LABEL_26:
            v11 = 0;
          }
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
      }
      v19 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v10, v4);
      for ( j = 0; j < *(_DWORD *)(v19 + 8); ++j )
      {
        v21 = (_QWORD *)(*(_QWORD *)v19 + 16LL * j);
        v22 = *v21 - v30;
        if ( *v21 == (_QWORD)v30 )
          v22 = v21[1] - *((_QWORD *)&v30 + 1);
        if ( !v22 )
          goto LABEL_35;
      }
      j = -1;
LABEL_35:
      SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        (__int64)v28,
        a3,
        v11,
        (unsigned __int64)&unk_18018F920 & -(__int64)v11,
        1,
        j != -1);
      ++v9;
    }
    while ( v9 < *((_DWORD *)a3 + 2) );
  }
  *((_DWORD *)a3 + 4) = 28;
  return 0LL;
}
