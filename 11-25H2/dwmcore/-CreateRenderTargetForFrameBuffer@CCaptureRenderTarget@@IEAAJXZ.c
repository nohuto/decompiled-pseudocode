/*
 * XREFs of ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1800C4784
 * Callers:
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1800C4694 (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18002E7F0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x1800C2C64 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800C4FE8 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@AEBU01@@Z @ 0x1800FE810 (--0DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@AEBU01@@Z.c)
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x1800FE950 (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x1801E67AC (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180220E44 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ @ 0x18025B3E4 (-GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ.c)
 *     ?CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802C66B4 (-CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(CCaptureRenderTarget *this)
{
  __int64 v1; // rbx
  char *v2; // r12
  struct IDXGIResource **v3; // rdi
  __int64 v5; // r8
  char v6; // al
  _QWORD *v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // edi
  __int64 v11; // rcx
  struct IDXGIResource *CurrentFrameBuffer; // rdi
  int v14; // eax
  unsigned int v15; // r14d
  struct _LUID v16; // rdx
  int Device; // eax
  float EffectiveSDRBoost; // xmm6_4
  CD3DDevice *v19; // rdi
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // eax
  __int64 v27; // r8
  int StereoRenderTargetBitmap; // eax
  int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // [rsp+20h] [rbp-49h]
  __int64 v32; // [rsp+40h] [rbp-29h] BYREF
  __int64 v33; // [rsp+48h] [rbp-21h] BYREF
  struct IDXGIResource *v34; // [rsp+50h] [rbp-19h] BYREF
  __int64 v35[3]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v36; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v37; // [rsp+D8h] [rbp+6Fh] BYREF
  struct CD3DDevice *v38; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v39; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = 0LL;
  v33 = 0LL;
  v2 = (char *)this + 2968;
  v39 = 0LL;
  v3 = (struct IDXGIResource **)*((_QWORD *)this + 371);
  v5 = 0LL;
  v37 = 0LL;
  while ( v3 != *((struct IDXGIResource ***)v2 + 1) )
  {
    if ( *v3 == CCaptureRenderTarget::GetCurrentFrameBuffer(this) )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v37, v3 + 1);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v39, v3 + 2);
      v5 = v37;
      v6 = 1;
      v1 = v39;
      if ( v37 )
        goto LABEL_5;
      break;
    }
    v3 += 3;
  }
  v6 = 0;
LABEL_5:
  if ( !v6 )
  {
    CurrentFrameBuffer = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
    v14 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))CurrentFrameBuffer->lpVtbl->QueryInterface)(
            CurrentFrameBuffer,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            &v33);
    LODWORD(v36) = v14;
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x44Du, 0LL);
      goto LABEL_39;
    }
    v16 = (struct _LUID)*((_QWORD *)this + 344);
    v38 = 0LL;
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v16, &v38);
    LODWORD(v36) = Device;
    v15 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Device, 0x450u, 0LL);
    }
    else
    {
      if ( IsDXGIColorSpaceHDR(*((enum DXGI_COLOR_SPACE_TYPE *)this + 34)) )
        EffectiveSDRBoost = CCaptureRenderTarget::GetEffectiveSDRBoost(this);
      else
        EffectiveSDRBoost = 0.0;
      if ( *((_BYTE *)this + 2943) )
      {
        v19 = v38;
        v27 = *((unsigned int *)this + 33);
        v32 = 0LL;
        StereoRenderTargetBitmap = CD3DDevice::CreateStereoRenderTargetBitmap(v38, v33, v27);
        LODWORD(v36) = StereoRenderTargetBitmap;
        v15 = StereoRenderTargetBitmap;
        if ( StereoRenderTargetBitmap < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, StereoRenderTargetBitmap, 0x465u, 0LL);
        }
        else
        {
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v37);
          v29 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v32)(
                  v32,
                  &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
                  &v37);
          LODWORD(v36) = v29;
          v15 = v29;
          if ( v29 >= 0 )
          {
            v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 24LL))(v32);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v39, v30);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
            v1 = v39;
            goto LABEL_26;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x467u, 0LL);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
      }
      else
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v37);
        v19 = v38;
        v20 = CD3DDevice::CreateRenderTargetBitmap(
                v38,
                v33,
                *((unsigned int *)this + 33),
                *((unsigned int *)this + 34),
                -3,
                LODWORD(EffectiveSDRBoost),
                &v37);
        LODWORD(v36) = v20;
        v15 = v20;
        if ( v20 >= 0 )
        {
LABEL_26:
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 144LL))(v37);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 152LL))(v21, 0LL);
          if ( v1 )
          {
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 144LL))(v1);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 152LL))(v22, 0LL);
          }
          *(_OWORD *)v35 = 0LL;
          v34 = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(v35, v37);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v35[1], v1);
          if ( *((_QWORD *)v2 + 1) == *(_QWORD *)v2 )
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 72LL))(
              v37,
              ((unsigned __int64)this + 2736) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
          if ( *((_QWORD *)v2 + 1) == *((_QWORD *)v2 + 2) )
          {
            std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
              v2,
              *((_QWORD *)v2 + 1),
              &v34);
          }
          else
          {
            CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair::DXGIResourceRenderTargetBitmapPair(
              *((CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair **)v2 + 1),
              (const struct CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)&v34);
            *((_QWORD *)v2 + 1) += 24LL;
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35[1]);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v35);
          if ( v19 )
            CD3DDevice::Release(v19);
          v5 = v37;
          goto LABEL_6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x45Bu, 0LL);
      }
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v38);
    goto LABEL_39;
  }
LABEL_6:
  v7 = (_QWORD *)((char *)this + 2640);
  v36 = v5;
  v8 = *((_DWORD *)this + 666);
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v10 = -2147024362;
    v23 = 181;
    v15 = -2147024362;
  }
  else
  {
    v10 = 0;
    if ( v9 <= *((_DWORD *)this + 665) )
    {
      *(_QWORD *)(*v7 + 8LL * v8) = v5;
      *((_DWORD *)this + 666) = v9;
LABEL_9:
      if ( !*((_BYTE *)this + 2943) )
      {
LABEL_10:
        v11 = 0LL;
        v1 = 0LL;
        v37 = 0LL;
        goto LABEL_11;
      }
      v24 = *((unsigned int *)this + 666);
      v36 = v1;
      v25 = v24 + 1;
      if ( (int)v24 + 1 >= (unsigned int)v24 )
      {
        v10 = 0;
        if ( v25 <= *((_DWORD *)this + 665) )
        {
          *(_QWORD *)(*v7 + 8 * v24) = v1;
          *((_DWORD *)this + 666) = v25;
          goto LABEL_10;
        }
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2640, 8, 1, &v36);
        v15 = v10;
        if ( v10 >= 0 )
          goto LABEL_10;
        v26 = 192;
      }
      else
      {
        v10 = -2147024362;
        v26 = 181;
        v15 = -2147024362;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v26, 0LL);
      v31 = 1159;
      goto LABEL_38;
    }
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2640, 8, 1, &v36);
    v15 = v10;
    if ( v10 >= 0 )
      goto LABEL_9;
    v23 = 192;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v23, 0LL);
  v31 = 1156;
LABEL_38:
  LODWORD(v36) = v15;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v31, 0LL);
LABEL_39:
  TranslateDXGIorD3DErrorInContext(v15, 0LL, &v36);
  v11 = v37;
  v10 = v36;
LABEL_11:
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    v11 = v37;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  return (unsigned int)v10;
}
