/*
 * XREFs of ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023EA98
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1802357C0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180106DC0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z @ 0x1801B6020 (-GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801CA98C (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAV1@@Z @ 0x1801E4888 (-Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@A.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x180243AA0 (--1CFailFastError@@QEAA@XZ.c)
 *     ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x18024C85C (-TrimAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z @ 0x18027F2CC (-GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacySwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        enum DXGI_FORMAT *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6,
        bool a7,
        struct CLegacySwapChain **a8)
{
  bool v8; // bl
  int v13; // r14d
  int v14; // eax
  CDeviceManager *v15; // rcx
  unsigned int v16; // ecx
  int SwapChainCreationError; // eax
  enum DXGI_FORMAT v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // r8
  int SwapchainBufferUsage; // eax
  __int64 v22; // rdx
  struct IDXGIOutputVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetParent)(IDXGIOutput *, const IID *const, void **); // rbx
  int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 (__fastcall *v29)(_QWORD *, GUID *, _QWORD **); // r15
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // rax
  __int64 (__fastcall *v33)(_QWORD *, _QWORD, _DWORD *, struct IDXGIOutput *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // r15
  unsigned int v34; // ebx
  unsigned int v36; // [rsp+20h] [rbp-E0h]
  unsigned int v37; // [rsp+20h] [rbp-E0h]
  unsigned int v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v41; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v42; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  int v44; // [rsp+70h] [rbp-90h] BYREF
  int *v45; // [rsp+78h] [rbp-88h]
  const struct RenderTargetInfo *v46; // [rsp+80h] [rbp-80h]
  _DWORD v47[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v48; // [rsp+98h] [rbp-68h]
  enum DXGI_FORMAT v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A4h] [rbp-5Ch]
  int v51; // [rsp+A8h] [rbp-58h]
  __int64 v52; // [rsp+ACh] [rbp-54h]
  int v53; // [rsp+B4h] [rbp-4Ch]
  unsigned int v54; // [rsp+B8h] [rbp-48h]
  int v55; // [rsp+BCh] [rbp-44h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  int v57; // [rsp+C8h] [rbp-38h]
  int v58; // [rsp+CCh] [rbp-34h]
  int v59; // [rsp+D0h] [rbp-30h]
  int v60; // [rsp+D4h] [rbp-2Ch]
  _BYTE v61[40]; // [rsp+E0h] [rbp-20h] BYREF
  int v62; // [rsp+108h] [rbp+8h]
  int v63; // [rsp+10Ch] [rbp+Ch]
  __int64 v64; // [rsp+118h] [rbp+18h]
  int v65; // [rsp+128h] [rbp+28h]
  unsigned int v66; // [rsp+14Ch] [rbp+4Ch]

  v8 = 0;
  v46 = a5;
  v43 = 0LL;
  *a8 = 0LL;
  v13 = 0;
  v42 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  if ( !*((_DWORD *)this + 278) )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v43);
    v14 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
            &v43);
    v38 = v14;
    if ( v14 < 0 )
    {
      v37 = 274;
    }
    else
    {
      memset_0(v61, 0, 0xC8uLL);
      v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v43 + 32LL))(v43, v61);
      v38 = v14;
      if ( v14 >= 0 )
      {
        if ( !v62 || !v63 )
        {
          v38 = -2003304442;
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BD6F8, 3u, -2003304442, 0x11Au, 0LL);
          goto LABEL_39;
        }
        if ( (v66 & 0x100) != 0 )
        {
          v8 = 1;
          CDeviceManager::TrimAllDevices(v15);
        }
        else if ( *((_BYTE *)this + 1500) )
        {
          CD3DDevice::Trim(this);
        }
        v16 = *((_DWORD *)this + 224);
        v45 = (int *)&v38;
        v44 = g_hrNoHardwareDeviceOverride;
        SwapChainCreationError = CD3DDevice::GetSwapChainCreationError(v16, v8);
        v18 = *a4;
        LOBYTE(v19) = a7;
        v55 = 0;
        v60 = 0;
        g_hrNoHardwareDeviceOverride = SwapChainCreationError;
        v47[0] = a3->width;
        v47[1] = a3->height;
        v20 = v66 >> 8;
        v48 = v64;
        LOBYTE(v20) = BYTE1(v66) & 1;
        v49 = v18;
        v50 = v65;
        v51 = 0;
        v52 = 1LL;
        SwapchainBufferUsage = CD3DDevice::GetSwapchainBufferUsage(this, v19, v20, v18, 0x40u);
        v22 = (__int64)v42;
        v53 = SwapchainBufferUsage;
        v54 = a6;
        lpVtbl = a2->lpVtbl;
        v58 = 1;
        v59 = 1;
        v56 = 0LL;
        GetParent = lpVtbl->GetParent;
        v57 = 0;
        v42 = 0LL;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        v25 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, _QWORD **))GetParent)(
                a2,
                &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
                &v42);
        v38 = v25;
        if ( v25 < 0 )
        {
          v36 = 330;
          goto LABEL_33;
        }
        v26 = (__int64)v41;
        v27 = v42;
        v28 = *v42;
        v41 = 0LL;
        v29 = *(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD **))(v28 + 48);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        v25 = v29(v27, &GUID_713f394e_92ca_47e7_ab81_1159c2791e54, &v41);
        v38 = v25;
        if ( v25 < 0 )
        {
          v36 = 331;
          goto LABEL_33;
        }
        v30 = (__int64)v40;
        v31 = v41;
        v32 = *v41;
        v40 = 0LL;
        v33 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, _DWORD *, struct IDXGIOutput *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v32 + 24);
        if ( v30 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        v25 = v33(v31, *((_QWORD *)this + 69), v47, a2, &v40);
        v38 = v25;
        if ( v25 < 0 )
        {
          v36 = 337;
          goto LABEL_33;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v39);
        v25 = (**v40)(v40, &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19, &v39);
        v38 = v25;
        if ( v25 < 0 )
        {
          v36 = 339;
          goto LABEL_33;
        }
        if ( (v53 & 0x400) != 0 )
        {
          if ( *((int *)this + 155) < 2600 )
          {
            v13 = 2;
          }
          else
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v39 + 264LL))(v39) != 2 )
            {
              v38 = -2003304306;
              MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BD6F8, 3u, -2003304306, 0x163u, 0LL);
              goto LABEL_34;
            }
            v13 = 1;
          }
        }
        v25 = CLegacySwapChain::Create(
                (__int64)this,
                (const struct DXGI_OUTPUT_DWM_DESC *)v61,
                v39,
                (__int64)a4,
                (__int64)v46,
                v13,
                (__int64 *)a8);
        v38 = v25;
        if ( v25 < 0 )
        {
          v36 = 372;
LABEL_33:
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BD6F8, 3u, v25, v36, 0LL);
        }
LABEL_34:
        CFailFastError::~CFailFastError((CFailFastError *)&v44);
        goto LABEL_39;
      }
      v37 = 277;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BD6F8, 3u, v14, v37, 0LL);
    goto LABEL_39;
  }
  v38 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BD6F8, 3u, -2003304307, 0x110u, 0LL);
LABEL_39:
  v38 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v38, 2u);
  v34 = v38;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v39);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v40);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v41);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v42);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v43);
  return v34;
}
