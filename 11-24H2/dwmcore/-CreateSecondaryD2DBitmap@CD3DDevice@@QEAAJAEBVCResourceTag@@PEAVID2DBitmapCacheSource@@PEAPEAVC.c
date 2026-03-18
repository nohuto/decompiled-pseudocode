/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802BC94C
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180198DB4 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18005AEE0 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18005BF74 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x18005C778 (-Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180106DC0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCompatibleTextureFormat@CD3DDevice@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x180206F00 (-GetCompatibleTextureFormat@CD3DDevice@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18024FF0C (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-C.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAA_NXZ @ 0x1802BB160 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@detail.c)
 *     ?Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802DA2B0 (-Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11T.c)
 *     ?Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@2AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802DA4FC (-Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateSecondaryD2DBitmap(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        struct ID2DBitmapCacheSource *a3,
        struct CSecondaryD2DBitmap **a4)
{
  __int64 v4; // rax
  char IsEnabled; // al
  int v10; // r14d
  int v11; // r13d
  struct ID3D11Texture2D *v12; // rbx
  __int64 v13; // rax
  char v14; // al
  struct CD3DDevice *v15; // r11
  int Device; // eax
  int v17; // edi
  int v18; // edi
  struct CD3DDevice *v19; // r10
  int v20; // r9d
  unsigned int v21; // ecx
  enum DXGI_FORMAT v22; // eax
  unsigned int v23; // edx
  float v24; // xmm2_4
  unsigned int v25; // r8d
  unsigned int v26; // eax
  struct D3D11_SUBRESOURCE_DATA *v27; // r8
  int v28; // eax
  __int64 v29; // rax
  struct D3D11_SUBRESOURCE_DATA *v30; // r8
  int v31; // eax
  int v32; // r14d
  int v33; // r8d
  BOOL v34; // ebx
  int v35; // r9d
  unsigned int CompatibleTextureFormat; // ecx
  struct _LUID v37; // r8
  enum DXGI_FORMAT v38; // eax
  unsigned int v39; // edx
  float v40; // xmm2_4
  int v41; // eax
  DWORD LowPart; // r8d
  LONG HighPart; // eax
  struct D3D11_SUBRESOURCE_DATA *v44; // r8
  int v45; // eax
  unsigned int v47; // [rsp+20h] [rbp-E0h]
  unsigned int v48; // [rsp+20h] [rbp-E0h]
  struct ID3D11Texture2D *v49; // [rsp+50h] [rbp-B0h] BYREF
  struct CD3DDevice *v50; // [rsp+58h] [rbp-A8h] BYREF
  struct ID3D11Texture2D *v51; // [rsp+60h] [rbp-A0h] BYREF
  struct CD3DDevice *v52; // [rsp+68h] [rbp-98h] BYREF
  struct _LUID v53; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v54; // [rsp+78h] [rbp-88h] BYREF
  float v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+84h] [rbp-7Ch]
  __int64 v57; // [rsp+8Ch] [rbp-74h]
  int v58; // [rsp+94h] [rbp-6Ch]
  __int64 *v59; // [rsp+98h] [rbp-68h]
  struct CD3DDevice **v60; // [rsp+A0h] [rbp-60h] BYREF
  struct CD3DDevice *v61; // [rsp+A8h] [rbp-58h] BYREF
  char v62; // [rsp+B0h] [rbp-50h]
  struct ID2DBitmapCacheSource *v63; // [rsp+B8h] [rbp-48h]
  enum DXGI_FORMAT v64[2]; // [rsp+C0h] [rbp-40h] BYREF
  BOOL v65; // [rsp+C8h] [rbp-38h]
  DWORD v66; // [rsp+D0h] [rbp-30h] BYREF
  LONG v67; // [rsp+D4h] [rbp-2Ch]
  int v68; // [rsp+D8h] [rbp-28h]
  int v69; // [rsp+DCh] [rbp-24h]
  unsigned int v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E4h] [rbp-1Ch]
  int v72; // [rsp+ECh] [rbp-14h]
  __int64 v73; // [rsp+F0h] [rbp-10h]
  int v74; // [rsp+F8h] [rbp-8h]
  __int128 v75; // [rsp+100h] [rbp+0h]
  struct D3D11_TEXTURE2D_DESC v76; // [rsp+110h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a3;
  v59 = (__int64 *)a4;
  v63 = a3;
  (*(void (__fastcall **)(struct ID2DBitmapCacheSource *, enum DXGI_FORMAT *))(v4 + 24))(a3, v64);
  (*(void (__fastcall **)(struct ID2DBitmapCacheSource *, struct CD3DDevice **))(*(_QWORD *)a3 + 32LL))(a3, &v52);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::GetImpl'::`2'::impl);
  v10 = 0;
  v60 = *(struct CD3DDevice ***)v64;
  v57 = 0LL;
  v58 = 0;
  v75 = *(_OWORD *)a2;
  if ( !IsEnabled )
  {
    v33 = (int)v52;
    v34 = v65;
    v49 = 0LL;
    *a4 = 0LL;
    if ( v33 && HIDWORD(v52) )
    {
      if ( !*((_DWORD *)this + 278) )
      {
        CompatibleTextureFormat = CD3DDevice::GetCompatibleTextureFormat(this, v64[0]);
        if ( CompatibleTextureFormat == v64[0] )
        {
          v38 = HIDWORD(v60);
          CompatibleTextureFormat = (unsigned int)v60;
        }
        else
        {
          v38 = v64[1];
          v34 = CompatibleTextureFormat == 10;
        }
        v39 = *((_DWORD *)this + 240);
        v54 = __PAIR64__(v38, CompatibleTextureFormat);
        v55 = 96.0;
        v56 = 1119879168LL;
        v53 = v37;
        v40 = (float)(int)v39;
        if ( v37.LowPart <= v39 )
        {
          LowPart = v53.LowPart;
        }
        else
        {
          v41 = v37.LowPart;
          LowPart = v39;
          v55 = (float)(v40 / (float)v41) * 96.0;
        }
        HighPart = v53.HighPart;
        if ( v53.HighPart > v39 )
        {
          HighPart = v39;
          *(float *)&v56 = (float)(v40 / (float)v53.HighPart) * 96.0;
        }
        v70 = CompatibleTextureFormat;
        v68 = 1;
        v69 = 1;
        v71 = 1LL;
        v66 = LowPart;
        v67 = HighPart;
        v72 = 0;
        v73 = 8LL;
        v74 = 0;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v49);
        v45 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&v66, v44, &v49);
        v17 = v45;
        if ( v45 < 0 )
        {
          v48 = 1527;
        }
        else
        {
          v45 = CSecondaryD2DBitmap::Create(
                  *((_QWORD *)this + 23),
                  (__int64)v52,
                  (__int64)v49,
                  (__int64)&v66,
                  &v54,
                  v34,
                  -1,
                  (__int64 *)a4);
          v17 = v45;
          if ( v45 >= 0 )
            goto LABEL_65;
          v48 = 1537;
        }
        v35 = v45;
LABEL_64:
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v35, v48, 0LL);
        goto LABEL_65;
      }
      v35 = -2003304307;
      v48 = 1475;
    }
    else
    {
      v35 = -2147024809;
      v48 = 1472;
    }
    v17 = v35;
    goto LABEL_64;
  }
  v11 = v65;
  v12 = 0LL;
  v51 = 0LL;
  *a4 = 0LL;
  v13 = *(_QWORD *)a3;
  v49 = 0LL;
  v53 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct ID2DBitmapCacheSource *, struct _LUID *))(v13 + 88))(a3, &v53);
  v15 = 0LL;
  if ( v14 )
  {
    v10 = 2;
    if ( *((_DWORD *)this + 376) == 1 )
    {
      v50 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v50);
      Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v53, &v50);
      v17 = Device;
      if ( Device < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, Device, 0x528u, 0LL);
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v50);
        goto LABEL_13;
      }
      v18 = *((_DWORD *)v50 + 376);
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v50);
      v15 = 0LL;
      v10 = (v18 != 2) + 1;
    }
  }
  v19 = v52;
  if ( !(_DWORD)v52 || !HIDWORD(v52) )
  {
    v20 = -2147024809;
    v47 = 1333;
    goto LABEL_10;
  }
  if ( !*((_DWORD *)this + 278) )
  {
    if ( v10 || (v21 = CD3DDevice::GetCompatibleTextureFormat(this, v64[0]), v21 == v64[0]) )
    {
      v22 = HIDWORD(v60);
      v21 = (unsigned int)v60;
    }
    else
    {
      v22 = v64[1];
      v11 = (int)v15;
      LOBYTE(v11) = v21 == 10;
    }
    v23 = *((_DWORD *)this + 240);
    v54 = __PAIR64__(v22, v21);
    v55 = 96.0;
    v56 = 1119879168LL;
    v50 = v19;
    if ( v10 )
    {
      v26 = HIDWORD(v50);
      v25 = (unsigned int)v50;
    }
    else
    {
      v24 = (float)(int)v23;
      if ( (unsigned int)v19 <= v23 )
      {
        v25 = (unsigned int)v50;
      }
      else
      {
        v25 = v23;
        v55 = (float)(v24 / (float)(int)v19) * 96.0;
      }
      v26 = HIDWORD(v50);
      if ( HIDWORD(v50) > v23 )
      {
        v26 = v23;
        *(float *)&v56 = (float)(v24 / (float)SHIDWORD(v50)) * 96.0;
      }
    }
    v66 = v25;
    v67 = v26;
    v68 = 1;
    v69 = 1;
    v70 = v21;
    v71 = 1LL;
    v72 = (int)v15;
    v73 = 8LL;
    v74 = (int)v15;
    if ( v10 != 1 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v49);
      v28 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&v66, v27, &v49);
      v15 = 0LL;
      v17 = v28;
      if ( v28 < 0 )
      {
        v47 = 1396;
        goto LABEL_28;
      }
      v19 = v52;
      v12 = v49;
    }
    if ( v10 )
    {
      v60 = &v50;
      v50 = v15;
      v61 = v15;
      v29 = *(_QWORD *)v63;
      v62 = 1;
      v17 = (*(__int64 (__fastcall **)(struct ID2DBitmapCacheSource *, struct CD3DDevice **))(v29 + 96))(v63, &v61);
      wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((__int64)&v60);
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v17, 0x57Cu, 0LL);
      }
      else
      {
        memset(&v76, 0, sizeof(v76));
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v51);
        v31 = CD3DDevice::OpenSharedTexture((__int64 **)this, &v76, v30, v50, 1, &v51);
        v17 = v31;
        if ( v31 >= 0 )
        {
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v50);
          v32 = v10 - 1;
          if ( v32 )
          {
            if ( v32 != 1 )
              goto LABEL_13;
            v28 = CSecondaryCrossAdapterIndirectBitmap::Create(
                    *((_QWORD *)this + 23),
                    v52,
                    v51,
                    v12,
                    &v66,
                    &v54,
                    v11,
                    -1,
                    v59);
            v17 = v28;
            if ( v28 >= 0 )
              goto LABEL_13;
            v47 = 1455;
          }
          else
          {
            v28 = CSecondaryCrossAdapterDirectBitmap::Create(*((_QWORD *)this + 23), v52, v51, &v66, &v54, v11, -1, v59);
            v17 = v28;
            if ( v28 >= 0 )
              goto LABEL_13;
            v47 = 1439;
          }
          goto LABEL_28;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v31, 0x580u, 0LL);
      }
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v50);
      goto LABEL_13;
    }
    v28 = CSecondaryD2DBitmap::Create(
            *((_QWORD *)this + 23),
            (__int64)v19,
            (__int64)v12,
            (__int64)&v66,
            &v54,
            v11,
            -1,
            v59);
    v17 = v28;
    if ( v28 >= 0 )
      goto LABEL_13;
    v47 = 1424;
LABEL_28:
    v20 = v28;
    goto LABEL_11;
  }
  v20 = -2003304307;
  v47 = 1336;
LABEL_10:
  v17 = v20;
LABEL_11:
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v20, v47, 0LL);
LABEL_13:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v51);
LABEL_65:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v49);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v17, 0);
}
