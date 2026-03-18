/*
 * XREFs of ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802B980C
 * Callers:
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x18027FF70 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18005AEE0 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180159EB4 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802CBC20 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacyRemotingSwapChain(
        CD3DDevice *this,
        struct IDXGIOutputDWM *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct ILegacyRemotingSwapChain **a6)
{
  void *v10; // r14
  signed int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  struct D3D11_SUBRESOURCE_DATA *v19; // r8
  int v20; // eax
  HANDLE v21; // rax
  signed int LastError; // eax
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  struct IRenderTargetBitmap *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // r9d
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  unsigned int v33; // [rsp+20h] [rbp-E0h]
  struct IRenderTargetBitmap *v34; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11Texture2D *v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h]
  void *v37; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNSIGNED_RATIO v38; // [rsp+60h] [rbp-A0h] BYREF
  struct ILegacyRemotingSwapChain **v39; // [rsp+68h] [rbp-98h]
  int v40; // [rsp+74h] [rbp-8Ch]
  _DWORD v41[5]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+94h] [rbp-6Ch]
  int v43; // [rsp+9Ch] [rbp-64h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  int v45; // [rsp+A8h] [rbp-58h]
  const char *v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  _BYTE v49[40]; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNSIGNED_RATIO v50; // [rsp+E8h] [rbp-18h]
  unsigned __int16 v51[48]; // [rsp+130h] [rbp+30h] BYREF
  WCHAR Name[64]; // [rsp+190h] [rbp+90h] BYREF

  v39 = a6;
  v34 = 0LL;
  *a6 = 0LL;
  v10 = 0LL;
  v37 = 0LL;
  if ( !*((_DWORD *)this + 278) )
  {
    memset_0(v49, 0, 0xC8uLL);
    v12 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v49);
    v11 = v12;
    if ( v12 < 0 )
    {
      v30 = v12;
      v33 = 712;
      goto LABEL_28;
    }
    v15 = (__int64 *)*((_QWORD *)this + 73);
    v38 = v50;
    if ( v15 )
    {
      v16 = *v15;
      v35 = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v16 + 24))(v15, 0LL);
      v11 = v17;
      if ( v17 < 0 )
      {
        v32 = 725;
      }
      else
      {
        v47 = 28;
        v41[2] = 1;
        v46 = "DWM LegacyRemoting SwapChain";
        v48 = v40;
        v41[0] = a3->width;
        v41[1] = a3->height;
        v18 = *(_DWORD *)a4;
        v41[3] = 1;
        v42 = 1LL;
        v41[4] = v18;
        v43 = 0;
        v44 = 40LL;
        v45 = 2;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v35);
        v20 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)v41, v19, &v35);
        v11 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v20, 0x2E5u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 73) + 32LL))(
            *((_QWORD *)this + 73),
            0LL,
            0LL);
          goto LABEL_29;
        }
        v17 = (*(__int64 (__fastcall **)(_QWORD, WCHAR *, __int64))(**((_QWORD **)this + 73) + 32LL))(
                *((_QWORD *)this + 73),
                Name,
                64LL);
        v11 = v17;
        if ( v17 < 0 )
        {
          v32 = 744;
        }
        else
        {
          SetLastError(0);
          v21 = OpenFileMappingW(0xF001Fu, 0, Name);
          if ( !v21 )
          {
            LastError = GetLastError();
            v11 = LastError;
            if ( LastError > 0 )
              v11 = (unsigned __int16)LastError | 0x80070000;
            v32 = 749;
            if ( v11 >= 0 )
              v11 = -2003304445;
            v23 = v11;
            goto LABEL_14;
          }
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            &v37,
            v21);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v34, v24, v25);
          v17 = CD3DDevice::CreateRenderTargetBitmap(
                  (__int64)this,
                  (__int64 *)v35,
                  *((_DWORD *)a4 + 1),
                  *((_DWORD *)a4 + 2),
                  *((_DWORD *)a5 + 2),
                  *((_DWORD *)a5 + 4),
                  &v34);
          v11 = v17;
          if ( v17 >= 0 )
          {
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
            v10 = v37;
            goto LABEL_23;
          }
          v32 = 757;
        }
      }
      v23 = v17;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v23, v32, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
      goto LABEL_29;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v34, v13, v14);
    v36 = 28;
    v35 = (struct ID3D11Texture2D *)"DWM LegacyRemoting SwapChain";
    v26 = CD3DDevice::CreateRenderTargetBitmap((__int64)this, (const struct CResourceTag *)&v35, a3, a4, a5, 0, &v34);
    v11 = v26;
    if ( v26 < 0 )
    {
      v33 = 766;
LABEL_25:
      v30 = v26;
LABEL_28:
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v30, v33, 0LL);
      goto LABEL_29;
    }
LABEL_23:
    v27 = v34;
    v28 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v34 + 144LL))(v34);
    LOBYTE(v29) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 224LL))(v28, v29);
    v37 = 0LL;
    v26 = CLegacyRemotingSwapChain::Create(this, v51, &v38, v27, v10, v39);
    v11 = v26;
    if ( v26 >= 0 )
      goto LABEL_29;
    v33 = 779;
    goto LABEL_25;
  }
  v11 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, -2003304307, 0x2C5u, 0LL);
LABEL_29:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v37);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
  return (unsigned int)v11;
}
