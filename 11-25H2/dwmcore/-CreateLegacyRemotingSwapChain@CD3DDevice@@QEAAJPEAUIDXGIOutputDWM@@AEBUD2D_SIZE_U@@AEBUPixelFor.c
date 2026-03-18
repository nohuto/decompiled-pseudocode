/*
 * XREFs of ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802C2E4C
 * Callers:
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x18028ACC0 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180042530 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800FFFEC (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180220E44 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802D4E90 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacyRemotingSwapChain(
        CD3DDevice *this,
        struct IDXGIOutputDWM *a2,
        struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct ILegacyRemotingSwapChain **a6)
{
  void *v10; // r14
  signed int v11; // ebx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  struct D3D11_SUBRESOURCE_DATA *v17; // r8
  int v18; // eax
  HANDLE v19; // rax
  signed int LastError; // eax
  int v21; // r9d
  int v22; // eax
  struct IRenderTargetBitmap *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // r9d
  unsigned int v28; // [rsp+20h] [rbp-E0h]
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  struct IRenderTargetBitmap *v30; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11Texture2D *v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h]
  void *v33; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNSIGNED_RATIO v34; // [rsp+60h] [rbp-A0h] BYREF
  struct ILegacyRemotingSwapChain **v35; // [rsp+68h] [rbp-98h]
  int v36; // [rsp+74h] [rbp-8Ch]
  _DWORD v37[5]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+94h] [rbp-6Ch]
  int v39; // [rsp+9Ch] [rbp-64h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  const char *v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  _BYTE v45[40]; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNSIGNED_RATIO v46; // [rsp+E8h] [rbp-18h]
  unsigned __int16 v47[48]; // [rsp+130h] [rbp+30h] BYREF
  WCHAR Name[64]; // [rsp+190h] [rbp+90h] BYREF

  v35 = a6;
  v30 = 0LL;
  *a6 = 0LL;
  v10 = 0LL;
  v33 = 0LL;
  if ( !*((_DWORD *)this + 278) )
  {
    memset_0(v45, 0, 0xC8uLL);
    v12 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v45);
    v11 = v12;
    if ( v12 < 0 )
    {
      v26 = v12;
      v29 = 779;
      goto LABEL_28;
    }
    v13 = (__int64 *)*((_QWORD *)this + 73);
    v34 = v46;
    if ( v13 )
    {
      v14 = *v13;
      v31 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v14 + 24))(v13, 0LL);
      v11 = v15;
      if ( v15 < 0 )
      {
        v28 = 792;
      }
      else
      {
        v43 = 28;
        v37[2] = 1;
        v42 = "DWM LegacyRemoting SwapChain";
        v44 = v36;
        v37[0] = a3->width;
        v37[1] = a3->height;
        v16 = *(_DWORD *)a4;
        v37[3] = 1;
        v38 = 1LL;
        v37[4] = v16;
        v39 = 0;
        v40 = 40LL;
        v41 = 2;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v31);
        v18 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)v37, v17, &v31);
        v11 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, v18, 0x328u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 73) + 32LL))(
            *((_QWORD *)this + 73),
            0LL,
            0LL);
          goto LABEL_29;
        }
        v15 = (*(__int64 (__fastcall **)(_QWORD, WCHAR *, __int64))(**((_QWORD **)this + 73) + 32LL))(
                *((_QWORD *)this + 73),
                Name,
                64LL);
        v11 = v15;
        if ( v15 < 0 )
        {
          v28 = 811;
        }
        else
        {
          SetLastError(0);
          v19 = OpenFileMappingW(0xF001Fu, 0, Name);
          if ( !v19 )
          {
            LastError = GetLastError();
            v11 = LastError;
            if ( LastError > 0 )
              v11 = (unsigned __int16)LastError | 0x80070000;
            v28 = 816;
            if ( v11 >= 0 )
              v11 = -2003304445;
            v21 = v11;
            goto LABEL_14;
          }
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            &v33,
            v19);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v30);
          v15 = CD3DDevice::CreateRenderTargetBitmap(
                  (__int64)this,
                  (__int64 *)v31,
                  *((_DWORD *)a4 + 1),
                  *((_DWORD *)a4 + 2),
                  *((_DWORD *)a5 + 2),
                  *((_DWORD *)a5 + 4),
                  &v30);
          v11 = v15;
          if ( v15 >= 0 )
          {
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
            v10 = v33;
            goto LABEL_23;
          }
          v28 = 824;
        }
      }
      v21 = v15;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, v21, v28, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
      goto LABEL_29;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v30);
    v32 = 28;
    v31 = (struct ID3D11Texture2D *)"DWM LegacyRemoting SwapChain";
    v22 = CD3DDevice::CreateRenderTargetBitmap((__int64)this, (const struct CResourceTag *)&v31, a3, a4, a5, 0, &v30);
    v11 = v22;
    if ( v22 < 0 )
    {
      v29 = 833;
LABEL_25:
      v26 = v22;
LABEL_28:
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, v26, v29, 0LL);
      goto LABEL_29;
    }
LABEL_23:
    v23 = v30;
    v24 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v30 + 144LL))(v30);
    LOBYTE(v25) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 224LL))(v24, v25);
    v33 = 0LL;
    v22 = CLegacyRemotingSwapChain::Create(this, v47, &v34, v23, v10, v35);
    v11 = v22;
    if ( v22 >= 0 )
      goto LABEL_29;
    v29 = 846;
    goto LABEL_25;
  }
  v11 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, -2003304307, 0x308u, 0LL);
LABEL_29:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v33);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
  return (unsigned int)v11;
}
