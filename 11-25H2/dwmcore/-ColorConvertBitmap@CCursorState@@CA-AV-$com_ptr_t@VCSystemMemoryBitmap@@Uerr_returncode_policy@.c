/*
 * XREFs of ?ColorConvertBitmap@CCursorState@@CA?AV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAVCSystemMemoryBitmap@@@Z @ 0x1802BBE78
 * Callers:
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802BC170 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1801861AC (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180187810 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void ***__fastcall CCursorState::ColorConvertBitmap(void ***a1, __int64 a2)
{
  CSystemMemoryBitmap *v4; // rax
  void **v5; // rcx
  int v6; // eax
  __int64 (__fastcall *v7)(__int64, _DWORD *, __int64, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  void **v10; // rdi
  __int64 (__fastcall *v11)(void **, _DWORD *, __int64, __int64 *); // rbx
  int v12; // eax
  int v13; // eax
  const char *v14; // r9
  unsigned int v15; // ecx
  _DWORD *v16; // rdx
  int *v17; // r8
  int v19; // [rsp+20h] [rbp-29h]
  unsigned int v20; // [rsp+30h] [rbp-19h] BYREF
  int v21; // [rsp+34h] [rbp-15h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-11h] BYREF
  unsigned int v23; // [rsp+3Ch] [rbp-Dh]
  _DWORD *v24; // [rsp+40h] [rbp-9h] BYREF
  int *v25; // [rsp+48h] [rbp-1h] BYREF
  __int64 v26; // [rsp+50h] [rbp+7h] BYREF
  __int64 v27; // [rsp+58h] [rbp+Fh] BYREF
  enum DXGI_FORMAT v28[4]; // [rsp+60h] [rbp+17h] BYREF
  _DWORD v29[4]; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = (CSystemMemoryBitmap *)operator new(0x98uLL);
  if ( v4 )
    v4 = CSystemMemoryBitmap::CSystemMemoryBitmap(v4);
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    a1,
    (__int64)v4);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(a2 + 120) + 32LL))(a2 + 120, &v22);
  v5 = *a1;
  v28[2] = DXGI_FORMAT_UNKNOWN;
  v28[0] = DXGI_FORMAT_B8G8R8A8_UNORM;
  v28[1] = DXGI_FORMAT_R32G32B32A32_TYPELESS;
  v6 = CSystemMemoryBitmap::HrInit(v5, v22, v23, v28, 0);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE1,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v6,
      v19);
  v29[0] = 0;
  v29[1] = 0;
  v27 = 0LL;
  v29[2] = v22;
  v29[3] = v23;
  v7 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(*(_QWORD *)(a2 + 16) + 24LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v27);
  v8 = v7(a2 + 16, v29, 1LL, &v27);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v8,
      v19);
  v21 = 0;
  v24 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, int *, _DWORD **))(*(_QWORD *)v27 + 48LL))(v27, &v21, &v24);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v9,
      v19);
  v10 = *a1;
  v26 = 0LL;
  v11 = (__int64 (__fastcall *)(void **, _DWORD *, __int64, __int64 *))*((_QWORD *)v10[2] + 3);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v26);
  v12 = v11(v10 + 2, v29, 2LL, &v26);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v12,
      v19);
  v20 = 0;
  v25 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, int **))(*(_QWORD *)v26 + 48LL))(v26, &v20, &v25);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v13,
      v19);
  if ( v21 != v20 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      v14);
  v15 = v20 >> 2;
  if ( v20 >> 2 )
  {
    v16 = v24;
    v17 = v25;
    do
    {
      *v17 = *v16 ^ (~*v16 << 24);
      v16 = v24 + 1;
      v17 = v25 + 1;
      ++v24;
      ++v25;
      --v15;
    }
    while ( v15 );
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  return a1;
}
