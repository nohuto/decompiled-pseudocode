/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18018B180
 * Callers:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18018A134 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x18018A260 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z.c)
 *     ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18018A850 (-GetDeviceTexture@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealizati.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJPEAVCDrawingContext@@@Z @ 0x18018AA30 (-RecordUse@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@U.c)
 *     ?RecordUse@CBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x18018ACE0 (-RecordUse@CBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18018AFA0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ @ 0x18018C030 (-EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802E1E50 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180040E14 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800431D0 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180142A00 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAA_NXZ @ 0x1802C47C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@detail.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(CDxHandleBitmapRealization *this)
{
  struct _LUID v2; // rdx
  int Device; // eax
  struct D3D11_SUBRESOURCE_DATA *v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rcx
  struct CD3DDevice *v7; // rdi
  int v8; // esi
  int v9; // ebx
  int v10; // r13d
  char v11; // al
  void *v12; // r9
  int v13; // r15d
  int v14; // eax
  __int64 v15; // r12
  struct ID3D11Texture2D *v16; // r15
  HANDLE ProcessHeap; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  int v22; // eax
  int v23; // ebx
  int v24; // esi
  __int64 v25; // rbx
  __int64 v26; // r8
  struct ID2DBitmapCacheSource *v27; // rdx
  struct CD3DDevice *v29; // [rsp+30h] [rbp-39h] BYREF
  struct ID3D11Texture2D *v30; // [rsp+38h] [rbp-31h] BYREF
  __m256i v31; // [rsp+40h] [rbp-29h]
  struct D3D11_TEXTURE2D_DESC v32; // [rsp+60h] [rbp-9h] BYREF

  if ( *((_QWORD *)this + 47) )
    return 0LL;
  v2 = (struct _LUID)*((_QWORD *)this + 33);
  v29 = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v2, &v29);
  v5 = Device;
  if ( Device >= 0 )
  {
    v6 = *((_QWORD *)this + 47);
    *((_QWORD *)this + 47) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = v29;
    v8 = *((_DWORD *)this + 74);
    v9 = 3;
    v10 = *((_DWORD *)this + 38);
    if ( *((_DWORD *)this + 26) )
      v9 = *((_DWORD *)this + 26);
    v11 = *((_BYTE *)this + 392);
    v12 = (void *)*((_QWORD *)this + 32);
    *((_QWORD *)this + 47) = 0LL;
    v30 = 0LL;
    *(__int64 *)((char *)&v31.m256i_i64[2] + 4) = 0LL;
    v31.m256i_i32[7] = 0;
    memset(&v32, 0, sizeof(v32));
    if ( *((_DWORD *)v7 + 278) )
    {
      v13 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, -2003304307, 0x3F6u, 0LL);
LABEL_19:
      v24 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)v7, v13, 0);
      if ( v30 )
        ((void (__fastcall *)(struct ID3D11Texture2D *))v30->lpVtbl->Release)(v30);
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x15Bu, 0LL);
      }
      else
      {
        v25 = *((_QWORD *)this + 47);
        *((_BYTE *)this + 395) = (*(_DWORD *)(v25 + 176) & 0x400000) == 0;
        *(_BYTE *)(v25 + 236) = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 10) + 56LL))((char *)this + 80);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::GetImpl'::`2'::impl)
          && (*((_BYTE *)this + 284) & 1) != 0 )
        {
          *(_BYTE *)(*((_QWORD *)this + 47) + 237LL) = 1;
        }
        (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 47) + 72LL))(
          *((_QWORD *)this + 47),
          (char *)this + 16);
        v26 = *((_QWORD *)this + 47);
        v27 = (struct ID2DBitmapCacheSource *)(v26 + 88);
        if ( !v26 )
          v27 = 0LL;
        CD2DBitmapCache::InitializeCache(this, v27);
      }
      CD3DDevice::Release(v7);
      return (unsigned int)v24;
    }
    v14 = CD3DDevice::OpenSharedTexture((__int64 **)v7, &v32, v4, v12, v11, &v30);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, v14, 0x3FCu, 0LL);
      goto LABEL_19;
    }
    v15 = *((_QWORD *)v7 + 23);
    v16 = v30;
    v29 = (struct CD3DDevice *)__PAIR64__(v9, v32.Format);
    v31.m256i_i64[0] = __PAIR64__(v9, v32.Format);
    v31.m256i_i32[2] = 1119879168;
    *(__int64 *)((char *)&v31.m256i_i64[1] + 4) = 1119879168LL;
    *((_QWORD *)this + 47) = 0LL;
    ProcessHeap = GetProcessHeap();
    v18 = HeapAlloc(ProcessHeap, 0, 0xF0uLL);
    v19 = v18;
    if ( v18 )
    {
      v18[5] = v15;
      v18[1] = 0LL;
      v18[2] = 0LL;
      v18[3] = 0LL;
      v18[4] = 0LL;
      *((_BYTE *)v18 + 50) = 0;
      *v18 = &CD2DBitmap::`vftable'{for `IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>'};
      v18[9] = &CD2DBitmap::`vftable'{for `IDeviceResource'};
      v18[10] = &CDeviceTextureTarget::`vftable'{for `IPixelFormat'};
      v18[11] = &CD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
      v18[12] = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IBitmapUnlock'};
      *((_WORD *)v18 + 24) = 256;
      v18[13] = v16;
      if ( v16 )
        ((void (__fastcall *)(struct ID3D11Texture2D *))v16->lpVtbl->AddRef)(v16);
      v19[14] = 0LL;
      v19[15] = 0LL;
      v19[16] = 0LL;
      v19[17] = 0LL;
      *((_OWORD *)v19 + 9) = *(_OWORD *)&v32.Width;
      *((_OWORD *)v19 + 10) = *(_OWORD *)&v32.Format;
      v20 = *(_OWORD *)&v31.m256i_u64[2];
      v19[22] = *(_QWORD *)&v32.BindFlags;
      v21 = *(_OWORD *)v31.m256i_i8;
      *((_DWORD *)v19 + 46) = v32.MiscFlags;
      *((_DWORD *)v19 + 56) = v10;
      *((_OWORD *)v19 + 12) = v21;
      *((_DWORD *)v19 + 57) = v8;
      *((_OWORD *)v19 + 13) = v20;
      v19[29] = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
      v22 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 112LL))(v19);
      v13 = v22;
      if ( v22 >= 0 )
      {
        *((_QWORD *)this + 47) = v19;
        goto LABEL_19;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x26u, 0LL);
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      v23 = v13;
    }
    else
    {
      v13 = -2147024882;
      v23 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x24u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, v23, 0x411u, 0LL);
    goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x152u, 0LL);
  if ( v29 )
    CD3DDevice::Release(v29);
  return v5;
}
