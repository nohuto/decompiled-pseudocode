/*
 * XREFs of ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18022D3E0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x1800439AC (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180155944 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180156C80 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1801A2590 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UIDXGIOutput@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18021303C (--1-$out_param_t@V-$com_ptr_t@UIDXGIOutput@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x18025F578 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibra.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x18025F98C (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x1802B7E6C (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneResourceManager::EnsureSceneCompositor(CSceneResourceManager *this)
{
  unsigned int v2; // ebx
  HMODULE *v3; // rdi
  HMODULE LibraryW; // rax
  CDisplayManager *v5; // rcx
  FARPROC ProcAddress; // r15
  struct IDXGIFactory5 *v7; // rbx
  unsigned int v8; // r14d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  int v10; // edi
  CDisplayManager *v11; // rcx
  struct _LUID PrimaryAdapterLuid; // rcx
  int Device; // eax
  struct CD3DDevice **v14; // rdi
  CDeviceManager *v15; // rcx
  int DefaultDevice; // eax
  __int64 v17; // rcx
  int v18; // eax
  struct CMILPoolResource *v19; // rcx
  int v20; // eax
  char **v21; // rcx
  _QWORD *v22; // r14
  _QWORD *i; // rdi
  struct CMILPoolResource *v24; // rcx
  struct IUnknown *v26; // [rsp+30h] [rbp-D0h] BYREF
  CSceneResourceManager *v27; // [rsp+38h] [rbp-C8h] BYREF
  struct IDXGIFactory5 *v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+50h] [rbp-B0h]
  int v31; // [rsp+54h] [rbp-ACh]
  int v32; // [rsp+58h] [rbp-A8h]
  float v33; // [rsp+5Ch] [rbp-A4h]
  int v34; // [rsp+60h] [rbp-A0h]
  char v35; // [rsp+64h] [rbp-9Ch]
  char v36; // [rsp+65h] [rbp-9Bh]
  char v37; // [rsp+66h] [rbp-9Ah]
  char v38; // [rsp+67h] [rbp-99h]
  CSceneResourceManager **v39; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  char v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v43[296]; // [rsp+90h] [rbp-70h] BYREF
  struct _LUID v44; // [rsp+1B8h] [rbp+B8h]

  v2 = 0;
  if ( *((_BYTE *)this + 80) )
    return v2;
  v3 = (HMODULE *)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) )
  {
    LibraryW = LoadLibraryW(L"DwmScene.dll");
    wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
      v3,
      LibraryW);
  }
  if ( !*v3 )
  {
    *((_BYTE *)this + 80) = 1;
    return v2;
  }
  if ( *((_QWORD *)this + 3) )
    return v2;
  ProcAddress = GetProcAddress(*v3, "CreateDwmSceneRenderer");
  if ( ProcAddress )
  {
    if ( CCommonRegistryData::m_fSceneForceNonPrimaryDisplayAdapter )
    {
      v28 = 0LL;
      if ( (int)CDisplayManager::GetDXGIFactory(v5, &v28) >= 0 )
      {
        v7 = v28;
        v8 = 0;
        v27 = 0LL;
        while ( 1 )
        {
          lpVtbl = v7->lpVtbl;
          v39 = &v27;
          v40 = 0LL;
          v41 = 1;
          v10 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v7, v8, &v40);
          wil::details::out_param_t<wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>>((__int64 **)&v39);
          if ( v10 < 0 )
            break;
          memset_0(v43, 0, 0x138uLL);
          if ( (*(int (__fastcall **)(CSceneResourceManager *, _BYTE *))(*(_QWORD *)v27 + 80LL))(v27, v43) >= 0 )
          {
            PrimaryAdapterLuid = CDisplayManager::GetPrimaryAdapterLuid(v11, &v42);
            if ( v44.LowPart != *(_DWORD *)PrimaryAdapterLuid.LowPart
              || v44.HighPart != *(_DWORD *)(*(_QWORD *)&PrimaryAdapterLuid + 4LL) )
            {
              wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)this + 4);
              Device = CDeviceManager::GetDevice(
                         (CDeviceManager *)&g_DeviceManager,
                         v44,
                         (struct CD3DDevice **)this + 4);
              v2 = Device;
              if ( Device < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x6Du, 0LL);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
                goto LABEL_22;
              }
              break;
            }
          }
          ++v8;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
      }
      v14 = (struct CD3DDevice **)((char *)this + 32);
      if ( !*((_QWORD *)this + 4) )
      {
        v2 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x77u, 0LL);
LABEL_22:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
        goto LABEL_37;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
    }
    else
    {
      v14 = (struct CD3DDevice **)((char *)this + 32);
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)this + 4);
      DefaultDevice = CDeviceManager::GetDefaultDevice(v15, (struct CD3DDevice **)this + 4);
      v2 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DefaultDevice, 0x7Cu, 0LL);
        goto LABEL_37;
      }
    }
    v17 = *((_QWORD *)*v14 + 69);
    v30 = CCommonRegistryData::Scene::ImageProcessingMinWidth;
    v31 = CCommonRegistryData::Scene::ImageProcessingMinHeight;
    v32 = CCommonRegistryData::Scene::ImageProcessingResizeGrowth;
    v34 = CCommonRegistryData::Scene::MsaaQualityMode;
    v35 = CCommonRegistryData::Scene::EnableBloom;
    v36 = CCommonRegistryData::Scene::EnableImageProcessing;
    v37 = CCommonRegistryData::Scene::ImageProcessing8bit;
    v38 = CCommonRegistryData::Scene::EnableShadow;
    v29 = v17;
    v33 = CCommonRegistryData::m_flSceneImageProcessingResizeThreshold;
    v26 = 0LL;
    v18 = ((__int64 (__fastcall *)(__int64 *, GUID *, struct IUnknown **))ProcAddress)(
            &v29,
            &GUID_c459639d_0878_4eb7_ade9_3655c96fa73a,
            &v26);
    v2 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x8Cu, 0LL);
    }
    else
    {
      v19 = (struct CMILPoolResource *)*((_QWORD *)this + 3);
      *((_QWORD *)this + 3) = 0LL;
      if ( v19 )
        CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v19);
      v20 = CExternalD3DRenderer::Create(*v14, v26, (struct CExternalD3DRenderer **)this + 3);
      v2 = v20;
      if ( v20 >= 0 )
      {
        v21 = (char **)(*((_QWORD *)this + 3) + 48LL);
        v27 = this;
        std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(v21, &v27);
        v22 = (_QWORD *)*((_QWORD *)this + 6);
        for ( i = (_QWORD *)*((_QWORD *)this + 5); i != v22; ++i )
          (**(void (__fastcall ***)(_QWORD, struct IUnknown *))*i)(*i, v26);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
        return v2;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x8Eu, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
    goto LABEL_37;
  }
  v2 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x5Bu, 0LL);
LABEL_37:
  *((_BYTE *)this + 80) = 1;
  v24 = (struct CMILPoolResource *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v24 )
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v24);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>>::operator=((char *)this + 16);
  return v2;
}
