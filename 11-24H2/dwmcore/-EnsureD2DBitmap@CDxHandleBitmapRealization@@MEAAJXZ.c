/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180198210
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ @ 0x180197100 (-EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ.c)
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x1801972F0 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z.c)
 *     ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801978E0 (-GetDeviceTexture@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealizati.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJPEAVCDrawingContext@@@Z @ 0x180197AC0 (-RecordUse@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@U.c)
 *     ?RecordUse@CBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x180197D70 (-RecordUse@CBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180198030 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802D8BB0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18005A680 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18005BF74 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180106DC0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAA_NXZ @ 0x1802BB160 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@detail.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(CDxHandleBitmapRealization *this)
{
  int Device; // eax
  struct D3D11_SUBRESOURCE_DATA *v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rcx
  CD3DDevice *v6; // rdi
  int v7; // esi
  int v8; // ebx
  int v9; // r13d
  char v10; // al
  void *v11; // r9
  int v12; // r15d
  int v13; // eax
  __int64 v14; // r12
  struct ID3D11Texture2D *v15; // r15
  HANDLE ProcessHeap; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  int v21; // eax
  int v22; // ebx
  int v23; // esi
  __int64 v24; // rbx
  __int64 v25; // r8
  struct ID2DBitmapCacheSource *v26; // rdx
  CD3DDevice *v28; // [rsp+30h] [rbp-39h] BYREF
  struct ID3D11Texture2D *v29; // [rsp+38h] [rbp-31h] BYREF
  __m256i v30; // [rsp+40h] [rbp-29h]
  struct D3D11_TEXTURE2D_DESC v31; // [rsp+60h] [rbp-9h] BYREF

  if ( *((_QWORD *)this + 47) )
    return 0LL;
  v28 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v28);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 264), &v28);
  v4 = Device;
  if ( Device >= 0 )
  {
    v5 = *((_QWORD *)this + 47);
    *((_QWORD *)this + 47) = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = v28;
    v7 = *((_DWORD *)this + 74);
    v8 = 3;
    v9 = *((_DWORD *)this + 38);
    if ( *((_DWORD *)this + 26) )
      v8 = *((_DWORD *)this + 26);
    v10 = *((_BYTE *)this + 392);
    v11 = (void *)*((_QWORD *)this + 32);
    *((_QWORD *)this + 47) = 0LL;
    v29 = 0LL;
    *(__int64 *)((char *)&v30.m256i_i64[2] + 4) = 0LL;
    v30.m256i_i32[7] = 0;
    memset(&v31, 0, sizeof(v31));
    if ( *((_DWORD *)v6 + 278) )
    {
      v12 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, -2003304307, 0x3DAu, 0LL);
LABEL_19:
      v23 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)v6, v12, 0);
      if ( v29 )
        ((void (__fastcall *)(struct ID3D11Texture2D *))v29->lpVtbl->Release)(v29);
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x169u, 0LL);
      }
      else
      {
        v24 = *((_QWORD *)this + 47);
        *((_BYTE *)this + 395) = (*(_DWORD *)(v24 + 176) & 0x400000) == 0;
        *(_BYTE *)(v24 + 236) = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 10) + 56LL))((char *)this + 80);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::GetImpl'::`2'::impl)
          && (*((_BYTE *)this + 284) & 1) != 0 )
        {
          *(_BYTE *)(*((_QWORD *)this + 47) + 237LL) = 1;
        }
        (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 47) + 72LL))(
          *((_QWORD *)this + 47),
          (char *)this + 16);
        v25 = *((_QWORD *)this + 47);
        v26 = (struct ID2DBitmapCacheSource *)(v25 + 88);
        if ( !v25 )
          v26 = 0LL;
        CD2DBitmapCache::InitializeCache(this, v26);
      }
      CD3DDevice::Release(v6);
      return (unsigned int)v23;
    }
    v13 = CD3DDevice::OpenSharedTexture((__int64 **)v6, &v31, v3, v11, v10, &v29);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v13, 0x3E0u, 0LL);
      goto LABEL_19;
    }
    v14 = *((_QWORD *)v6 + 23);
    v15 = v29;
    v28 = (CD3DDevice *)__PAIR64__(v8, v31.Format);
    v30.m256i_i64[0] = __PAIR64__(v8, v31.Format);
    v30.m256i_i32[2] = 1119879168;
    *(__int64 *)((char *)&v30.m256i_i64[1] + 4) = 1119879168LL;
    *((_QWORD *)this + 47) = 0LL;
    ProcessHeap = GetProcessHeap();
    v17 = HeapAlloc(ProcessHeap, 0, 0xF0uLL);
    v18 = v17;
    if ( v17 )
    {
      v17[5] = v14;
      v17[1] = 0LL;
      v17[2] = 0LL;
      v17[3] = 0LL;
      v17[4] = 0LL;
      *((_BYTE *)v17 + 50) = 0;
      *v17 = &CD2DBitmap::`vftable'{for `IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>'};
      v17[9] = &CD2DBitmap::`vftable'{for `IDeviceResource'};
      v17[10] = &CDeviceTextureTarget::`vftable'{for `IPixelFormat'};
      v17[11] = &CD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
      v17[12] = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IBitmapUnlock'};
      *((_WORD *)v17 + 24) = 256;
      v17[13] = v15;
      if ( v15 )
        ((void (__fastcall *)(struct ID3D11Texture2D *))v15->lpVtbl->AddRef)(v15);
      v18[14] = 0LL;
      v18[15] = 0LL;
      v18[16] = 0LL;
      v18[17] = 0LL;
      *((_OWORD *)v18 + 9) = *(_OWORD *)&v31.Width;
      *((_OWORD *)v18 + 10) = *(_OWORD *)&v31.Format;
      v19 = *(_OWORD *)&v30.m256i_u64[2];
      v18[22] = *(_QWORD *)&v31.BindFlags;
      v20 = *(_OWORD *)v30.m256i_i8;
      *((_DWORD *)v18 + 46) = v31.MiscFlags;
      *((_DWORD *)v18 + 56) = v9;
      *((_OWORD *)v18 + 12) = v20;
      *((_DWORD *)v18 + 57) = v7;
      *((_OWORD *)v18 + 13) = v19;
      v18[29] = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
      v21 = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 112LL))(v18);
      v12 = v21;
      if ( v21 >= 0 )
      {
        *((_QWORD *)this + 47) = v18;
        goto LABEL_19;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x26u, 0LL);
      (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      v22 = v12;
    }
    else
    {
      v12 = -2147024882;
      v22 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x24u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v22, 0x3F5u, 0LL);
    goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x160u, 0LL);
  if ( v28 )
    CD3DDevice::Release(v28);
  return v4;
}
