/*
 * XREFs of ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18028E930
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002FD74 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800C1B38 (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ @ 0x1800C4400 (-UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800C4E44 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801AA560 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18022D514 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18028ED1C (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x1802C3E94 (-OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessCreate(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        struct _LUID *a3)
{
  CD3DDevice *v5; // rsi
  struct CVisual *Resource; // rax
  void *v7; // r14
  int v8; // ebx
  int v9; // r9d
  int Device; // eax
  int v11; // eax
  int updated; // eax
  int v13; // r15d
  int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // rcx
  CComposition *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-69h]
  struct CD3DDevice *v20; // [rsp+30h] [rbp-59h] BYREF
  __int64 v21; // [rsp+38h] [rbp-51h]
  __int64 v22; // [rsp+40h] [rbp-49h] BYREF
  struct CVisual *v23; // [rsp+48h] [rbp-41h]
  int v24; // [rsp+50h] [rbp-39h] BYREF
  __int128 v25; // [rsp+54h] [rbp-35h]
  __int64 v26; // [rsp+64h] [rbp-25h]
  __int128 v27; // [rsp+70h] [rbp-19h] BYREF
  enum DXGI_FORMAT v28[4]; // [rsp+80h] [rbp-9h]
  __int64 v29; // [rsp+90h] [rbp+7h]
  int v30; // [rsp+98h] [rbp+Fh]

  v21 = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, a3[3].LowPart, 0xB6u);
  v7 = (void *)a3[1];
  v23 = Resource;
  v22 = 0LL;
  v29 = 0LL;
  v30 = 0;
  v27 = 0LL;
  *(_OWORD *)v28 = 0LL;
  if ( !Resource )
  {
    v8 = -2003303421;
    v9 = -2003303421;
    v19 = 29;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v19, 0LL);
    goto LABEL_23;
  }
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, a3[2], &v20);
  v8 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x21u, 0LL);
    v5 = v20;
    goto LABEL_23;
  }
  v5 = v20;
  v11 = CD3DDevice::OpenIndirectSwapchain(v20, v7);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x29u, 0LL);
    goto LABEL_23;
  }
  v7 = 0LL;
  updated = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v21 + 56LL))(v21, 0LL, (char *)this + 2816);
  v8 = updated;
  if ( updated < 0 )
  {
    v19 = 50;
    goto LABEL_20;
  }
  updated = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 352))(
              *((_QWORD *)this + 352),
              &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
              &v22);
  v8 = updated;
  if ( updated < 0 )
  {
    v19 = 51;
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v22 + 80LL))(v22, &v27);
  v13 = v27;
  v14 = DWORD1(v27);
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v28[0]);
  v8 = updated;
  if ( updated < 0 )
  {
    v19 = 59;
    goto LABEL_20;
  }
  updated = CRenderTarget::SetRootVisual(this, v23);
  v8 = updated;
  if ( updated < 0 )
  {
    v19 = 62;
    goto LABEL_20;
  }
  v15 = v21;
  *((_QWORD *)this + 351) = v21;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  *((_DWORD *)this + 30) = v13;
  *((_DWORD *)this + 31) = v14;
  *((_DWORD *)this + 708) = v13;
  *((_DWORD *)this + 709) = v14;
  *((struct _LUID *)this + 353) = a3[2];
  *((_BYTE *)this + 2800) = 1;
  updated = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(this);
  v8 = updated;
  if ( updated < 0 )
  {
    v19 = 75;
LABEL_20:
    v9 = updated;
    goto LABEL_3;
  }
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  COffScreenRenderTarget::UpdateTransformAndTreeBounds(this);
LABEL_23:
  if ( *((_QWORD *)this + 352) )
  {
    LODWORD(v20) = 2;
    (*(void (__fastcall **)(__int64, __int64, struct CD3DDevice **))(*(_QWORD *)v21 + 64LL))(v21, 4LL, &v20);
    v16 = *((_QWORD *)this + 352);
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      *((_QWORD *)this + 352) = 0LL;
    }
  }
  if ( v8 < 0 )
    CIndirectSwapchainRenderTarget::Unregister(this);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v22);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v5 )
    CD3DDevice::Release(v5);
  if ( v7 )
    CloseHandle(v7);
  v17 = (CComposition *)*((_QWORD *)this + 3);
  v24 = 19;
  v25 = 0LL;
  DWORD1(v25) = v8;
  v26 = 0LL;
  CComposition::NotifyHelper(v17, (struct MIL_MESSAGE *)&v24);
  return 0LL;
}
