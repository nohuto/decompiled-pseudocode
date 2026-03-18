/*
 * XREFs of ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCDDASwapChain@@@Z @ 0x1802B95EC
 * Callers:
 *     ?CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801F1630 (-CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180106DC0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x1801B61B0 (-UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802C8354 (-Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateDDASwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct CDDASwapChain **a6)
{
  int v9; // ebx
  bool v10; // zf
  int v11; // r8d
  __int64 v12; // r9
  struct IDXGIOutputVtbl *lpVtbl; // rax
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, GUID *, __int64 *); // rdi
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, struct D2D_SIZE_U *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **); // rdi
  unsigned int v19; // ebx
  unsigned int v21; // [rsp+20h] [rbp-59h]
  struct IDXGISwapChainDWM1 *v22; // [rsp+30h] [rbp-49h] BYREF
  __int64 v23; // [rsp+38h] [rbp-41h] BYREF
  __int64 v24; // [rsp+40h] [rbp-39h] BYREF
  struct D2D_SIZE_U v25; // [rsp+48h] [rbp-31h] BYREF
  int v26; // [rsp+50h] [rbp-29h]
  int v27; // [rsp+54h] [rbp-25h]
  __int64 v28; // [rsp+58h] [rbp-21h]
  int v29; // [rsp+60h] [rbp-19h]
  __int64 v30; // [rsp+64h] [rbp-15h]
  int v31; // [rsp+6Ch] [rbp-Dh]
  int v32; // [rsp+70h] [rbp-9h]
  int v33; // [rsp+74h] [rbp-5h]

  v24 = 0LL;
  v23 = 0LL;
  *a6 = 0LL;
  v22 = 0LL;
  if ( !*((_DWORD *)this + 278) )
  {
    v25 = *a3;
    v26 = *(_DWORD *)a4;
    v27 = 0;
    v28 = 1LL;
    v10 = !CD3DDevice::UseSwapchainAsShaderInput(this);
    v30 = v12;
    if ( !v10 )
      v11 = v12 + 111;
    v32 = *((_DWORD *)a4 + 1);
    lpVtbl = a2->lpVtbl;
    v29 = v11;
    v31 = v12;
    v33 = 0;
    v14 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))lpVtbl->GetParent)(
            a2,
            &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
            &v24);
    v9 = v14;
    if ( v14 < 0 )
    {
      v21 = 663;
    }
    else
    {
      v15 = v24;
      v16 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v24 + 48LL);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v14 = v16(v15, &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f, &v23);
      v9 = v14;
      if ( v14 < 0 )
      {
        v21 = 664;
      }
      else
      {
        v17 = v23;
        v18 = *(__int64 (__fastcall **)(__int64, _QWORD, struct D2D_SIZE_U *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v23 + 32LL);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v22);
        v14 = v18(v17, *((_QWORD *)this + 69), &v25, a2, &v22);
        v9 = v14;
        if ( v14 < 0 )
        {
          v21 = 670;
        }
        else
        {
          v14 = CDDASwapChain::Create(this, v22, a4, a5, a6);
          v9 = v14;
          if ( v14 >= 0 )
            goto LABEL_16;
          v21 = 677;
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v14, v21, 0LL);
    goto LABEL_16;
  }
  v9 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, -2003304307, 0x27Eu, 0LL);
LABEL_16:
  v19 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 2u);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
  return v19;
}
