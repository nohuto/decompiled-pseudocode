/*
 * XREFs of ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801D5618
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x1801D52C0 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801D5390 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureWICBitmapFrame(CCompressedSourceBitmap *this)
{
  __int64 *v1; // r14
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64 *); // rdi
  int v10; // eax
  __int64 v12; // rdx
  void (*v13)(void); // rax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h]

  v1 = (__int64 *)((char *)this + 136);
  if ( *((_QWORD *)this + 17) )
    return 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 16);
  v4 = *v3;
  v16 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 112))(v3, &v16);
  if ( v5 < 0 )
  {
    v14 = 120LL;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 128LL))(
           v16,
           *((_QWORD *)this + 19),
           *((unsigned int *)this + 40));
    if ( v5 >= 0 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v16 + 40LL))(v16, 0LL, 0LL, 0LL);
      v6 = (__int64 *)*((_QWORD *)this + 16);
      v7 = *v6;
      v17 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, _QWORD, __int64 *))(v7 + 32))(
             v6,
             v16,
             &GUID_VendorMicrosoft,
             0LL,
             &v17);
      if ( v5 < 0 )
      {
        v12 = 131LL;
      }
      else
      {
        v8 = v17;
        v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 104LL);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
        v10 = v9(v8, 0LL, v1);
        v5 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x85,
            (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
            (const char *)(unsigned int)v10);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
          return (unsigned int)v5;
        }
        v5 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)*v1 + 24LL))(
               *v1,
               (char *)this + 88,
               (char *)this + 92);
        if ( v5 >= 0 )
        {
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          return 0LL;
        }
        v12 = 136LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
        (const char *)(unsigned int)v5);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      if ( !v16 )
        return (unsigned int)v5;
      v13 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
      goto LABEL_17;
    }
    v14 = 123LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
    (const char *)(unsigned int)v5);
  if ( !v16 )
    return (unsigned int)v5;
  v13 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
LABEL_17:
  v13();
  return (unsigned int)v5;
}
