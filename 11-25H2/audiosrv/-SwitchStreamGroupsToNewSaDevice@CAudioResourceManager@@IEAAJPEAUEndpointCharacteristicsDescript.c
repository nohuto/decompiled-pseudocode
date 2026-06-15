/*
 * XREFs of ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800C06D8
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180030038 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180027A08 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180063868 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18006E0F4 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18007F0B0 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_5643a1c133fbb7bd4f6278ef2ca542af___ @ 0x1800B6920 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800B6920.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_58c7dbc0da477b64a32a7b6b89818033___ @ 0x1800B6998 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800B6998.c)
 *     _lambda_9f04cff08f73ba581a6423b7140551a2_::operator() @ 0x1800B78BC (_lambda_9f04cff08f73ba581a6423b7140551a2_--operator().c)
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     WPP_SF_P @ 0x1800C1704 (WPP_SF_P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(
        __int64 a1,
        struct EndpointCharacteristicsDescriptor *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *a5,
        __int64 a6,
        __int64 *a7)
{
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 *v13; // rcx
  int v14; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // r8d
  int v16; // eax
  CEndpointCharacteristics *v17; // rbx
  int EndpointId; // eax
  __int64 (__fastcall *v19)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, SaDeviceParams *, __int64, _DWORD, __int64 *, __int128 *, _QWORD, _QWORD, __int64 *); // rdi
  SaDeviceParams *v20; // rbx
  int v21; // eax
  unsigned int v22; // edi
  SaDeviceParams *v23; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+80h] [rbp-80h] BYREF
  struct EndpointCharacteristicsDescriptor *v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v29; // [rsp+98h] [rbp-68h] BYREF
  SaDeviceParams *v30; // [rsp+A0h] [rbp-60h] BYREF
  struct _GUID v31; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v32; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-20h]
  int *v35; // [rsp+E8h] [rbp-18h] BYREF
  SaDeviceParams **v36; // [rsp+F0h] [rbp-10h]
  struct EndpointCharacteristicsDescriptor **v37; // [rsp+F8h] [rbp-8h]
  __int128 *v38; // [rsp+100h] [rbp+0h]
  __int128 *v39; // [rsp+108h] [rbp+8h]
  char v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h] BYREF
  int v42; // [rsp+120h] [rbp+20h]
  int v43; // [rsp+124h] [rbp+24h]
  _BYTE v44[24]; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v27 = a2;
  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a7 + 200LL))(*a7);
  v24 = 0LL;
  v25 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 120LL))(a3, *a7, &v24);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB87,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_3:
    if ( (_QWORD)v24 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v24,
        *((__int64 **)&v24 + 1));
      std::_Deallocate<16,0>((char *)v24, (const struct std::nothrow_t *)((v25 - v24) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return v11;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, v10, (__int64)(*((_QWORD *)&v24 + 1) - v24) >> 3);
  }
  v13 = (__int64 *)v24;
  if ( (__int64)(*((_QWORD *)&v24 + 1) - v24) >> 3 )
  {
    v23 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*a7 + 120LL))(*a7, &v23);
    v11 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_13:
      if ( v23 )
        SaDeviceParams::`scalar deleting destructor'(v23);
      v23 = 0LL;
      goto LABEL_3;
    }
    v30 = 0LL;
    v15 = *((_DWORD *)v23 + 2);
    v32 = (struct _GUID)*((_OWORD *)v23 + 4);
    v31 = (struct _GUID)*((_OWORD *)v23 + 3);
    v16 = DeriveSaDeviceParametersForStream(
            (CEndpointCharacteristics ***)v27,
            AUDCLNT_SHAREMODE_SHARED,
            v15,
            &v31,
            &v32,
            a4,
            a5,
            a6,
            &v30);
    v11 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB9B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_18;
    }
    *(_QWORD *)&v31.Data1 = *a7;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v31);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_58c7dbc0da477b64a32a7b6b89818033___(
      (__int64 *)&v32,
      (_QWORD *)v24,
      *((_QWORD **)&v24 + 1),
      (__int64 *)&v31);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v32);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_376ec65dfd163502a9de53a59e5d86b2_Traceguids);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a7);
    v29 = 0LL;
    v17 = *(CEndpointCharacteristics **)v27;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v29,
      0LL);
    EndpointId = CEndpointCharacteristics::GetEndpointId(v17, &v29);
    v11 = EndpointId;
    if ( EndpointId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBAE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)EndpointId);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v29);
LABEL_18:
      if ( v30 )
        SaDeviceParams::`scalar deleting destructor'(v30);
      goto LABEL_13;
    }
    v33 = 0LL;
    v34 = 0LL;
    v35 = &v26;
    v36 = &v23;
    v37 = &v27;
    v38 = &v33;
    v39 = &v24;
    v40 = 1;
    v43 = 1;
    memset(v44, 0, sizeof(v44));
    v42 = v26;
    v41 = 0LL;
    *(_OWORD *)&v44[4] = *((_OWORD *)v23 + 3);
    *(_DWORD *)v44 = *((_DWORD *)v23 + 2);
    v28 = 0LL;
    v19 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, SaDeviceParams *, __int64, _DWORD, __int64 *, __int128 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
    v20 = v30;
    v21 = v19(g_DeviceGraphManager, v27, v30, 2LL, 0, &v41, &v33, 0LL, 0LL, &v28);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBEE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v21);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
      v35 = &v26;
      v36 = &v23;
      v37 = &v27;
      v38 = &v33;
      v39 = &v24;
      lambda_9f04cff08f73ba581a6423b7140551a2_::operator()((__int64)&v35);
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v33);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v29);
      if ( v20 )
        SaDeviceParams::`scalar deleting destructor'(v20);
      if ( v23 )
        SaDeviceParams::`scalar deleting destructor'(v23);
      v23 = 0LL;
      if ( (_QWORD)v24 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v24,
          *((__int64 **)&v24 + 1));
        std::_Deallocate<16,0>((char *)v24, (const struct std::nothrow_t *)((v25 - v24) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      return v22;
    }
    *(_QWORD *)&v31.Data1 = v28;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v31);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_5643a1c133fbb7bd4f6278ef2ca542af___(
      (__int64 *)&v32,
      v24,
      *((__int64 *)&v24 + 1),
      (__int64 *)&v31);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v32);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_376ec65dfd163502a9de53a59e5d86b2_Traceguids);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v33);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v29);
    if ( v20 )
      SaDeviceParams::`scalar deleting destructor'(v20);
    if ( v23 )
      SaDeviceParams::`scalar deleting destructor'(v23);
    v13 = (__int64 *)v24;
  }
  if ( v13 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13, *((__int64 **)&v24 + 1));
    std::_Deallocate<16,0>((char *)v24, (const struct std::nothrow_t *)((v25 - v24) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return 0LL;
}
