/*
 * XREFs of ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18015957C
 * Callers:
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18015948C (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800607B0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180159DD0 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x180159E90 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180159EB4 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18015A06C (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x18015A0F8 (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 *     ??0DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@AEBU01@@Z @ 0x18015A5A8 (--0DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@AEBU01@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ @ 0x18024FEB4 (-GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ.c)
 *     ?CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802BD054 (-CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(CCaptureRenderTarget *this)
{
  CGlobalDrawingContext *v1; // rbx
  char *v2; // r12
  struct IDXGIResource **v3; // rdi
  CGlobalDrawingContext *v5; // r8
  char v6; // al
  _QWORD *v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // edi
  CGlobalDrawingContext *v11; // rcx
  struct IDXGIResource *CurrentFrameBuffer; // rdi
  int v14; // eax
  int v15; // r14d
  int Device; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  float EffectiveSDRBoost; // xmm6_4
  CD3DDevice *v20; // rdi
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // r8
  int StereoRenderTargetBitmap; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // [rsp+20h] [rbp-49h]
  __int64 v35; // [rsp+40h] [rbp-29h] BYREF
  __int64 v36; // [rsp+48h] [rbp-21h] BYREF
  struct IDXGIResource *v37; // [rsp+50h] [rbp-19h] BYREF
  __int128 v38; // [rsp+58h] [rbp-11h] BYREF
  CGlobalDrawingContext *v39; // [rsp+D0h] [rbp+67h] BYREF
  CGlobalDrawingContext *v40; // [rsp+D8h] [rbp+6Fh] BYREF
  CD3DDevice *v41; // [rsp+E0h] [rbp+77h] BYREF
  CGlobalDrawingContext *v42; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = 0LL;
  v36 = 0LL;
  v2 = (char *)this + 2968;
  v42 = 0LL;
  v3 = (struct IDXGIResource **)*((_QWORD *)this + 371);
  v5 = 0LL;
  v40 = 0LL;
  while ( v3 != *((struct IDXGIResource ***)v2 + 1) )
  {
    if ( *v3 == CCaptureRenderTarget::GetCurrentFrameBuffer(this) )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v40, v3 + 1);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v42, v3 + 2);
      v5 = v40;
      v6 = 1;
      v1 = v42;
      if ( v40 )
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
            &v36);
    LODWORD(v39) = v14;
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x40Bu, 0LL);
      goto LABEL_39;
    }
    v41 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v41);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 2752), &v41);
    LODWORD(v39) = Device;
    v15 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x40Eu, 0LL);
    }
    else
    {
      if ( IsDXGIColorSpaceHDR(*((enum DXGI_COLOR_SPACE_TYPE *)this + 34)) )
        EffectiveSDRBoost = CCaptureRenderTarget::GetEffectiveSDRBoost(this);
      else
        EffectiveSDRBoost = 0.0;
      if ( *((_BYTE *)this + 2943) )
      {
        v20 = v41;
        v28 = *((unsigned int *)this + 33);
        v35 = 0LL;
        StereoRenderTargetBitmap = CD3DDevice::CreateStereoRenderTargetBitmap(v41, v36, v28);
        LODWORD(v39) = StereoRenderTargetBitmap;
        v15 = StereoRenderTargetBitmap;
        if ( StereoRenderTargetBitmap < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, StereoRenderTargetBitmap, 0x423u, 0LL);
        }
        else
        {
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v40, v30, v31);
          v32 = (**(__int64 (__fastcall ***)(__int64, GUID *, CGlobalDrawingContext **))v35)(
                  v35,
                  &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
                  &v40);
          LODWORD(v39) = v32;
          v15 = v32;
          if ( v32 >= 0 )
          {
            v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 24LL))(v35);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v42, v33);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
            v1 = v42;
            goto LABEL_26;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x425u, 0LL);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
      }
      else
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v40, v17, v18);
        v20 = v41;
        v21 = CD3DDevice::CreateRenderTargetBitmap(
                v41,
                v36,
                *((unsigned int *)this + 33),
                *((unsigned int *)this + 34),
                -3,
                LODWORD(EffectiveSDRBoost),
                &v40);
        LODWORD(v39) = v21;
        v15 = v21;
        if ( v21 >= 0 )
        {
LABEL_26:
          v22 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v40 + 144LL))(v40);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 152LL))(v22, 0LL);
          if ( v1 )
          {
            v23 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v1 + 144LL))(v1);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 152LL))(v23, 0LL);
          }
          v38 = 0LL;
          v37 = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v38, v40);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=((char *)&v38 + 8, v1);
          if ( *((_QWORD *)v2 + 1) == *(_QWORD *)v2 )
            (*(void (__fastcall **)(CGlobalDrawingContext *, _QWORD))(*(_QWORD *)v40 + 72LL))(
              v40,
              ((unsigned __int64)this + 2736) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
          if ( *((_QWORD *)v2 + 1) == *((_QWORD *)v2 + 2) )
          {
            std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
              v2,
              *((_QWORD *)v2 + 1),
              &v37);
          }
          else
          {
            CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair::DXGIResourceRenderTargetBitmapPair(
              *((CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair **)v2 + 1),
              (const struct CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)&v37);
            *((_QWORD *)v2 + 1) += 24LL;
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v38 + 1);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v38);
          if ( v20 )
            CD3DDevice::Release(v20);
          v5 = v40;
          goto LABEL_6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x419u, 0LL);
      }
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v41);
    goto LABEL_39;
  }
LABEL_6:
  v7 = (_QWORD *)((char *)this + 2640);
  v39 = v5;
  v8 = *((_DWORD *)this + 666);
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v10 = -2147024362;
    v24 = 181;
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
        v40 = 0LL;
        goto LABEL_11;
      }
      v25 = *((unsigned int *)this + 666);
      v39 = v1;
      v26 = v25 + 1;
      if ( (int)v25 + 1 >= (unsigned int)v25 )
      {
        v10 = 0;
        if ( v26 <= *((_DWORD *)this + 665) )
        {
          *(_QWORD *)(*v7 + 8 * v25) = v1;
          *((_DWORD *)this + 666) = v26;
          goto LABEL_10;
        }
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2640, 8, 1, &v39);
        v15 = v10;
        if ( v10 >= 0 )
          goto LABEL_10;
        v27 = 192;
      }
      else
      {
        v10 = -2147024362;
        v27 = 181;
        v15 = -2147024362;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v27, 0LL);
      v34 = 1093;
      goto LABEL_38;
    }
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2640, 8, 1, &v39);
    v15 = v10;
    if ( v10 >= 0 )
      goto LABEL_9;
    v24 = 192;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v24, 0LL);
  v34 = 1090;
LABEL_38:
  LODWORD(v39) = v15;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v34, 0LL);
LABEL_39:
  TranslateDXGIorD3DErrorInContext(v15, 0, &v39);
  v11 = v40;
  v10 = (int)v39;
LABEL_11:
  if ( v1 )
  {
    (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v1 + 16LL))(v1);
    v11 = v40;
  }
  if ( v11 )
    (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  return (unsigned int)v10;
}
