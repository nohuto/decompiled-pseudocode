/*
 * XREFs of ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1802357C0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x180188D04 (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x180188E50 (-HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x180189F74 (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18018A130 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x1801C27E0 (-HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x1802330FC (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023EA98 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180246390 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacySwapChain@@@Z @ 0x1802B8FE4 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::EnsureSwapChain(CLegacyRenderTarget *this)
{
  __int64 *v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx
  CDeviceManager *v5; // rcx
  char v6; // r14
  __int64 v7; // rdx
  int v8; // eax
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  int Device; // eax
  int ConversionSwapChain; // eax
  int LegacySwapChain; // eax
  int updated; // eax
  CGlobalComposition *v16; // rdx
  int v17; // eax
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  struct IDXGIOutput *v20; // [rsp+80h] [rbp+30h] BYREF
  struct CD3DDevice *v21; // [rsp+88h] [rbp+38h] BYREF

  v1 = (__int64 *)((char *)this + 200);
  v3 = 0;
  v4 = *((_QWORD *)this + 25);
  if ( !v4 )
  {
    v20 = 0LL;
    v21 = 0LL;
    v8 = CLegacyRenderTarget::EnsureDXGIOutput(this);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803968C8, 4u, v8, 0x3DBu, 0LL);
      goto LABEL_27;
    }
    v10 = *((_DWORD *)this + 7638);
    v19 = *((_OWORD *)this + 1908);
    CMonitorTransform::Initialize(
      (_DWORD)this + 30504,
      (_DWORD)this + 120,
      (_DWORD)this + 30512,
      v9,
      *((_DWORD *)this + 7627),
      v10,
      (__int64)&v19);
    if ( v20 )
      ((void (__fastcall *)(struct IDXGIOutput *))v20->lpVtbl->Release)(v20);
    v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIOutput **))this + 24))(
            *((_QWORD *)this + 24),
            &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa,
            &v20);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803968C8, 4u, v11, 0x3E7u, 0LL);
      goto LABEL_27;
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v21);
    Device = CDeviceManager::GetDevice(
               (CDeviceManager *)&g_DeviceManager,
               *(struct _LUID *)((char *)this + 33104),
               &v21);
    v3 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803968C8, 4u, Device, 0x3E9u, 0LL);
      goto LABEL_27;
    }
    if ( *((_DWORD *)this + 34) <= 1u )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
      LegacySwapChain = CD3DDevice::CreateLegacySwapChain(
                          v21,
                          v20,
                          (const struct D2D_SIZE_U *)this + 15,
                          (CLegacyRenderTarget *)((char *)this + 128),
                          (CLegacyRenderTarget *)((char *)this + 33104),
                          *((_DWORD *)this + 8275),
                          *((_BYTE *)this + 33515),
                          (struct CLegacySwapChain **)v1);
      v3 = LegacySwapChain;
      if ( LegacySwapChain < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803968C8, 4u, LegacySwapChain, 0x3F8u, 0LL);
        goto LABEL_27;
      }
    }
    else
    {
      *((_BYTE *)this + 33515) = 0;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
      ConversionSwapChain = CD3DDevice::CreateConversionSwapChain(
                              v21,
                              v20,
                              (const struct D2D_SIZE_U *)this + 15,
                              (CLegacyRenderTarget *)((char *)this + 128),
                              (CLegacyRenderTarget *)((char *)this + 33104),
                              *((_DWORD *)this + 8275),
                              (struct CLegacySwapChain **)v1);
      v3 = ConversionSwapChain;
      if ( ConversionSwapChain < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803968C8, 4u, ConversionSwapChain, 0x405u, 0LL);
LABEL_27:
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v21);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
        if ( (v3 & 0x80000000) == 0 )
          return v3;
        if ( v3 == -2003304306 && *((_BYTE *)this + 33515) )
          *((_BYTE *)this + 33515) = 0;
LABEL_31:
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 20) + 232LL))((char *)this + 160);
        return v3;
      }
    }
    CTargetStats::Reset(
      (CLegacyRenderTarget *)((char *)this + 33128),
      *((_DWORD *)this + 8274),
      (struct IOverlaySwapChain *)((*v1 + 24) & -(__int64)(*v1 != 0)));
    COverlayContext::OnSwapChainCreated((CLegacyRenderTarget *)((char *)this + 216));
    updated = CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 160));
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803968C8, 4u, updated, 0x40Eu, 0LL);
    }
    else
    {
      v16 = g_pComposition;
      *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 750LL) = 1;
      *(_BYTE *)(*((_QWORD *)v16 + 77) + 749LL) = 1;
      v17 = CLegacyRenderTarget::HandleDDAArrivalOrDeparture((CLegacyRenderTarget *)((char *)this + 160));
      v3 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803968C8, 4u, v17, 0x414u, 0LL);
      }
      else
      {
        *((_BYTE *)this + 33512) = 1;
        CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30768);
      }
    }
    goto LABEL_27;
  }
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)(v4 + 24) + 24LL))(v4 + 24) < 0 )
  {
    v3 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803968C8, 4u, -2003304442, 0x3D3u, 0LL);
    goto LABEL_31;
  }
  v6 = CDeviceManager::HardwareProtectionRequired(v5, *(struct _LUID *)((char *)this + 33104));
  if ( v6 != (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v1 + 24) + 56LL))(*v1 + 24) )
  {
    LOBYTE(v7) = v6;
    if ( (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*v1 + 24) + 184LL))(*v1 + 24, v7) >= 0 )
    {
      *((_BYTE *)this + 33124) = v6;
      if ( *((_BYTE *)this + 30760) )
        *((_BYTE *)this + 30761) = 1;
      CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30768);
    }
  }
  return v3;
}
