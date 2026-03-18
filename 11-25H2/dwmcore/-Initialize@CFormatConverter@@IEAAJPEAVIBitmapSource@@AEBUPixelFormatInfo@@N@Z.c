/*
 * XREFs of ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802E6018
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802E5E94 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x1801878F8 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801D13C0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802E6270 (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFormatConverter::Initialize(
        CFormatConverter *this,
        struct IBitmapSource *a2,
        enum DXGI_FORMAT *a3,
        double a4)
{
  _DWORD *v7; // r14
  bool v8; // zf
  float v9; // xmm0_4
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // r9
  int v15; // eax
  unsigned __int8 v17; // [rsp+20h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v19[16]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !a2 || !IsValidPixelFormatInfo(a3) )
  {
    v11 = 402LL;
    goto LABEL_29;
  }
  v7 = (_DWORD *)((char *)this + 76);
  *(_QWORD *)((char *)this + 76) = *(_QWORD *)a3;
  *((enum DXGI_FORMAT *)this + 21) = a3[2];
  if ( a4 < 0.0 || a4 > 100.0 )
  {
    v11 = 406LL;
LABEL_29:
    v10 = -2147024809;
    goto LABEL_30;
  }
  v8 = *((_QWORD *)this + 7) == 0LL;
  v9 = a4;
  *((float *)this + 24) = v9;
  if ( !v8 )
  {
    v10 = -2003292412;
    v11 = 413LL;
LABEL_30:
    v14 = v10;
    goto LABEL_31;
  }
  v12 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v19);
  v10 = -2003292288;
  *((_QWORD *)this + 8) = *(_QWORD *)v12;
  *((_DWORD *)this + 18) = *(_DWORD *)(v12 + 8);
  if ( *((_DWORD *)this + 16) != 2
    && *((_DWORD *)this + 16) != 10
    && *((_DWORD *)this + 16) != 11
    && *((_DWORD *)this + 16) != 24
    && *((_DWORD *)this + 16) != 28
    && *((_DWORD *)this + 16) != 65
    && (unsigned int)(*((_DWORD *)this + 16) - 87) >= 2 )
  {
    v11 = 417LL;
    goto LABEL_30;
  }
  if ( *v7 != 2 && *v7 != 10 && *v7 != 11 && *v7 != 24 && *v7 != 28 && (unsigned int)(*v7 - 87) >= 2 )
  {
    v11 = 418LL;
    goto LABEL_30;
  }
  v13 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 32LL))(
          a2,
          (char *)this + 88,
          (char *)this + 92);
  v10 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v11 = 420LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\common\\formatconverter\\formatconverter.cpp",
      (const char *)v14);
    goto LABEL_32;
  }
  v15 = CScanPipeline::InitializeForFormatConversion(
          (CFormatConverter *)((char *)this + 104),
          (CFormatConverter *)((char *)this + 76),
          (CFormatConverter *)((char *)this + 64),
          *((_DWORD *)this + 22),
          v17);
  v10 = v15;
  if ( v15 < 0 )
  {
    v14 = (unsigned int)v15;
    v11 = 427LL;
    goto LABEL_31;
  }
  *((_QWORD *)this + 7) = a2;
  (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = 0;
LABEL_32:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
  return v10;
}
