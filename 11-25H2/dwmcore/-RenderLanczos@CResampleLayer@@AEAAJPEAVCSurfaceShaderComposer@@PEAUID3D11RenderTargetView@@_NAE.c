/*
 * XREFs of ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x180287924
 * Callers:
 *     ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18018F220 (-RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x18018FB28 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x18018FC10 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1802876EC (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x180287850 (-FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     floorf_0 @ 0x1802E88A8 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResampleLayer::RenderLanczos(
        CResampleLayer *this,
        struct CSurfaceShaderComposer *a2,
        struct ID3D11RenderTargetView *a3,
        char a4,
        const struct D3D11_VIEWPORT *a5)
{
  const struct D3D11_VIEWPORT *v5; // r15
  signed int v9; // ebx
  float v10; // xmm0_4
  bool v11; // al
  int v12; // r8d
  signed int v13; // edx
  int SurfacePixelShaderNoRef; // ebx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 (__fastcall *v19)(_QWORD *, __int64, __int64 *); // rbx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  char v25; // al
  int v27; // [rsp+20h] [rbp-60h]
  __int64 v28; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v29[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v31; // [rsp+B0h] [rbp+30h] BYREF
  __int16 v32; // [rsp+C8h] [rbp+48h] BYREF
  char v33; // [rsp+CAh] [rbp+4Ah]

  LOBYTE(v32) = a4;
  v5 = a5;
  v9 = (int)floorf_0(a5->Width + 0.5);
  v10 = floorf_0(v5->Height + 0.5);
  a5 = 0LL;
  v11 = *((float *)this + 34) >= 1.0 && *((float *)this + 35) >= 1.0;
  v12 = *((_DWORD *)this + 7);
  v13 = *((_DWORD *)this + 6);
  v27 = (int)v10;
  if ( !v11 )
  {
    SurfacePixelShaderNoRef = ComputeLanczosKernel(a2, v13, v12, v9, v27);
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v15 = 323LL;
      goto LABEL_8;
    }
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef((__int64)a2, 0, &a5);
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v15 = 326LL;
      goto LABEL_8;
    }
    goto LABEL_15;
  }
  SurfacePixelShaderNoRef = FillLanczosUpBuffer(a2, v13, v12, v9, v27);
  if ( SurfacePixelShaderNoRef >= 0 )
  {
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef((__int64)a2, 1u, &a5);
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v15 = 314LL;
      goto LABEL_8;
    }
LABEL_15:
    v16 = (_QWORD *)*((_QWORD *)this + 1);
    v32 = 256;
    v33 = 1;
    v17 = v16 + 1;
    v18 = v16[1];
    v31 = 0LL;
    v19 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(v18 + 104);
    v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v16 + 88LL))(v16, v29);
    v21 = v19(v17, v20, &v31);
    SurfacePixelShaderNoRef = v21;
    if ( v21 >= 0 )
    {
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 128LL))(v31);
      v24 = *((_QWORD *)this + 1);
      v28 = v23;
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
      v29[1] = &v32;
      v29[0] = 1LL;
      v21 = CSurfaceShaderComposer::RunShader(
              (int)a2,
              (int)&v28,
              1,
              (__int64)v5,
              0,
              (__int64)v29,
              v25,
              (__int64)a3,
              (__int64)a5);
      SurfacePixelShaderNoRef = v21;
      if ( v21 >= 0 )
      {
        SurfacePixelShaderNoRef = 0;
        goto LABEL_21;
      }
      v22 = 348LL;
    }
    else
    {
      v22 = 337LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)v21);
LABEL_21:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v31);
    return (unsigned int)SurfacePixelShaderNoRef;
  }
  v15 = 311LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
    (const char *)(unsigned int)SurfacePixelShaderNoRef);
  return (unsigned int)SurfacePixelShaderNoRef;
}
