/*
 * XREFs of ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x18023EE50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C2C90 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C3598 (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x1801D4FC0 (-HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x18020F620 (-HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x18020F714 (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023598C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x180239FE4 (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180250B78 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacySwapChain@@@Z @ 0x1802C2624 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, v8, 0x3EFu, 0LL);
      goto LABEL_27;
    }
    v10 = *((_DWORD *)this + 7734);
    v19 = *((_OWORD *)this + 1932);
    CMonitorTransform::Initialize(
      (_DWORD)this + 30888,
      (_DWORD)this + 120,
      (_DWORD)this + 30896,
      v9,
      *((_DWORD *)this + 7723),
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
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, v11, 0x3FBu, 0LL);
      goto LABEL_27;
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v21);
    Device = CDeviceManager::GetDevice(
               (CDeviceManager *)&g_DeviceManager,
               *(struct _LUID *)((char *)this + 33488),
               &v21);
    v3 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, Device, 0x3FDu, 0LL);
      goto LABEL_27;
    }
    if ( *((_DWORD *)this + 34) <= 1u )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
      LegacySwapChain = CD3DDevice::CreateLegacySwapChain(
                          v21,
                          v20,
                          (const struct D2D_SIZE_U *)this + 15,
                          (enum DXGI_FORMAT *)this + 32,
                          (CLegacyRenderTarget *)((char *)this + 33488),
                          *((_DWORD *)this + 8371),
                          *((_BYTE *)this + 33899),
                          (struct CLegacySwapChain **)v1);
      v3 = LegacySwapChain;
      if ( LegacySwapChain < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, LegacySwapChain, 0x40Cu, 0LL);
        goto LABEL_27;
      }
    }
    else
    {
      *((_BYTE *)this + 33899) = 0;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
      ConversionSwapChain = CD3DDevice::CreateConversionSwapChain(
                              v21,
                              v20,
                              (const struct D2D_SIZE_U *)this + 15,
                              (CLegacyRenderTarget *)((char *)this + 128),
                              (CLegacyRenderTarget *)((char *)this + 33488),
                              *((_DWORD *)this + 8371),
                              (struct CLegacySwapChain **)v1);
      v3 = ConversionSwapChain;
      if ( ConversionSwapChain < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, ConversionSwapChain, 0x419u, 0LL);
LABEL_27:
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v21);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
        if ( (v3 & 0x80000000) == 0 )
          return v3;
        if ( v3 == -2003304306 && *((_BYTE *)this + 33899) )
          *((_BYTE *)this + 33899) = 0;
LABEL_31:
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 20) + 232LL))((char *)this + 160);
        return v3;
      }
    }
    CTargetStats::Reset(
      (CLegacyRenderTarget *)((char *)this + 33512),
      *((_DWORD *)this + 8370),
      (struct IOverlaySwapChain *)((*v1 + 24) & -(__int64)(*v1 != 0)));
    COverlayContext::OnSwapChainCreated((CLegacyRenderTarget *)((char *)this + 216));
    updated = CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 160));
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, updated, 0x422u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, v17, 0x428u, 0LL);
      }
      else
      {
        *((_BYTE *)this + 33896) = 1;
        CTargetDirtyBase<8>::SetFullDirty((__int64)this + 31152);
      }
    }
    goto LABEL_27;
  }
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)(v4 + 24) + 24LL))(v4 + 24) < 0 )
  {
    v3 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, -2003304442, 0x3E7u, 0LL);
    goto LABEL_31;
  }
  v6 = CDeviceManager::HardwareProtectionRequired(v5, *(struct _LUID *)((char *)this + 33488));
  if ( v6 != (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v1 + 24) + 56LL))(*v1 + 24) )
  {
    LOBYTE(v7) = v6;
    if ( (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*v1 + 24) + 184LL))(*v1 + 24, v7) >= 0 )
    {
      *((_BYTE *)this + 33508) = v6;
      if ( *((_BYTE *)this + 31144) )
        *((_BYTE *)this + 31145) = 1;
      CTargetDirtyBase<8>::SetFullDirty((__int64)this + 31152);
    }
  }
  return v3;
}
