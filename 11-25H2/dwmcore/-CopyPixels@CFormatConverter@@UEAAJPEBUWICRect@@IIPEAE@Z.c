/*
 * XREFs of ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802E5800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x180188954 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801D13C0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1801D5AA4 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x180236770 (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x1802E5B98 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x1802E645C (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFormatConverter::CopyPixels(
        CFormatConverter *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *v5; // r12
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  INT Y; // r15d
  void (__fastcall ***v16)(_QWORD, GUID *, unsigned int *); // rcx
  void (__fastcall *v17)(_QWORD, const struct WICRect *, __int64, __int64 *); // rbx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int *v23; // r8
  void *v24; // rax
  INT Height; // eax
  bool v26; // r14
  bool v27; // zf
  INT Width; // r13d
  INT v29; // esi
  int v30; // eax
  unsigned int v32; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v33[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v34; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v35; // [rsp+78h] [rbp-29h] BYREF
  unsigned int v36; // [rsp+7Ch] [rbp-25h] BYREF
  int X; // [rsp+80h] [rbp-21h]
  unsigned __int8 *v38; // [rsp+88h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+90h] [rbp-11h] BYREF
  struct WICRect v40; // [rsp+98h] [rbp-9h] BYREF
  __int128 v41; // [rsp+A8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = a5;
  v34 = 0LL;
  v39 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v32 = a3;
  v41 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( a5 )
  {
    if ( *((_QWORD *)this + 7) )
    {
      if ( !a2 )
      {
        a2 = (const struct WICRect *)&v41;
        *((_QWORD *)&v41 + 1) = *((_QWORD *)this + 11);
      }
      v13 = HrCheckBufferSize(*((_DWORD *)this + 19), a3, a2, a4);
      v10 = v13;
      if ( v13 < 0 )
      {
        v12 = (unsigned int)v13;
        v11 = 234LL;
        goto LABEL_6;
      }
      v14 = *((_QWORD *)this + 7);
      Y = a2->Y;
      X = a2->X;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14) - 2 <= 1 )
      {
        v16 = (void (__fastcall ***)(_QWORD, GUID *, unsigned int *))*((_QWORD *)this + 7);
        *(_QWORD *)v33 = 0LL;
        (**v16)(v16, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, v33);
        if ( *(_QWORD *)v33 )
        {
          v17 = *(void (__fastcall **)(_QWORD, const struct WICRect *, __int64, __int64 *))(**(_QWORD **)v33 + 24LL);
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v34);
          v17(*(_QWORD *)v33, a2, 1LL, &v34);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v33 + 16LL))(*(_QWORD *)v33);
        }
      }
      if ( v34 )
      {
        v38 = 0LL;
        v35 = 0;
        v18 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v34 + 48LL))(
                v34,
                &v35,
                &v38);
        v10 = v18;
        if ( v18 < 0 )
        {
          v12 = (unsigned int)v18;
          v11 = 269LL;
          goto LABEL_6;
        }
        v32 = 0;
        v33[0] = 0;
        v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v34 + 32LL))(
                v34,
                &v32,
                v33);
        v10 = v19;
        if ( v19 < 0 )
        {
          v12 = (unsigned int)v19;
          v11 = 277LL;
          goto LABEL_6;
        }
        v36 = 0;
        v20 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 40LL))(v34, &v36);
        v10 = v20;
        if ( v20 < 0 )
        {
          v12 = (unsigned int)v20;
          v11 = 283LL;
          goto LABEL_6;
        }
        v21 = CFormatConverter::CopyPixelsHelper(this, X, Y, v32, v33[0], v36, v35, v38, a3, a4, a5);
        v10 = v21;
        if ( v21 < 0 )
        {
          v12 = (unsigned int)v21;
          v11 = 297LL;
          goto LABEL_6;
        }
      }
      else
      {
        if ( !*((_QWORD *)this + 96) )
        {
          v22 = HrCalcDWordAlignedScanlineStride(
                  *((unsigned int *)this + 22),
                  *((_DWORD *)this + 16),
                  (unsigned int *)this + 194);
          v10 = v22;
          if ( v22 < 0 )
          {
            v12 = (unsigned int)v22;
            v11 = 308LL;
            goto LABEL_6;
          }
          v24 = MIDL_user_allocate(*v23);
          *((_QWORD *)this + 96) = v24;
          if ( !v24 )
          {
            v10 = -2147024882;
            v11 = 311LL;
            goto LABEL_5;
          }
        }
        Height = a2->Height;
        v26 = 0;
        v27 = a2->X == 0;
        Width = a2->Width;
        v40 = *a2;
        v40.Height = 1;
        if ( v27 && !a2->Y && Width == *((_DWORD *)this + 22) )
          v26 = Height == *((_DWORD *)this + 23);
        v29 = Height + Y;
        while ( Y < v29 )
        {
          v30 = (*(__int64 (__fastcall **)(_QWORD, struct WICRect *, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7)
                                                                                            + 48LL))(
                  *((_QWORD *)this + 7),
                  &v40,
                  *((unsigned int *)this + 194),
                  *((unsigned int *)this + 194),
                  *((_QWORD *)this + 96));
          v10 = v30;
          if ( v30 < 0 )
          {
            v12 = (unsigned int)v30;
            v11 = 362LL;
            goto LABEL_6;
          }
          CScanPipeline::Run((CFormatConverter *)((char *)this + 104), v5, *((const void **)this + 96), Width, X, Y);
          ++v40.Y;
          v5 += v32;
          ++Y;
        }
        if ( v26 )
          ReleaseDecoderCopyBuffers(*((struct IUnknown **)this + 7));
      }
      v10 = 0;
      goto LABEL_40;
    }
    v10 = -2003292404;
    v11 = 222LL;
  }
  else
  {
    v10 = -2147024809;
    v11 = 220LL;
  }
LABEL_5:
  v12 = v10;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\common\\formatconverter\\formatconverter.cpp",
    (const char *)v12);
LABEL_40:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v39);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
  return v10;
}
