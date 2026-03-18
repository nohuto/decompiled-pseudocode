/*
 * XREFs of ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1800C38AC
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x1800C3760 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 *     ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x1800C4520 (-ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800431D0 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z @ 0x1800C24D8 (-CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x1800FE7E8 (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180100414 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180100C0C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??1?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180101248 (--1-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x180160D54 (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x18018795C (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18022D514 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@AEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18022E5CC (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::EnsureResources(
        CCaptureRenderTarget *this,
        struct CD3DDevice *a2,
        struct D3D11_SUBRESOURCE_DATA *a3)
{
  int v3; // ebx
  struct ID3D11Fence **v4; // rsi
  __int64 i; // r14
  __int64 v8; // r15
  int v10; // eax
  enum DXGI_FORMAT v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  struct ID3D11Fence *v15; // r8
  int Fence; // eax
  int updated; // eax
  const char **v18; // rdx
  char *v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-79h] BYREF
  struct ID3D11Texture2D *v21; // [rsp+38h] [rbp-71h] BYREF
  __int64 v22; // [rsp+40h] [rbp-69h] BYREF
  const char *v23; // [rsp+48h] [rbp-61h] BYREF
  const char *v24; // [rsp+50h] [rbp-59h] BYREF
  int v25; // [rsp+58h] [rbp-51h]
  __int128 v26; // [rsp+60h] [rbp-49h] BYREF
  enum DXGI_FORMAT v27[4]; // [rsp+70h] [rbp-39h]
  __int64 v28; // [rsp+80h] [rbp-29h]
  int v29; // [rsp+88h] [rbp-21h]
  D3D11_TEXTURE2D_DESC v30; // [rsp+90h] [rbp-19h] BYREF

  v3 = 0;
  v4 = (struct ID3D11Fence **)((char *)this + 3000);
  v20 = 0;
  if ( *((_QWORD *)this + 375) )
    goto LABEL_2;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 375);
  v25 = 18;
  v24 = "CaptureRenderFence";
  Fence = CD3DDevice::CreateFence(a2, (const struct CResourceTag *)&v24, v15, v4);
  v20 = Fence;
  v3 = Fence;
  if ( Fence >= 0 )
  {
    *((_QWORD *)this + 376) = 0LL;
LABEL_2:
    for ( i = (__int64)(*((_QWORD *)this + 382) - *((_QWORD *)this + 381)) >> 3; ; LODWORD(i) = i + 1 )
    {
      v8 = *((_QWORD *)this + 384);
      if ( (unsigned int)i >= (unsigned __int64)((*((_QWORD *)this + 385) - v8) >> 3) )
        goto LABEL_4;
      v21 = 0LL;
      memset(&v30, 0, sizeof(v30));
      v10 = CD3DDevice::OpenSharedTexture((__int64 **)a2, &v30, a3, *(void **)(v8 + 8LL * (unsigned int)i), 1, &v21);
      v20 = v10;
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x284u, 0LL);
        goto LABEL_17;
      }
      v28 = 0LL;
      v29 = 0;
      v26 = 0LL;
      *(_OWORD *)v27 = 0LL;
      ((void (__fastcall *)(struct ID3D11Texture2D *, __int128 *))v21->lpVtbl->GetDesc)(v21, &v26);
      if ( !(unsigned int)IsValidPixelFormat(v27[0]) )
      {
        CCaptureRenderTarget::ResetBuffers(this);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
        goto LABEL_4;
      }
      if ( *((_QWORD *)this + 382) == *((_QWORD *)this + 381) )
      {
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v11);
        v20 = updated;
        v3 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x296u, 0LL);
LABEL_17:
          if ( v21 )
            ((void (__fastcall *)(struct ID3D11Texture2D *))v21->lpVtbl->Release)(v21);
          goto LABEL_4;
        }
        if ( !*((_BYTE *)this + 2942) )
        {
          *((_QWORD *)this + 15) = v26;
          COffScreenRenderTarget::CalcTreeBounds(this);
        }
        *((_BYTE *)this + 2943) = HIDWORD(v26) > 1;
      }
      v22 = 0LL;
      v12 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v21->lpVtbl->QueryInterface)(
              v21,
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              &v22);
      v20 = v12;
      v3 = v12;
      if ( v12 < 0 )
        break;
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 378) + 48LL))(
              *((_QWORD *)this + 378),
              0LL,
              0LL,
              *(_QWORD *)(v8 + 8LL * (unsigned int)i),
              *((_QWORD *)this + 344));
      v20 = v13;
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x2AEu, 0LL);
        goto LABEL_16;
      }
      if ( *((_QWORD *)this + 382) == *((_QWORD *)this + 383) )
      {
        std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> const &>(
          (char *)this + 3048,
          *((_QWORD *)this + 382),
          &v22);
      }
      else
      {
        wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
          *((_QWORD **)this + 382),
          v22);
        *((_QWORD *)this + 382) += 8LL;
      }
      v23 = 0LL;
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const char **))(**((_QWORD **)this + 378) + 64LL))(
              *((_QWORD *)this + 378),
              *(_QWORD *)(v8 + 8LL * (unsigned int)i),
              &v23);
      v20 = v14;
      v3 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2B5u, 0LL);
        goto LABEL_16;
      }
      v18 = (const char **)*((_QWORD *)this + 388);
      v24 = v23;
      if ( v18 == *((const char ***)this + 389) )
      {
        std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
          (char *)this + 3096,
          v18,
          &v24);
        v19 = (char *)v24;
      }
      else
      {
        v19 = 0LL;
        *v18 = v23;
        *((_QWORD *)this + 388) += 8LL;
      }
      if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v19);
      wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::~com_ptr_t<IDXGIResource,wil::err_returncode_policy>(&v22);
      if ( v21 )
        ((void (__fastcall *)(struct ID3D11Texture2D *))v21->lpVtbl->Release)(v21);
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2A8u, 0LL);
LABEL_16:
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::~com_ptr_t<IDXGIResource,wil::err_returncode_policy>(&v22);
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Fence, 0x270u, 0LL);
LABEL_4:
  if ( v3 < 0 )
  {
    TranslateDXGIorD3DErrorInContext((unsigned int)v3, 0LL, &v20);
    CCaptureRenderTarget::ReleaseRenderingResources(this);
    return v20;
  }
  return (unsigned int)v3;
}
