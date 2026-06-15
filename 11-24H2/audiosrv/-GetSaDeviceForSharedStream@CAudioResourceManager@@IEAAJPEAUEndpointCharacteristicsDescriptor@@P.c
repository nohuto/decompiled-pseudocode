/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18009C858
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B94A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18000DC00 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800161E8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180016BF4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsConnectorModeSupportedForSWAPOFallback@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180067CB4 (-IsConnectorModeSupportedForSWAPOFallback@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18006FC50 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800A7F1C (memcmp_0.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_e4c7d3c53d0b0ab1b1215ef3bd828cfb___ @ 0x1800B5BB0 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IS.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_851455cfddf976de48a3a24cbb7d795f___ @ 0x1800B5ECC (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800B5ECC.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_d9d84050caa5b53617dd5fa562414e1b___ @ 0x1800B60B4 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800B60B4.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_dfe9f2424170ce2c515b33f0132d3a88___ @ 0x1800B616C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800B616C.c)
 *     _lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_::_lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_ @ 0x1800B63CC (_lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_--_lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_.c)
 *     _lambda_e71555c2ea4eb41c7555c95167e5b0eb_::_lambda_e71555c2ea4eb41c7555c95167e5b0eb_ @ 0x1800B63F0 (_lambda_e71555c2ea4eb41c7555c95167e5b0eb_--_lambda_e71555c2ea4eb41c7555c95167e5b0eb_.c)
 *     _lambda_dfe9f2424170ce2c515b33f0132d3a88_::_lambda_dfe9f2424170ce2c515b33f0132d3a88_ @ 0x1800B6404 (_lambda_dfe9f2424170ce2c515b33f0132d3a88_--_lambda_dfe9f2424170ce2c515b33f0132d3a88_.c)
 *     _lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_ @ 0x1800B66B8 (_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_--__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800B69B0 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800BF184 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescripto.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800C01B0 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     WPP_SF_P @ 0x1800C029C (WPP_SF_P.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        CAudioSessionManager *a10,
        char a11,
        char a12,
        __int64 a13)
{
  __int64 v15; // rdi
  __int64 v16; // rbx
  CEndpointStoreCache *v17; // rcx
  int EndpointStore; // eax
  signed int SaDeviceForPackagedApp; // ebx
  int v20; // eax
  bool v22; // di
  CEndpointStoreCache *v23; // rcx
  int v24; // r8d
  bool v25; // zf
  unsigned int v26; // eax
  __int64 v27; // rdx
  char v28; // si
  int v29; // eax
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rcx
  char v33; // r12
  _QWORD *v34; // rbx
  __int64 *v35; // rdi
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  unsigned __int16 *v39; // r14
  __int64 v40; // rsi
  const void *v41; // rax
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r12
  struct CEndpointStore *v49; // rdi
  char v50; // r14
  _QWORD *v51; // rbx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rbx
  int v57; // eax
  signed int v58; // esi
  int v59; // eax
  unsigned __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r12
  __int64 v64; // r14
  __int64 v65; // rsi
  unsigned int v66; // eax
  _QWORD *v67; // rax
  int v68; // edi
  int v69; // edi
  __int64 v70; // rax
  unsigned int v71; // edi
  __int64 v72; // rdx
  __int64 v73; // [rsp+48h] [rbp-B1h]
  __int128 v74; // [rsp+60h] [rbp-99h] BYREF
  __int64 v75; // [rsp+70h] [rbp-89h]
  __int64 *v76; // [rsp+78h] [rbp-81h] BYREF
  __int128 v77; // [rsp+80h] [rbp-79h] BYREF
  __int64 v78; // [rsp+90h] [rbp-69h]
  SaDeviceParams *v79; // [rsp+98h] [rbp-61h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-59h] BYREF
  struct CEndpointStore *v81; // [rsp+A8h] [rbp-51h] BYREF
  int v82[2]; // [rsp+B0h] [rbp-49h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-41h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-39h] BYREF
  __int64 v85; // [rsp+C8h] [rbp-31h] BYREF
  char v86[16]; // [rsp+D0h] [rbp-29h] BYREF
  struct _GUID v87; // [rsp+E0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+3Fh]

  v15 = a2;
  *(_QWORD *)v82 = a2;
  v85 = a7;
  v16 = a8;
  v83 = a8;
  v76 = (__int64 *)a13;
  v84 = a13;
  v87 = *(struct _GUID *)(a4 + 48);
  if ( EffectPack::IsConnectorModeSupportedForSWAPOFallback(*(EffectPack **)(a2 + 8), *(unsigned int *)(a4 + 8), &v87) )
  {
    v81 = 0LL;
    EndpointStore = CEndpointStoreCache::GetEndpointStore(
                      v17,
                      *(const unsigned __int16 **)(*(_QWORD *)v15 + 48LL),
                      &v81);
    SaDeviceForPackagedApp = EndpointStore;
    if ( EndpointStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)EndpointStore);
      goto LABEL_7;
    }
    v77 = 0LL;
    v78 = 0LL;
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v81 + 13) + 96LL))(*((_QWORD *)v81 + 13), &v77);
    SaDeviceForPackagedApp = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v20);
      if ( (_QWORD)v77 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v77, *((__int64 *)&v77 + 1));
        std::_Deallocate<16,0>((char *)v77, (const struct std::nothrow_t *)((v78 - v77) & 0xFFFFFFFFFFFFFFF8uLL));
        v77 = 0LL;
        v78 = 0LL;
      }
      goto LABEL_7;
    }
    std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_e4c7d3c53d0b0ab1b1215ef3bd828cfb___(
      &v79,
      v77,
      *((_QWORD *)&v77 + 1),
      a4);
    v22 = v79 != *((SaDeviceParams **)&v77 + 1);
    SaDeviceForPackagedApp = v79 != *((SaDeviceParams **)&v77 + 1) ? 0x887C0043 : 0;
    if ( (_QWORD)v77 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v77, *((__int64 *)&v77 + 1));
      std::_Deallocate<16,0>((char *)v77, (const struct std::nothrow_t *)((v78 - v77) & 0xFFFFFFFFFFFFFFF8uLL));
      v77 = 0LL;
      v78 = 0LL;
    }
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v81);
    v25 = !v22;
    v15 = *(_QWORD *)v82;
    if ( !v25 )
      goto LABEL_20;
    v16 = v83;
  }
  if ( a3 )
    v26 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, __int64, __int64, __int64))(*(_QWORD *)a3 + 48LL))(
            a3,
            v15,
            a4,
            a5,
            a6,
            a7,
            v16,
            a13);
  else
    v26 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, _QWORD, int, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            v15,
            a4,
            a5,
            a6,
            a7,
            v16,
            0LL,
            0LL,
            a13);
  SaDeviceForPackagedApp = v26;
  v23 = (CEndpointStoreCache *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_98fe4f38b3823383e11c83435e5ea7e3_Traceguids, v26);
  }
