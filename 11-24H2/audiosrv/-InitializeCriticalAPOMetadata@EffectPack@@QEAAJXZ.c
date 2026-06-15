/*
 * XREFs of ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x180134DB4
 * Callers:
 *     ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x180138C40 (-UpdateAPOEnableStatus@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002FFD4 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800327CC (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032E38 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180033CA0 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180035780 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003A750 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?FindCriticalAPO@EffectPack@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x180134004 (-FindCriticalAPO@EffectPack@@AEAAHPEAUIAudioSystemEffects2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::InitializeCriticalAPOMetadata(EffectPack *this)
{
  int StreamEffect; // r14d
  unsigned int v3; // edi
  __int64 *v4; // rax
  int SupportedProcessingModes; // eax
  unsigned int v6; // esi
  signed int i; // esi
  EffectPack *v8; // rcx
  unsigned int v9; // edi
  __int64 *v10; // rax
  int v11; // eax
  signed int j; // esi
  EffectPack *v13; // rcx
  unsigned int k; // edi
  EffectPack *v16; // rcx
  struct IAudioSystemEffects2 *v17; // [rsp+48h] [rbp-19h] BYREF
  __int64 v18; // [rsp+50h] [rbp-11h] BYREF
  __int64 v19; // [rsp+58h] [rbp-9h]
  struct _GUID v20; // [rsp+68h] [rbp+7h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v21[4]; // [rsp+78h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  StreamEffect = 0;
  v21[0] = eHostProcessConnector;
  v21[1] = eOffloadConnector;
  v21[2] = eKeywordDetectorConnector;
  *((_DWORD *)this + 377) = 1;
  v3 = 0;
LABEL_2:
  if ( v3 < 3 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v4 = (__int64 *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 180, v3);
    SupportedProcessingModes = SystemEffectDescriptor::GetSupportedProcessingModes(v4, &v18, 1);
    v6 = SupportedProcessingModes;
    if ( SupportedProcessingModes < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x331,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SupportedProcessingModes);
      goto LABEL_22;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= (int)v19 )
      {
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
        ++v3;
        goto LABEL_2;
      }
      v17 = 0LL;
      v20 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v18, i);
      StreamEffect = EffectPack::GetStreamEffect((unsigned __int64)this, &v20, 1, v21[v3], 0LL, 0LL, &v17);
      if ( StreamEffect >= 0 && v17 && (unsigned int)EffectPack::FindCriticalAPO(v8, v17) )
        break;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    }
    *((_DWORD *)this + 373) = 1;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
  }
  v9 = 0;
LABEL_13:
  if ( v9 < 3 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v10 = (__int64 *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 182, v9);
    v11 = SystemEffectDescriptor::GetSupportedProcessingModes(v10, &v18, 1);
    v6 = v11;
    if ( v11 >= 0 )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= (int)v19 )
        {
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
          ++v9;
          goto LABEL_13;
        }
        v17 = 0LL;
        v20 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)&v18,
                                 j);
        StreamEffect = EffectPack::GetModeEffect((unsigned __int64)this, &v20, 1u, v21[v9], 0LL, 0LL, &v17);
        if ( StreamEffect >= 0 && v17 && (unsigned int)EffectPack::FindCriticalAPO(v13, v17) )
          break;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
      }
      *((_DWORD *)this + 374) = 1;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
      goto LABEL_25;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x346,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v11);
LABEL_22:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
    return v6;
  }
LABEL_25:
  for ( k = 0; k < 3; ++k )
  {
    v17 = 0LL;
    StreamEffect = EffectPack::GetEndpointEffect(this, 1LL, v21[k], 0LL, 0LL, &v17);
    if ( StreamEffect >= 0 && v17 && (unsigned int)EffectPack::FindCriticalAPO(v16, v17) )
    {
      *((_DWORD *)this + 375) = 1;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
      break;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
  }
  *((_QWORD *)this + 188) = 1LL;
  return (unsigned int)StreamEffect;
}
