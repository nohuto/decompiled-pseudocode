/*
 * XREFs of ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801FD704
 * Callers:
 *     ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801FD3C0 (-RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x18006446C (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180205EA8 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18020D620 (-FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z @ 0x180210B50 (-FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int SurfacePixelShaderNoRef; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  _QWORD *v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 (__fastcall *v26)(_QWORD *, __int64, __int64 *); // rbx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  float v31; // xmm0_4
  unsigned int v32; // ebx
  float v33; // xmm0_4
  __int16 v35; // [rsp+60h] [rbp-61h] BYREF
  char v36; // [rsp+62h] [rbp-5Fh]
  __int64 v37; // [rsp+68h] [rbp-59h] BYREF
  __int16 v38; // [rsp+70h] [rbp-51h] BYREF
  char v39; // [rsp+72h] [rbp-4Fh]
  __int16 v40; // [rsp+73h] [rbp-4Eh]
  char v41; // [rsp+75h] [rbp-4Ch]
  __int64 v42; // [rsp+78h] [rbp-49h] BYREF
  __int64 v43; // [rsp+80h] [rbp-41h] BYREF
  __int64 v44; // [rsp+88h] [rbp-39h] BYREF
  __int64 v45; // [rsp+90h] [rbp-31h] BYREF
  __int16 *v46; // [rsp+98h] [rbp-29h]
  _QWORD v47[2]; // [rsp+A8h] [rbp-19h] BYREF
  _DWORD v48[6]; // [rsp+B8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  v6 = (_QWORD *)*((_QWORD *)this + 1);
  v35 = 256;
  v36 = 1;
  v10 = v6 + 1;
  v11 = v6[1];
  v43 = 0LL;
  v12 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(v11 + 96);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v6 + 88LL))(v6, &v45);
  SurfacePixelShaderNoRef = v12(v10, v13, &v43);
  v15 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v16 = 385LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)SurfacePixelShaderNoRef);
    goto LABEL_20;
  }
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 128LL))(v43);
  v18 = *((_QWORD *)this + 16);
  v44 = v17;
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 144LL))(v18);
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v19 + 16) + 176LL))(v19 + 16);
  SurfacePixelShaderNoRef = FillXBRPass1Buffer(a2, *((_DWORD *)this + 6), *((_DWORD *)this + 7));
  v15 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v16 = 394LL;
    goto LABEL_5;
  }
  v42 = 0LL;
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 4LL, &v42);
  v15 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v16 = 398LL;
    goto LABEL_5;
  }
  v21 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v22 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v48[4] = 0;
  v48[0] = 0;
  v48[1] = 0;
  v46 = &v35;
  v48[5] = 1065353216;
  v45 = 1LL;
  v48[2] = _mm_cvtepi32_ps(v21).m128_u32[0];
  v48[3] = _mm_cvtepi32_ps(v22).m128_u32[0];
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::RunShader(
                              (int)a2,
                              (int)&v44,
                              1,
                              (__int64)v48,
                              5,
                              (__int64)&v45,
                              a4,
                              v20,
                              v42);
  v15 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v16 = 415LL;
    goto LABEL_5;
  }
  v23 = (_QWORD *)*((_QWORD *)this + 16);
  v24 = v23 + 1;
  v25 = v23[1];
  v37 = 0LL;
  v26 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(v25 + 96);
  v27 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v23 + 88LL))(v23, &v45);
  v28 = v26(v24, v27, &v37);
  v15 = v28;
  if ( v28 >= 0 )
  {
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 128LL))(v37);
    v31 = (float)*((int *)this + 7);
    v47[0] = v30;
    v47[1] = v44;
    v32 = (int)floorf_0((float)(v31 * *((float *)this + 35)) + 0.5);
    v33 = floorf_0((float)((float)*((int *)this + 6) * *((float *)this + 34)) + 0.5);
    v28 = FillXBRPass2Buffer(a2, *((_DWORD *)this + 6), *((_DWORD *)this + 7), (int)v33, v32);
    v15 = v28;
    if ( v28 >= 0 )
    {
      v42 = 0LL;
      v28 = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 5LL, &v42);
      v15 = v28;
      if ( v28 >= 0 )
      {
        v39 = v36;
        v41 = v36;
        v46 = &v38;
        v38 = v35;
        v40 = v35;
        v45 = 2LL;
        v28 = CSurfaceShaderComposer::RunShader(
                (int)a2,
                (int)v47,
                2,
                (__int64)a5,
                0,
                (__int64)&v45,
                a4,
                (__int64)a3,
                v42);
        v15 = v28;
        if ( v28 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
          v15 = 0;
          goto LABEL_20;
        }
        v29 = 451LL;
      }
      else
      {
        v29 = 439LL;
      }
    }
    else
    {
      v29 = 435LL;
    }
  }
  else
  {
    v29 = 420LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v29,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
    (const char *)(unsigned int)v28);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
LABEL_20:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v43);
  return v15;
}
