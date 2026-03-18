/*
 * XREFs of ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1801981D4
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1801980A0 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ @ 0x1801984F4 (-CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1801994B0 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180199530 (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?GetAdapterInfo@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAUDXGI_ADAPTER_DESC@@@Z @ 0x18024A298 (-GetAdapterInfo@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@QEAA_NXZ @ 0x18024A5F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wi.c)
 *     ?IsFailFastTriggered@@YA_NXZ @ 0x18025019C (-IsFailFastTriggered@@YA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?GetDeviceCreationError@CD3DDevice@@SAJI@Z @ 0x1802C6820 (-GetDeviceCreationError@CD3DDevice@@SAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateD3D11Device(
        IDXGIAdapter *pAdapter,
        bool *a2,
        enum D3D_FEATURE_LEVEL *a3,
        enum _QAI_DRIVERVERSION *a4,
        union _LARGE_INTEGER *a5,
        struct ID3D11Device1 **a6)
{
  int AdapterInfo; // eax
  HRESULT v11; // ebx
  D3D_FEATURE_LEVEL *v13; // rsi
  UINT FeatureLevels; // ebx
  int v15; // edi
  unsigned int i; // ecx
  ID3D11Device *v17; // rcx
  int v18; // r15d
  int DeviceCreationError; // eax
  ID3D11Device *v20; // rcx
  unsigned int pFeatureLevels; // [rsp+20h] [rbp-E0h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+50h] [rbp-B0h] BYREF
  ID3D11Device *ppDevice; // [rsp+58h] [rbp-A8h] BYREF
  DXGI_ADAPTER_DESC v24; // [rsp+60h] [rbp-A0h] BYREF
  D3D_FEATURE_LEVEL v25[4]; // [rsp+190h] [rbp+90h] BYREF
  __m128i si128; // [rsp+1A0h] [rbp+A0h]
  int v27; // [rsp+1B0h] [rbp+B0h]
  void *retaddr; // [rsp+208h] [rbp+108h]

  ppDevice = 0LL;
  pFeatureLevel = 0;
  memset_0(&v24, 0, sizeof(v24));
  *(__m128i *)v25 = _mm_load_si128((const __m128i *)&_xmm);
  v27 = 37120;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::GetImpl'::`2'::impl) )
  {
    AdapterInfo = CD3DDevice::GetAdapterInfo(pAdapter, a2, &pFeatureLevel, a4, a5, &v24);
    v11 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      pFeatureLevels = 219;
      goto LABEL_6;
    }
  }
  else
  {
    AdapterInfo = CD3DDevice::GetAdapterInfo(pAdapter, a2, &pFeatureLevel, a4, a5, 0LL);
    v11 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      pFeatureLevels = 227;
LABEL_6:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, AdapterInfo, pFeatureLevels, 0LL);
      goto LABEL_7;
    }
  }
  v13 = v25;
  FeatureLevels = 9;
  v15 = CurrentProcessHasIncreasedPriorityPrivileges() << 12;
  for ( i = 0; i < 9; ++i )
  {
    if ( v25[i] <= pFeatureLevel )
    {
      v13 = &v25[i];
      FeatureLevels = 9 - i;
      break;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::GetImpl'::`2'::impl) )
  {
    v18 = g_hrNoHardwareDeviceOverride;
    DeviceCreationError = CD3DDevice::GetDeviceCreationError(v24.VendorId);
    v20 = ppDevice;
    ppDevice = 0LL;
    g_hrNoHardwareDeviceOverride = DeviceCreationError;
    if ( v20 )
      ((void (__fastcall *)(ID3D11Device *))v20->lpVtbl->Release)(v20);
    v11 = D3D11CreateDevice(
            pAdapter,
            D3D_DRIVER_TYPE_UNKNOWN,
            0LL,
            v15 + 169,
            v13,
            FeatureLevels,
            7u,
            &ppDevice,
            &pFeatureLevel,
            0LL);
    if ( v11 < 0 && IsFailFastTriggered() )
    {
      MilFailFastForHR(g_hrNoHardwareDeviceOverride, retaddr);
      __debugbreak();
    }
    g_hrNoHardwareDeviceOverride = v18;
  }
  else
  {
    v17 = ppDevice;
    ppDevice = 0LL;
    if ( v17 )
      ((void (__fastcall *)(ID3D11Device *))v17->lpVtbl->Release)(v17);
    v11 = D3D11CreateDevice(
            pAdapter,
            D3D_DRIVER_TYPE_UNKNOWN,
            0LL,
            v15 + 169,
            v13,
            FeatureLevels,
            7u,
            &ppDevice,
            &pFeatureLevel,
            0LL);
  }
  if ( v11 >= 0 )
  {
    AdapterInfo = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, struct ID3D11Device1 **))ppDevice->lpVtbl->QueryInterface)(
                    ppDevice,
                    &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
                    a6);
    v11 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      pFeatureLevels = 347;
      goto LABEL_6;
    }
    *a3 = pFeatureLevel;
  }
  else
  {
    if ( IsOOM(v11) )
      ModuleFailFastForHRESULT(-2003304307, retaddr);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x165u, 0LL);
  }
LABEL_7:
  if ( ppDevice )
    ((void (__fastcall *)(ID3D11Device *))ppDevice->lpVtbl->Release)(ppDevice);
  return (unsigned int)v11;
}
