/*
 * XREFs of ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180235B80 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x180159E5C (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x180188CA0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x180188D04 (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180188F50 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ @ 0x180189B18 (-EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801B5880 (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x1801C27E0 (-HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180203920 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x1802330FC (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x180243AA0 (--1CFailFastError@@QEAA@XZ.c)
 *     ?GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z @ 0x18027F2CC (-GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ @ 0x18027F3C0 (-HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802C27F4 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 */

__int64 __fastcall CDDisplayRenderTarget::TryEnsureSwapChain(CDDisplayRenderTarget *this)
{
  struct CDDisplaySwapChain **v1; // r14
  __int64 v2; // rax
  struct _LUID *v4; // r15
  char *v5; // rbx
  CDDisplayRenderTarget *v6; // rsi
  int Device; // eax
  struct CD3DDevice *v8; // rbx
  CDDisplayRenderTarget *v9; // rcx
  unsigned int v11; // ecx
  int SwapChainCreationError; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct CDDisplaySwapChain *v15; // rcx
  int DDisplaySwapchainForSource; // eax
  int v17; // eax
  int updated; // eax
  CGlobalComposition *v19; // rcx
  int v20; // eax
  char v21; // al
  struct CDDisplaySwapChain *v22; // rcx
  int v23; // [rsp+50h] [rbp-10h] BYREF
  int *v24; // [rsp+58h] [rbp-8h]
  int v25; // [rsp+A0h] [rbp+40h] BYREF
  struct CD3DDevice *v26; // [rsp+A8h] [rbp+48h] BYREF

  v1 = (struct CDDisplaySwapChain **)((char *)this + 208);
  v2 = *((_QWORD *)this + 26);
  v25 = 0;
  if ( v2 && !*(_DWORD *)(*(_QWORD *)(v2 + 64) + 1112LL) )
  {
    v4 = (struct _LUID *)((char *)this + 33104);
    v5 = (char *)this + 30776;
    v6 = (CDDisplayRenderTarget *)((char *)this + 160);
    goto LABEL_23;
  }
  v6 = (CDDisplayRenderTarget *)((char *)this + 160);
  CDDisplayRenderTarget::ReleaseSwapChain((CDDisplayRenderTarget *)((char *)this + 160));
  v26 = 0LL;
  if ( !*((_DWORD *)this + 30)
    || !*((_DWORD *)this + 31)
    || (unsigned __int64)(*((_QWORD *)this + 23) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    goto LABEL_10;
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v26);
  v4 = (struct _LUID *)((char *)this + 33104);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 33104), &v26);
  v25 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0xD5u, 0LL);
    goto LABEL_11;
  }
  v8 = v26;
  if ( *((_BYTE *)v26 + 1500) )
  {
    ScheduleCompositionPass(0, 0x2000u);
LABEL_10:
    v25 = 142213121;
LABEL_11:
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v26);
LABEL_12:
    v9 = v6;
    goto LABEL_13;
  }
  v11 = *((_DWORD *)v26 + 224);
  v24 = &v25;
  v23 = g_hrNoHardwareDeviceOverride;
  SwapChainCreationError = CD3DDevice::GetSwapChainCreationError(v11, 0);
  v15 = *v1;
  g_hrNoHardwareDeviceOverride = SwapChainCreationError;
  *v1 = 0LL;
  if ( v15 )
    CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease((__int64)v15, v13, v14);
  DDisplaySwapchainForSource = CDDisplayManager::CreateDDisplaySwapchainForSource(
                                 (CDDisplayRenderTarget *)((char *)this + 128),
                                 v8,
                                 (CDDisplayRenderTarget *)((char *)this + 33104),
                                 *((_DWORD *)this + 8282),
                                 (CDDisplayRenderTarget *)((char *)this + 128),
                                 (const struct D2D_SIZE_U *)this + 15,
                                 *((_DWORD *)this + 8284),
                                 *((void **)this + 23),
                                 v1);
  v25 = DDisplaySwapchainForSource;
  if ( DDisplaySwapchainForSource < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DDisplaySwapchainForSource, 0xEAu, 0LL);
    goto LABEL_31;
  }
  v17 = CDDisplayRenderTarget::EnsureDXGIOutput(this);
  v25 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xECu, 0LL);
    goto LABEL_31;
  }
  CTargetStats::Reset(
    (CDDisplayRenderTarget *)((char *)this + 33144),
    *((_DWORD *)this + 8283),
    (struct IOverlaySwapChain *)(((unsigned __int64)*v1 + 24) & -(__int64)(*v1 != 0LL)));
  COverlayContext::OnSwapChainCreated((CDDisplayRenderTarget *)((char *)this + 224));
  updated = CDDisplayRenderTarget::UpdateMPOCaps(v6);
  v25 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0xF2u, 0LL);
    goto LABEL_31;
  }
  v19 = g_pComposition;
  *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 750LL) = 1;
  *(_BYTE *)(*((_QWORD *)v19 + 77) + 749LL) = 1;
  v20 = CDDisplayRenderTarget::HandleDDAArrivalOrDeparture(v6);
  v25 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0xF8u, 0LL);
LABEL_31:
    CFailFastError::~CFailFastError((CFailFastError *)&v23);
    goto LABEL_11;
  }
  v5 = (char *)this + 30776;
  *((_BYTE *)this + 33520) = 1;
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30776);
  CFailFastError::~CFailFastError((CFailFastError *)&v23);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v26);
LABEL_23:
  v21 = CDeviceManager::HardwareProtectionRequired(this, *v4);
  v22 = *v1;
  if ( v21 != *((_BYTE *)*v1 + 124) )
  {
    *((_BYTE *)v22 + 124) = v21;
    *((_BYTE *)v22 + 664) = 1;
    v22 = *v1;
    *((_BYTE *)this + 33124) = v21;
  }
  v25 = CDDisplaySwapChain::EnsureDisplayBuffers(v22);
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x112u, 0LL);
    goto LABEL_12;
  }
  v9 = v6;
  if ( *((_BYTE *)*v1 + 665) )
  {
    CTargetDirtyBase<8>::SetFullDirty((__int64)v5);
    v9 = v6;
    if ( *((_BYTE *)this + 30768) )
      *((_BYTE *)this + 30769) = 1;
  }
LABEL_13:
  if ( v25 < 0 )
    CDDisplayRenderTarget::ReleaseSwapChain(v9);
  return (unsigned int)v25;
}
