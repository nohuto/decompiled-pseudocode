/*
 * XREFs of ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18023F210 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ @ 0x1800C1D18 (-EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800C5BD8 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801C5270 (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x1801D4FC0 (-HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x18020F410 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x18020F714 (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18020FBF0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x18022B9A0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x180239FE4 (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@QEAA_NXZ @ 0x18024A5F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wi.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x18024C9D8 (--1CFailFastError@@QEAA@XZ.c)
 *     ?GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z @ 0x18028A0E8 (-GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ @ 0x18028A1E0 (-HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802CBB7C (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 */

__int64 __fastcall CDDisplayRenderTarget::TryEnsureSwapChain(CDDisplayRenderTarget *this)
{
  struct CDDisplaySwapChain **v1; // r14
  __int64 v2; // rax
  struct _LUID *v4; // r12
  char *v5; // rbx
  CDirectFlipInfo **v6; // rdi
  int Device; // eax
  struct CD3DDevice *v8; // rbx
  unsigned int v10; // ecx
  int SwapChainCreationError; // eax
  struct CDDisplaySwapChain *v12; // rcx
  int DDisplaySwapchainForSource; // eax
  int v14; // eax
  int updated; // eax
  CGlobalComposition *v16; // rcx
  int v17; // eax
  struct CDDisplaySwapChain *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  CGlobalComposition *v22; // rcx
  int v23; // eax
  char v24; // al
  struct CDDisplaySwapChain *v25; // rcx
  int v26; // [rsp+50h] [rbp-10h] BYREF
  int *v27; // [rsp+58h] [rbp-8h]
  int v28; // [rsp+A0h] [rbp+40h] BYREF
  struct CD3DDevice *v29; // [rsp+A8h] [rbp+48h] BYREF

  v1 = (struct CDDisplaySwapChain **)((char *)this + 208);
  v2 = *((_QWORD *)this + 26);
  v28 = 0;
  if ( !v2 || *(_DWORD *)(*(_QWORD *)(v2 + 64) + 1112LL) )
  {
    v6 = (CDirectFlipInfo **)((char *)this + 160);
    CDDisplayRenderTarget::ReleaseSwapChain((CDDisplayRenderTarget *)((char *)this + 160));
    v29 = 0LL;
    if ( !*((_DWORD *)this + 30)
      || !*((_DWORD *)this + 31)
      || (unsigned __int64)(*((_QWORD *)this + 23) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      goto LABEL_10;
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v29);
    v4 = (struct _LUID *)((char *)this + 33488);
    Device = CDeviceManager::GetDevice(
               (CDeviceManager *)&g_DeviceManager,
               *(struct _LUID *)((char *)this + 33488),
               &v29);
    v28 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0xD5u, 0LL);
      goto LABEL_11;
    }
    v8 = v29;
    if ( *((_BYTE *)v29 + 1500) )
    {
      ScheduleCompositionPass(0, 0x2000u);
LABEL_10:
      v28 = 142213121;
LABEL_11:
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v29);
      goto LABEL_12;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::GetImpl'::`2'::impl) )
    {
      v10 = *((_DWORD *)v8 + 224);
      v27 = &v28;
      v26 = g_hrNoHardwareDeviceOverride;
      SwapChainCreationError = CD3DDevice::GetSwapChainCreationError(v10, 0);
      v12 = *v1;
      g_hrNoHardwareDeviceOverride = SwapChainCreationError;
      *v1 = 0LL;
      if ( v12 )
        CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease((__int64)v12);
      DDisplaySwapchainForSource = CDDisplayManager::CreateDDisplaySwapchainForSource(
                                     (CDDisplayRenderTarget *)((char *)this + 128),
                                     v8,
                                     (CDDisplayRenderTarget *)((char *)this + 33488),
                                     *((_DWORD *)this + 8378),
                                     (CDDisplayRenderTarget *)((char *)this + 128),
                                     (const struct D2D_SIZE_U *)this + 15,
                                     *((_DWORD *)this + 8380),
                                     *((void **)this + 23),
                                     v1);
      v28 = DDisplaySwapchainForSource;
      if ( DDisplaySwapchainForSource < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DDisplaySwapchainForSource, 0xECu, 0LL);
      }
      else
      {
        v14 = CDDisplayRenderTarget::EnsureDXGIOutput(this);
        v28 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xEEu, 0LL);
        }
        else
        {
          CTargetStats::Reset(
            (CDDisplayRenderTarget *)((char *)this + 33528),
            *((_DWORD *)this + 8379),
            (struct IOverlaySwapChain *)(((unsigned __int64)*v1 + 24) & -(__int64)(*v1 != 0LL)));
          COverlayContext::OnSwapChainCreated((CDDisplayRenderTarget *)((char *)this + 224));
          updated = CDDisplayRenderTarget::UpdateMPOCaps(v6);
          v28 = updated;
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0xF4u, 0LL);
          }
          else
          {
            v16 = g_pComposition;
            *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 750LL) = 1;
            *(_BYTE *)(*((_QWORD *)v16 + 77) + 749LL) = 1;
            v17 = CDDisplayRenderTarget::HandleDDAArrivalOrDeparture((CDDisplayRenderTarget *)v6);
            v28 = v17;
            if ( v17 >= 0 )
            {
              v5 = (char *)this + 31160;
              *((_BYTE *)this + 33904) = 1;
              CTargetDirtyBase<8>::SetFullDirty((__int64)this + 31160);
              CFailFastError::~CFailFastError((CFailFastError *)&v26);
              goto LABEL_35;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xFAu, 0LL);
          }
        }
      }
      CFailFastError::~CFailFastError((CFailFastError *)&v26);
      goto LABEL_11;
    }
    v18 = *v1;
    *v1 = 0LL;
    if ( v18 )
      CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease((__int64)v18);
    v19 = CDDisplayManager::CreateDDisplaySwapchainForSource(
            (CDDisplayRenderTarget *)((char *)this + 128),
            v8,
            (CDDisplayRenderTarget *)((char *)this + 33488),
            *((_DWORD *)this + 8378),
            (CDDisplayRenderTarget *)((char *)this + 128),
            (const struct D2D_SIZE_U *)this + 15,
            *((_DWORD *)this + 8380),
            *((void **)this + 23),
            v1);
    v28 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x109u, 0LL);
      goto LABEL_11;
    }
    v20 = CDDisplayRenderTarget::EnsureDXGIOutput(this);
    v28 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x10Bu, 0LL);
      goto LABEL_11;
    }
    CTargetStats::Reset(
      (CDDisplayRenderTarget *)((char *)this + 33528),
      *((_DWORD *)this + 8379),
      (struct IOverlaySwapChain *)(((unsigned __int64)*v1 + 24) & -(__int64)(*v1 != 0LL)));
    COverlayContext::OnSwapChainCreated((CDDisplayRenderTarget *)((char *)this + 224));
    v21 = CDDisplayRenderTarget::UpdateMPOCaps(v6);
    v28 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x111u, 0LL);
      goto LABEL_11;
    }
    v22 = g_pComposition;
    *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 750LL) = 1;
    *(_BYTE *)(*((_QWORD *)v22 + 77) + 749LL) = 1;
    v23 = CDDisplayRenderTarget::HandleDDAArrivalOrDeparture((CDDisplayRenderTarget *)v6);
    v28 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x117u, 0LL);
      goto LABEL_11;
    }
    v5 = (char *)this + 31160;
    *((_BYTE *)this + 33904) = 1;
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 31160);
LABEL_35:
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v29);
    goto LABEL_36;
  }
  v4 = (struct _LUID *)((char *)this + 33488);
  v5 = (char *)this + 31160;
  v6 = (CDirectFlipInfo **)((char *)this + 160);
LABEL_36:
  v24 = CDeviceManager::HardwareProtectionRequired(this, *v4);
  v25 = *v1;
  if ( v24 != *((_BYTE *)*v1 + 124) )
  {
    *((_BYTE *)v25 + 124) = v24;
    *((_BYTE *)v25 + 664) = 1;
    v25 = *v1;
    *((_BYTE *)this + 33508) = v24;
  }
  v28 = CDDisplaySwapChain::EnsureDisplayBuffers(v25);
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x132u, 0LL);
  }
  else if ( *((_BYTE *)*v1 + 665) )
  {
    CTargetDirtyBase<8>::SetFullDirty((__int64)v5);
    if ( *((_BYTE *)this + 31152) )
      *((_BYTE *)this + 31153) = 1;
  }
LABEL_12:
  if ( v28 < 0 )
    CDDisplayRenderTarget::ReleaseSwapChain((CDDisplayRenderTarget *)v6);
  return (unsigned int)v28;
}
