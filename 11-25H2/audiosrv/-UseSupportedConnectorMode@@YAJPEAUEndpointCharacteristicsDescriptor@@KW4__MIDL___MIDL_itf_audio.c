/*
 * XREFs of ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18008D0EC
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x180035B48 (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?IsSWAPOFallbackSupported@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004DB58 (-IsSWAPOFallbackSupported@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_00.c)
 *     ?IsConnectorModeSupportedForSWAPOFallback@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180077E74 (-IsConnectorModeSupportedForSWAPOFallback@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpo.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_cfabe4c61bc15f8a85c19fe8f19b6830___ @ 0x180105474 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180105474.c)
 *     ?AreResourcesAvailableForStream@@YAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x180105E90 (-AreResourcesAvailableForStream@@YAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MI.c)
 *     ?GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAI@Z @ 0x18012BFD8 (-GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall UseSupportedConnectorMode(
        CEndpointCharacteristics **a1,
        unsigned int a2,
        unsigned int a3,
        struct _GUID *a4,
        int a5,
        bool *a6)
{
  CEndpointStoreCache *v10; // rcx
  int EndpointStore; // eax
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  struct CEndpointStore *v15; // rbx
  int v16; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // edx
  int AvailableConnectorCount; // eax
  unsigned int v19; // eax
  char v21; // [rsp+30h] [rbp-79h] BYREF
  char v22; // [rsp+31h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-75h] BYREF
  __int128 v24; // [rsp+38h] [rbp-71h] BYREF
  __int64 v25; // [rsp+48h] [rbp-61h]
  struct CEndpointStore *v26[2]; // [rsp+50h] [rbp-59h] BYREF
  struct _GUID v27; // [rsp+60h] [rbp-49h] BYREF
  char *v28; // [rsp+70h] [rbp-39h]
  struct _GUID v29; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v30[96]; // [rsp+90h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  v29 = *a4;
  if ( (unsigned int)EffectPack::IsConnectorModeSupported(a1[1], a3, 0, &v29) )
  {
    *a6 = 1;
    if ( a5 && EffectPack::IsSWAPOFallbackSupported(a1[1], a3) )
    {
      v26[0] = 0LL;
      EndpointStore = CEndpointStoreCache::GetEndpointStore(v10, *((const unsigned __int16 **)*a1 + 6), v26);
      v12 = EndpointStore;
      if ( EndpointStore < 0 )
      {
        v13 = (unsigned int)EndpointStore;
        v14 = 699LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)v13);
LABEL_26:
        wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)v26);
        return v12;
      }
      v21 = 0;
      v22 = 0;
      v15 = v26[0];
      (*(void (__fastcall **)(_QWORD, struct _GUID *))(**((_QWORD **)v26[0] + 13) + 128LL))(
        *((_QWORD *)v26[0] + 13),
        &v29);
      v24 = 0LL;
      v25 = 0LL;
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v15 + 13) + 96LL))(
              *((_QWORD *)v15 + 13),
              &v24);
      v12 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C4,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v16);
        if ( (_QWORD)v24 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            (__int64 *)v24,
            *((__int64 **)&v24 + 1));
          std::_Deallocate<16,0>((char *)v24, (const struct std::nothrow_t *)((v25 - v24) & 0xFFFFFFFFFFFFFFF8uLL));
          v24 = 0LL;
          v25 = 0LL;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v29);
        goto LABEL_26;
      }
      *(_QWORD *)&v27.Data1 = &v21;
      *(_QWORD *)v27.Data4 = a4;
      v28 = &v22;
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_cfabe4c61bc15f8a85c19fe8f19b6830___(
        v30,
        v24,
        *((_QWORD *)&v24 + 1),
        &v27);
      if ( (_QWORD)v24 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v24,
          *((__int64 **)&v24 + 1));
        std::_Deallocate<16,0>((char *)v24, (const struct std::nothrow_t *)((v25 - v24) & 0xFFFFFFFFFFFFFFF8uLL));
        v24 = 0LL;
        v25 = 0LL;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v29);
      if ( !v22 )
      {
        v23 = 0;
        AvailableConnectorCount = CEndpointCharacteristics::GetAvailableConnectorCount(*a1, v17, &v23);
        v12 = AvailableConnectorCount;
        if ( AvailableConnectorCount < 0 )
        {
          v13 = (unsigned int)AvailableConnectorCount;
          v14 = 721LL;
          goto LABEL_25;
        }
        v27 = *a4;
        if ( EffectPack::IsConnectorModeSupportedForSWAPOFallback(a1[1], a3, &v27) )
        {
          v19 = v23;
          if ( v21 )
            v19 = ++v23;
          if ( v19 <= 1
            || (v27 = *a4,
                !AreResourcesAvailableForStream(
                   (struct EndpointCharacteristicsDescriptor *)a1,
                   &v27,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                   a2,
                   0)) )
          {
            *a6 = 0;
          }
        }
        else if ( !v21 && v23 <= 1 )
        {
          v12 = -2004287478;
          v13 = 2290679818LL;
          v14 = 747LL;
          goto LABEL_25;
        }
      }
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)v26);
    }
  }
  else
  {
    *a6 = 0;
  }
  return 0LL;
}
