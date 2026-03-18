/*
 * XREFs of ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x18018F564
 * Callers:
 *     ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18018F220 (-RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z @ 0x18018F9A8 (-FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z.c)
 *     ?FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18018FA50 (-FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x18018FB28 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18018FCA4 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     floorf_0 @ 0x1802E88A8 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResampleLayer::RenderXBR(
        CResampleLayer *this,
        struct CSurfaceShaderComposer *a2,
        struct ID3D11RenderTargetView *a3,
        char a4,
        const struct D3D11_VIEWPORT *a5)
{
  _QWORD *v6; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(_QWORD *, __int64, __int64 *); // rbx
  __int64 v13; // rax
  int SurfacePixelShaderNoRef; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // r8d
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  int v22; // eax
  _QWORD *v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 (__fastcall *v26)(_QWORD *, __int64, __int64 *); // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i v29; // xmm7
  float v30; // xmm0_4
  unsigned int v31; // ebx
  float v32; // xmm0_4
  int v33; // eax
  int v34; // r8d
  int v35; // eax
  __int64 v37; // rdx
  void (*v38)(void); // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // r9
  __int64 v41; // rdx
  __int16 v42; // [rsp+78h] [rbp-71h] BYREF
  char v43; // [rsp+7Ah] [rbp-6Fh]
  __int64 v44; // [rsp+80h] [rbp-69h] BYREF
  __int64 v45; // [rsp+88h] [rbp-61h] BYREF
  __int16 v46; // [rsp+90h] [rbp-59h] BYREF
  char v47; // [rsp+92h] [rbp-57h]
  __int16 v48; // [rsp+93h] [rbp-56h]
  char v49; // [rsp+95h] [rbp-54h]
  __int64 v50; // [rsp+98h] [rbp-51h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-49h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-41h] BYREF
  __int16 *v53; // [rsp+B0h] [rbp-39h]
  _QWORD v54[2]; // [rsp+C0h] [rbp-29h] BYREF
  _DWORD v55[6]; // [rsp+D0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+57h]

  v6 = (_QWORD *)*((_QWORD *)this + 1);
  v42 = 256;
  v43 = 1;
  v10 = v6 + 1;
  v11 = v6[1];
  v44 = 0LL;
  v12 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(v11 + 96);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v6 + 88LL))(v6, &v52);
  SurfacePixelShaderNoRef = v12(v10, v13, &v44);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v37 = 383LL;
    goto LABEL_15;
  }
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 128LL))(v44);
  v16 = *((_QWORD *)this + 16);
  v51 = v15;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 144LL))(v16);
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v17 + 16) + 176LL))(v17 + 16);
  SurfacePixelShaderNoRef = FillXBRPass1Buffer(a2, *((_DWORD *)this + 6), *((_DWORD *)this + 7));
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v37 = 392LL;
    goto LABEL_15;
  }
  v50 = 0LL;
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 4LL, &v50);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v37 = 396LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)SurfacePixelShaderNoRef);
    if ( !v44 )
      return (unsigned int)SurfacePixelShaderNoRef;
    v38 = *(void (**)(void))(*(_QWORD *)v44 + 16LL);
LABEL_17:
    v38();
    return (unsigned int)SurfacePixelShaderNoRef;
  }
  v20 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v21 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v55[0] = 0;
  v55[1] = 0;
  v53 = &v42;
  v55[4] = 0;
  v52 = 1LL;
  v55[5] = 1065353216;
  v55[2] = _mm_cvtepi32_ps(v20).m128_u32[0];
  v55[3] = _mm_cvtepi32_ps(v21).m128_u32[0];
  v22 = CSurfaceShaderComposer::RunShader(
          (_DWORD)a2,
          (unsigned int)&unk_180338C80,
          v19,
          (unsigned int)&v51,
          1,
          (__int64)v55,
          5,
          (__int64)&v52,
          a4,
          v18,
          v50,
          0LL,
          0);
  SurfacePixelShaderNoRef = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x189,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\surfaceshadercomposer.cpp",
      (const char *)(unsigned int)v22);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)SurfacePixelShaderNoRef);
LABEL_31:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v44);
    return (unsigned int)SurfacePixelShaderNoRef;
  }
  v23 = (_QWORD *)*((_QWORD *)this + 16);
  v24 = v23 + 1;
  v25 = v23[1];
  v45 = 0LL;
  v26 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(v25 + 96);
  v27 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v23 + 88LL))(v23, &v52);
  SurfacePixelShaderNoRef = v26(v24, v27, &v45);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v39 = 418LL;
    goto LABEL_21;
  }
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 128LL))(v45);
  v29 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v30 = (float)*((int *)this + 7);
  v54[0] = v28;
  v54[1] = v51;
  *(float *)v29.m128i_i32 = (float)(_mm_cvtepi32_ps(v29).m128_f32[0] * *((float *)this + 34)) + 0.5;
  v31 = (int)floorf_0((float)(v30 * *((float *)this + 35)) + 0.5);
  v32 = floorf_0(*(float *)v29.m128i_i32);
  v33 = FillXBRPass2Buffer(a2, *((_DWORD *)this + 6), *((_DWORD *)this + 7), (int)v32, v31);
  SurfacePixelShaderNoRef = v33;
  if ( v33 < 0 )
  {
    v40 = (unsigned int)v33;
    v41 = 432LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)v40);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v45);
    goto LABEL_31;
  }
  v50 = 0LL;
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 5LL, &v50);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v39 = 436LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)SurfacePixelShaderNoRef);
    if ( v45 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    if ( !v44 )
      return (unsigned int)SurfacePixelShaderNoRef;
    v38 = *(void (**)(void))(*(_QWORD *)v44 + 16LL);
    goto LABEL_17;
  }
  v47 = v43;
  v49 = v43;
  v53 = &v46;
  v46 = v42;
  v48 = v42;
  v52 = 2LL;
  v35 = CSurfaceShaderComposer::RunShader(
          (_DWORD)a2,
          (unsigned int)&unk_180338C80,
          v34,
          (unsigned int)v54,
          2,
          (__int64)a5,
          0,
          (__int64)&v52,
          a4,
          (__int64)a3,
          v50,
          0LL,
          0);
  SurfacePixelShaderNoRef = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x189,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\surfaceshadercomposer.cpp",
      (const char *)(unsigned int)v35);
    v40 = (unsigned int)SurfacePixelShaderNoRef;
    v41 = 448LL;
    goto LABEL_30;
  }
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  return 0LL;
}