LABEL_20:
  if ( SaDeviceForPackagedApp == -2005139364 )
  {
    if ( a9 )
    {
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                                 (int)v23,
                                 v15,
                                 v24,
                                 a4,
                                 a5,
                                 a6,
                                 a7,
                                 v83,
                                 a10,
                                 a13);
      if ( SaDeviceForPackagedApp < 0 )
      {
        v27 = 2182LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)SaDeviceForPackagedApp);
        return (unsigned int)SaDeviceForPackagedApp;
      }
      return 0LL;
    }
LABEL_28:
    v27 = 2426LL;
    goto LABEL_24;
  }
  if ( SaDeviceForPackagedApp != -2005139360 && SaDeviceForPackagedApp != -2005139389 )
  {
    if ( SaDeviceForPackagedApp >= 0 )
      return 0LL;
    goto LABEL_28;
  }
  v28 = 0;
  v81 = 0LL;
  v29 = CEndpointStoreCache::GetEndpointStore(v23, *(const unsigned __int16 **)a4, &v81);
  SaDeviceForPackagedApp = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x894,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v29);
    goto LABEL_7;
  }
  v74 = 0LL;
  v75 = 0LL;
  v30 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v81 + 13) + 96LL))(*((_QWORD *)v81 + 13), &v74);
  SaDeviceForPackagedApp = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x897,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v30);
    v32 = v74;
    if ( (_QWORD)v74 )
      goto LABEL_33;
    goto LABEL_7;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, v31, (__int64)(*((_QWORD *)&v74 + 1) - v74) >> 3);
  }
  v80 = 0LL;
  v33 = 0;
  v34 = (_QWORD *)v74;
  v35 = v76;
  while ( 1 )
  {
    v36 = (_QWORD *)*((_QWORD *)&v74 + 1);
    if ( v34 == *((_QWORD **)&v74 + 1) )
      break;
    v37 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(*(_QWORD *)*v34 + 40LL))(*v34, &v87);
    v38 = *v37 - *(_QWORD *)(a4 + 48);
    if ( *v37 == *(_QWORD *)(a4 + 48) )
      v38 = v37[1] - *(_QWORD *)(a4 + 56);
    if ( !v38
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v34 + 96LL))(*v34) == *(_DWORD *)(a4 + 8)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v34 + 104LL))(*v34) )
    {
      if ( !a12
        || (v39 = *(unsigned __int16 **)(a4 + 16),
            v40 = v39[8],
            v41 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v34 + 48LL))(*v34),
            v42 = memcmp_0(v41, v39, v40 + 18),
            v28 = 0,
            !v42) )
      {
        if ( a11 )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v34 + 32LL))(*v34) != *(_QWORD *)(a4 + 32) )
            goto LABEL_64;
        }
        else if ( v33 || (v33 = 0, (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v34 + 152LL))(*v34)) )
        {
          v33 = 1;
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v43 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v34 + 32LL))(*v34);
          WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, v44, v43);
        }
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v80, v34);
        v45 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v34 + 32LL))(*v34) - *(_QWORD *)(a4 + 32);
        v46 = -v45;
        if ( v45 > 0 )
          v46 = v45;
        v47 = v80;
        if ( v80 && v46 && v33 )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
          v47 = v80;
        }
        v80 = 0LL;
        *v35 = v47;
      }
    }
