/*
 * XREFs of ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1802A8880
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x180096F3C (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180159EB4 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x180247FB4 (-ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualCapture::EnsureRenderTargets(CVisualCapture *this)
{
  __int64 v1; // rdi
  unsigned int v3; // esi
  int (__fastcall *v4)(__int64, __int64 *); // rbx
  __int64 v5; // rcx
  enum DXGI_COLOR_SPACE_TYPE *v6; // rax
  float v7; // xmm0_4
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *, __int64 *); // rsi
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // esi
  unsigned int v15; // ebx
  __int64 *v16; // rax
  CGlobalDrawingContext *v17; // rdi
  __int64 v18; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v19; // r8
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // eax
  int v23; // ebx
  unsigned int v25; // [rsp+28h] [rbp-39h]
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  CGlobalDrawingContext *v27; // [rsp+50h] [rbp-11h] BYREF
  __int64 v28; // [rsp+58h] [rbp-9h] BYREF
  __int64 v29; // [rsp+60h] [rbp-1h] BYREF
  int v30; // [rsp+68h] [rbp+7h]
  int v31; // [rsp+6Ch] [rbp+Bh]
  int v32; // [rsp+70h] [rbp+Fh]
  char v33; // [rsp+74h] [rbp+13h]
  __int16 v34; // [rsp+75h] [rbp+14h]
  char v35; // [rsp+77h] [rbp+16h]
  _QWORD v36[2]; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v37[16]; // [rsp+88h] [rbp+27h] BYREF

  v1 = *((_QWORD *)this + 344);
  v3 = -2003292412;
  if ( v1 )
  {
    v26 = 0LL;
    v4 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v1 + 72) + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v26);
    if ( v4(v1 + 72, &v26) < 0 )
    {
LABEL_21:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
      return v3;
    }
    v28 = 0LL;
    v27 = 0LL;
    v29 = 0LL;
    v5 = *(_QWORD *)(*((_QWORD *)this + 344) + 96LL);
    if ( v5 )
      v29 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 80LL))(v5, v36);
    v31 = 0;
    v30 = -3;
    v6 = (enum DXGI_COLOR_SPACE_TYPE *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 24LL))(v26, v36);
    v7 = ValidateSDRBoost(*((float *)this + 692), v6);
    v8 = v26;
    v32 = LODWORD(v7);
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v26 + 104LL);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    v10 = v9(v8, &v29, &v28);
    v3 = v10;
    if ( v10 < 0 )
    {
      v25 = 67;
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v27, v12, v13);
      v14 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 24LL))(v26, v36) + 8);
      v15 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 24LL))(v26, v37) + 4);
      v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 120LL))(v28);
      v10 = CD3DDevice::CreateRenderTargetBitmap(v11, v16, v15, v14, -3, v32, &v27);
      v3 = v10;
      if ( v10 >= 0 )
      {
        v17 = v27;
        *((_QWORD *)this + 15) = *(_QWORD *)(*(__int64 (__fastcall **)(char *, _QWORD *))(*((_QWORD *)v27 + 1) + 32LL))(
                                              (char *)v27 + 8,
                                              v36);
        COffScreenRenderTarget::CalcTreeBounds(this, v18, v19);
        v20 = *((unsigned int *)this + 666);
        v27 = 0LL;
        v36[0] = v17;
        v21 = v20 + 1;
        if ( (int)v20 + 1 < (unsigned int)v20 )
        {
          v3 = -2147024362;
          v22 = 181;
          v23 = -2147024362;
LABEL_16:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, v22, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BC928, 3u, v23, 0x51u, 0LL);
          goto LABEL_20;
        }
        v23 = 0;
        if ( v21 > *((_DWORD *)this + 665) )
        {
          v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2640, 8, 1, v36);
          v3 = v23;
          if ( v23 < 0 )
          {
            v22 = 192;
            goto LABEL_16;
          }
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 330) + 8 * v20) = v17;
          *((_DWORD *)this + 666) = v21;
        }
        v3 = v23;
LABEL_20:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
        goto LABEL_21;
      }
      v25 = 75;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BC928, 3u, v10, v25, 0LL);
    goto LABEL_20;
  }
  return v3;
}
