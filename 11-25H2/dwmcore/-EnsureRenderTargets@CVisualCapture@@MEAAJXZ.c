/*
 * XREFs of ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1802B2340
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x180160D54 (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180220E44 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x180252F60 (-ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v12; // esi
  unsigned int v13; // ebx
  __int64 *v14; // rax
  CGlobalDrawingContext *v15; // rdi
  __int64 v16; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // ebx
  unsigned int v23; // [rsp+28h] [rbp-39h]
  __int64 v24; // [rsp+48h] [rbp-19h] BYREF
  CGlobalDrawingContext *v25; // [rsp+50h] [rbp-11h] BYREF
  __int64 v26; // [rsp+58h] [rbp-9h] BYREF
  __int64 v27; // [rsp+60h] [rbp-1h] BYREF
  int v28; // [rsp+68h] [rbp+7h]
  int v29; // [rsp+6Ch] [rbp+Bh]
  int v30; // [rsp+70h] [rbp+Fh]
  char v31; // [rsp+74h] [rbp+13h]
  __int16 v32; // [rsp+75h] [rbp+14h]
  char v33; // [rsp+77h] [rbp+16h]
  _QWORD v34[2]; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v35[16]; // [rsp+88h] [rbp+27h] BYREF

  v1 = *((_QWORD *)this + 344);
  v3 = -2003292412;
  if ( v1 )
  {
    v24 = 0LL;
    v4 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v1 + 72) + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v24);
    if ( v4(v1 + 72, &v24) < 0 )
    {
LABEL_21:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
      return v3;
    }
    v26 = 0LL;
    v25 = 0LL;
    v27 = 0LL;
    v5 = *(_QWORD *)(*((_QWORD *)this + 344) + 96LL);
    if ( v5 )
      v27 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 80LL))(v5, v34);
    v29 = 0;
    v28 = -3;
    v6 = (enum DXGI_COLOR_SPACE_TYPE *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 24LL))(v24, v34);
    v7 = ValidateSDRBoost(*((float *)this + 692), v6);
    v8 = v24;
    v30 = LODWORD(v7);
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v24 + 104LL);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v10 = v9(v8, &v27, &v26);
    v3 = v10;
    if ( v10 < 0 )
    {
      v23 = 67;
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 40LL))(v26);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v25);
      v12 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 24LL))(v24, v34) + 8);
      v13 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 24LL))(v24, v35) + 4);
      v14 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 120LL))(v26);
      v10 = CD3DDevice::CreateRenderTargetBitmap(v11, v14, v13, v12, -3, v30, &v25);
      v3 = v10;
      if ( v10 >= 0 )
      {
        v15 = v25;
        *((_QWORD *)this + 15) = *(_QWORD *)(*(__int64 (__fastcall **)(char *, _QWORD *))(*((_QWORD *)v25 + 1) + 32LL))(
                                              (char *)v25 + 8,
                                              v34);
        COffScreenRenderTarget::CalcTreeBounds(this, v16, v17);
        v18 = *((unsigned int *)this + 666);
        v25 = 0LL;
        v34[0] = v15;
        v19 = v18 + 1;
        if ( (int)v18 + 1 < (unsigned int)v18 )
        {
          v3 = -2147024362;
          v20 = 181;
          v21 = -2147024362;
LABEL_16:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, v20, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803C77B8, 3u, v21, 0x51u, 0LL);
          goto LABEL_20;
        }
        v21 = 0;
        if ( v19 > *((_DWORD *)this + 665) )
        {
          v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2640, 8, 1, v34);
          v3 = v21;
          if ( v21 < 0 )
          {
            v20 = 192;
            goto LABEL_16;
          }
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 330) + 8 * v18) = v15;
          *((_DWORD *)this + 666) = v19;
        }
        v3 = v21;
LABEL_20:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
        goto LABEL_21;
      }
      v23 = 75;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803C77B8, 3u, v10, v23, 0LL);
    goto LABEL_20;
  }
  return v3;
}