LABEL_64:
    ++v34;
  }
  v48 = (__int64)v76;
  v49 = v81;
  if ( *v76 )
  {
LABEL_139:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
    if ( (_QWORD)v74 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v74, *((__int64 *)&v74 + 1));
      std::_Deallocate<16,0>((char *)v74, (const struct std::nothrow_t *)((v75 - v74) & 0xFFFFFFFFFFFFFFF8uLL));
      v74 = 0LL;
      v75 = 0LL;
    }
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v81);
    return 0LL;
  }
  v76 = 0LL;
  v50 = 0;
  v51 = (_QWORD *)v74;
  while ( 2 )
  {
    if ( v51 == v36 )
      goto LABEL_128;
    v52 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(*(_QWORD *)*v51 + 40LL))(*v51, &v87);
    v53 = *v52 - *(_QWORD *)(a4 + 48);
    if ( *v52 == *(_QWORD *)(a4 + 48) )
      v53 = v52[1] - *(_QWORD *)(a4 + 56);
    if ( v53
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v51 + 96LL))(*v51) != *(_DWORD *)(a4 + 8)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v51 + 104LL))(*v51) )
    {
LABEL_77:
      ++v51;
      v36 = (_QWORD *)*((_QWORD *)&v74 + 1);
      continue;
    }
    break;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v51 + 168LL))(*v51) )
  {
    v28 = 1;
    goto LABEL_77;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v51 + 136LL))(*v51) )
  {
    v50 = 1;
    goto LABEL_77;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v54 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v51 + 32LL))(*v51);
    WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, v55, v54);
  }
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v76, v51);
  v56 = (__int64)v76;
  if ( !v76 )
  {
LABEL_128:
    if ( a12 || a11 )
    {
      if ( v50 )
      {
        v71 = -2004287448;
        v72 = 2325LL;
LABEL_135:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v72,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v71);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v76);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
        if ( (_QWORD)v74 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v74, *((__int64 *)&v74 + 1));
          std::_Deallocate<16,0>((char *)v74, (const struct std::nothrow_t *)((v75 - v74) & 0xFFFFFFFFFFFFFFF8uLL));
          v74 = 0LL;
          v75 = 0LL;
        }
        SaDeviceForPackagedApp = v71;
        goto LABEL_7;
      }
      if ( v28 )
      {
        v71 = -2004287447;
        v72 = 2326LL;
        goto LABEL_135;
      }
    }
    v71 = -2005139360;
    v72 = 2328LL;
    goto LABEL_135;
  }
  v79 = 0LL;
  v57 = (*(__int64 (__fastcall **)(__int64 *, SaDeviceParams **))(*v76 + 120))(v76, &v79);
  v58 = v57;
  if ( v57 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v57);
    if ( v79 )
      SaDeviceParams::`scalar deleting destructor'(v79);
    v79 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v76);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
    if ( (_QWORD)v74 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v74, *((__int64 *)&v74 + 1));
      std::_Deallocate<16,0>((char *)v74, (const struct std::nothrow_t *)((v75 - v74) & 0xFFFFFFFFFFFFFFF8uLL));
      v74 = 0LL;
      v75 = 0LL;
    }
    SaDeviceForPackagedApp = v58;
    goto LABEL_7;
  }
  v77 = 0LL;
  v78 = 0LL;
  v59 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)v49 + 13) + 120LL))(
          *((_QWORD *)v49 + 13),
          v56,
          &v77);
  SaDeviceForPackagedApp = v59;
  if ( v59 >= 0 )
  {
    v62 = lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_::_lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_(v86, &v76);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_851455cfddf976de48a3a24cbb7d795f___(
      &v87,
      v77,
      *((_QWORD *)&v77 + 1),
      v62);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v87);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_98fe4f38b3823383e11c83435e5ea7e3_Traceguids);
    }
    std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v74);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v76);
    v73 = v48;
    v63 = v83;
    v64 = v85;
    v65 = *(_QWORD *)v82;
    v66 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64, _QWORD, int, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            *(_QWORD *)v82,
            a4,
            a5,
            a6,
            v85,
            v83,
            0LL,
            0LL,
            v73);
    SaDeviceForPackagedApp = v66;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_98fe4f38b3823383e11c83435e5ea7e3_Traceguids, v66);
    }
    if ( SaDeviceForPackagedApp >= 0 )
    {
      v67 = (_QWORD *)lambda_e71555c2ea4eb41c7555c95167e5b0eb_::_lambda_e71555c2ea4eb41c7555c95167e5b0eb_(&v85, &v84);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_d9d84050caa5b53617dd5fa562414e1b___(
        &v84,
        v77,
        *((_QWORD *)&v77 + 1),
        *v67);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_98fe4f38b3823383e11c83435e5ea7e3_Traceguids);
      }
      if ( (_QWORD)v77 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v77, *((__int64 *)&v77 + 1));
        std::_Deallocate<16,0>((char *)v77, (const struct std::nothrow_t *)((v78 - v77) & 0xFFFFFFFFFFFFFFF8uLL));
        v77 = 0LL;
        v78 = 0LL;
      }
      if ( v79 )
        SaDeviceParams::`scalar deleting destructor'(v79);
      v79 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v76);
      goto LABEL_139;
    }
    v83 = 0LL;
    v68 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, SaDeviceParams *, __int64, _DWORD, __int64, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            v65,
            v79,
            2LL,
            0,
            v64,
            v63,
            0LL,
            0LL,
            &v83);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_98fe4f38b3823383e11c83435e5ea7e3_Traceguids,
        (unsigned int)v68);
    }
    if ( v68 >= 0 )
    {
      *(_QWORD *)v82 = 0LL;
      v69 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, SaDeviceParams *, __int64, _DWORD, __int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
              g_DeviceGraphManager,
              v65,
              v79,
              2LL,
              0,
              v64,
              v63,
              0LL,
              0LL,
              v82);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          20LL,
          &WPP_98fe4f38b3823383e11c83435e5ea7e3_Traceguids,
          (unsigned int)v69);
      }
      if ( v69 >= 0 )
      {
        v70 = lambda_dfe9f2424170ce2c515b33f0132d3a88_::_lambda_dfe9f2424170ce2c515b33f0132d3a88_(&v84, v82);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_dfe9f2424170ce2c515b33f0132d3a88___(
          &v85,
          v77,
          *((_QWORD *)&v77 + 1),
          v70);
        lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_(&v85);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v82);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v83);
    v60 = (unsigned int)SaDeviceForPackagedApp;
    v61 = 2421LL;
  }
  else
  {
    v60 = (unsigned int)v59;
    v61 = 2338LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v61,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v60);
  if ( (_QWORD)v77 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v77, *((__int64 *)&v77 + 1));
    std::_Deallocate<16,0>((char *)v77, (const struct std::nothrow_t *)((v78 - v77) & 0xFFFFFFFFFFFFFFF8uLL));
    v77 = 0LL;
    v78 = 0LL;
  }
  if ( v79 )
    SaDeviceParams::`scalar deleting destructor'(v79);
  v79 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v76);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
  v32 = v74;
  if ( !(_QWORD)v74 )
    goto LABEL_7;
LABEL_33:
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v32, *((__int64 *)&v74 + 1));
  std::_Deallocate<16,0>((char *)v74, (const struct std::nothrow_t *)((v75 - v74) & 0xFFFFFFFFFFFFFFF8uLL));
  v74 = 0LL;
  v75 = 0LL;
LABEL_7:
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v81);
  return (unsigned int)SaDeviceForPackagedApp;
}
