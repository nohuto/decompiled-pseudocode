/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180205940
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18015A618 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(COffScreenRenderTarget *this)
{
  unsigned int v1; // ebx
  int v4; // r8d
  __int64 v5; // rcx
  int updated; // eax
  int Device; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  CGlobalDrawingContext *v11; // r8
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // eax
  int v15; // esi
  CGlobalDrawingContext *v16; // [rsp+40h] [rbp-40h] BYREF
  struct CD3DDevice *v17; // [rsp+48h] [rbp-38h] BYREF
  struct _LUID v18; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-18h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 666) )
  {
    v4 = 87;
    v5 = **(_QWORD **)(*((_QWORD *)this + 3) + 616LL);
    if ( v5 )
      v4 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v5 + 24LL))(v5, v19, 87LL);
    updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v4);
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x3Au, 0LL);
      return v1;
    }
    (*(void (__fastcall **)(char *, struct _LUID *))(*((_QWORD *)this + 12) + 24LL))((char *)this + 96, &v18);
    v17 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v17);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v18, &v17);
    v1 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x40u, 0LL);
      goto LABEL_19;
    }
    v16 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v16, v8, v9);
    v10 = CD3DDevice::CreateRenderTargetBitmap(
            (__int64)v17,
            (COffScreenRenderTarget *)((char *)this + 160),
            (const struct D2D_SIZE_U *)this + 15,
            (COffScreenRenderTarget *)((char *)this + 128),
            (struct RenderTargetInfo *)&v18,
            0,
            &v16);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x48u, 0LL);
      goto LABEL_17;
    }
    v11 = v16;
    v12 = *((unsigned int *)this + 666);
    v16 = 0LL;
    v19[0] = v11;
    v13 = v12 + 1;
    if ( (int)v12 + 1 < (unsigned int)v12 )
    {
      v1 = -2147024362;
      v14 = 181;
      v15 = -2147024362;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, v14, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x4Au, 0LL);
LABEL_17:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
LABEL_19:
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v17);
      return v1;
    }
    v15 = 0;
    if ( v13 > *((_DWORD *)this + 665) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2640, 8, 1, v19);
      v1 = v15;
      if ( v15 < 0 )
      {
        v14 = 192;
        goto LABEL_10;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 330) + 8 * v12) = v11;
      *((_DWORD *)this + 666) = v13;
    }
    v1 = v15;
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 320);
    goto LABEL_17;
  }
  return v1;
}
