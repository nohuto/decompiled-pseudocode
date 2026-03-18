/*
 * XREFs of ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180158D2C
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180158BE0 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 *     ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x1801593D0 (-ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ.c)
 * Callees:
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800246E8 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18005BF74 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x180096F3C (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18015A23C (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z @ 0x18015A3D0 (-CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z.c)
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x18015A5F0 (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18015A618 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@AEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18015A70C (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801A4B9C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??1?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A51D8 (--1-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned __int64 v15; // r8
  int Fence; // eax
  int updated; // eax
  __int64 v18; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v19; // r8
  const char **v20; // rdx
  char *v21; // rcx
  unsigned int v22; // [rsp+30h] [rbp-79h] BYREF
  struct ID3D11Texture2D *v23; // [rsp+38h] [rbp-71h] BYREF
  __int64 v24; // [rsp+40h] [rbp-69h] BYREF
  const char *v25; // [rsp+48h] [rbp-61h] BYREF
  const char *v26; // [rsp+50h] [rbp-59h] BYREF
  int v27; // [rsp+58h] [rbp-51h]
  __int128 v28; // [rsp+60h] [rbp-49h] BYREF
  DXGI_FORMAT v29[4]; // [rsp+70h] [rbp-39h]
  __int64 v30; // [rsp+80h] [rbp-29h]
  int v31; // [rsp+88h] [rbp-21h]
  D3D11_TEXTURE2D_DESC v32; // [rsp+90h] [rbp-19h] BYREF

  v3 = 0;
  v4 = (struct ID3D11Fence **)((char *)this + 3000);
  v22 = 0;
  if ( *((_QWORD *)this + 375) )
    goto LABEL_2;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 375);
  v27 = 18;
  v26 = "CaptureRenderFence";
  Fence = CD3DDevice::CreateFence(a2, (const struct CResourceTag *)&v26, v15, v4);
  v22 = Fence;
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
      v23 = 0LL;
      memset(&v32, 0, sizeof(v32));
      v10 = CD3DDevice::OpenSharedTexture((__int64 **)a2, &v32, a3, *(void **)(v8 + 8LL * (unsigned int)i), 1, &v23);
      v22 = v10;
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x21Eu, 0LL);
        goto LABEL_17;
      }
      v30 = 0LL;
      v31 = 0;
      v28 = 0LL;
      *(_OWORD *)v29 = 0LL;
      ((void (__fastcall *)(struct ID3D11Texture2D *, __int128 *))v23->lpVtbl->GetDesc)(v23, &v28);
      if ( !IsValidPixelFormat(v29[0]) )
      {
        CCaptureRenderTarget::ResetBuffers(this);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
        goto LABEL_4;
      }
      if ( *((_QWORD *)this + 382) == *((_QWORD *)this + 381) )
      {
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v11);
        v22 = updated;
        v3 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x230u, 0LL);
LABEL_17:
          if ( v23 )
            ((void (__fastcall *)(struct ID3D11Texture2D *))v23->lpVtbl->Release)(v23);
          goto LABEL_4;
        }
        if ( !*((_BYTE *)this + 2942) )
        {
          *((_QWORD *)this + 15) = v28;
          COffScreenRenderTarget::CalcTreeBounds(this, v18, v19);
        }
        *((_BYTE *)this + 2943) = HIDWORD(v28) > 1;
      }
      v24 = 0LL;
      v12 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v23->lpVtbl->QueryInterface)(
              v23,
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              &v24);
      v22 = v12;
      v3 = v12;
      if ( v12 < 0 )
        break;
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 378) + 48LL))(
              *((_QWORD *)this + 378),
              0LL,
              0LL,
              *(_QWORD *)(v8 + 8LL * (unsigned int)i),
              *((_QWORD *)this + 344));
      v22 = v13;
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x248u, 0LL);
        goto LABEL_16;
      }
      if ( *((_QWORD *)this + 382) == *((_QWORD *)this + 383) )
      {
        std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> const &>(
          (char *)this + 3048,
          *((_QWORD *)this + 382),
          &v24);
      }
      else
      {
        wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
          *((_QWORD **)this + 382),
          v24);
        *((_QWORD *)this + 382) += 8LL;
      }
      v25 = 0LL;
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const char **))(**((_QWORD **)this + 378) + 64LL))(
              *((_QWORD *)this + 378),
              *(_QWORD *)(v8 + 8LL * (unsigned int)i),
              &v25);
      v22 = v14;
      v3 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x24Fu, 0LL);
        goto LABEL_16;
      }
      v20 = (const char **)*((_QWORD *)this + 388);
      v26 = v25;
      if ( v20 == *((const char ***)this + 389) )
      {
        std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
          (char *)this + 3096,
          v20,
          &v26);
        v21 = (char *)v26;
      }
      else
      {
        v21 = 0LL;
        *v20 = v25;
        *((_QWORD *)this + 388) += 8LL;
      }
      if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v21);
      wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::~com_ptr_t<IDXGIResource,wil::err_returncode_policy>(&v24);
      if ( v23 )
        ((void (__fastcall *)(struct ID3D11Texture2D *))v23->lpVtbl->Release)(v23);
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x242u, 0LL);
LABEL_16:
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::~com_ptr_t<IDXGIResource,wil::err_returncode_policy>(&v24);
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Fence, 0x20Au, 0LL);
LABEL_4:
  if ( v3 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v3, 0, &v22);
    CCaptureRenderTarget::ReleaseRenderingResources(this);
    return v22;
  }
  return (unsigned int)v3;
}
