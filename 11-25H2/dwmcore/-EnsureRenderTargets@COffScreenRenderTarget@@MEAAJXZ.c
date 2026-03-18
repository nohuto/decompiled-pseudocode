/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1802121D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18022D514 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(COffScreenRenderTarget *this)
{
  unsigned int v1; // ebx
  enum DXGI_FORMAT v4; // r8d
  __int64 v5; // rcx
  int updated; // eax
  int Device; // eax
  int v8; // eax
  CGlobalDrawingContext *v9; // r8
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // esi
  CGlobalDrawingContext *v14; // [rsp+40h] [rbp-40h] BYREF
  struct CD3DDevice *v15; // [rsp+48h] [rbp-38h] BYREF
  struct _LUID v16; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-18h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 666) )
  {
    v4 = DXGI_FORMAT_B8G8R8A8_UNORM;
    v5 = **(_QWORD **)(*((_QWORD *)this + 3) + 616LL);
    if ( v5 )
      v4 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v5 + 24LL))(v5, v17, 87LL);
    updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v4);
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x3Au, 0LL);
      return v1;
    }
    (*(void (__fastcall **)(char *, struct _LUID *))(*((_QWORD *)this + 12) + 24LL))((char *)this + 96, &v16);
    v15 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v15);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v16, &v15);
    v1 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x40u, 0LL);
      goto LABEL_19;
    }
    v14 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v14);
    v8 = CD3DDevice::CreateRenderTargetBitmap(
           (__int64)v15,
           (COffScreenRenderTarget *)((char *)this + 160),
           (struct D2D_SIZE_U *)this + 15,
           (COffScreenRenderTarget *)((char *)this + 128),
           (struct RenderTargetInfo *)&v16,
           0,
           &v14);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x48u, 0LL);
      goto LABEL_17;
    }
    v9 = v14;
    v10 = *((unsigned int *)this + 666);
    v14 = 0LL;
    v17[0] = v9;
    v11 = v10 + 1;
    if ( (int)v10 + 1 < (unsigned int)v10 )
    {
      v1 = -2147024362;
      v12 = 181;
      v13 = -2147024362;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, v12, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x4Au, 0LL);
LABEL_17:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
LABEL_19:
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v15);
      return v1;
    }
    v13 = 0;
    if ( v11 > *((_DWORD *)this + 665) )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2640, 8, 1, v17);
      v1 = v13;
      if ( v13 < 0 )
      {
        v12 = 192;
        goto LABEL_10;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 330) + 8 * v10) = v9;
      *((_DWORD *)this + 666) = v11;
    }
    v1 = v13;
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 320);
    goto LABEL_17;
  }
  return v1;
}
