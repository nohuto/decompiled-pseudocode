/*
 * XREFs of ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x1801CFD98
 * Callers:
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802D8194 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802D8364 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x180027F20 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800615A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180063EA4 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x1801CCE2C (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ??$query_to@VIDeviceTexture@@@?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVIDeviceTexture@@@Z @ 0x1801D0314 (--$query_to@VIDeviceTexture@@@-$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDecodeBitmap::CopyRegion(CDecodeBitmap *this, int **a2, struct ID3D11Texture2D *a3, int a4)
{
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  int v8; // eax
  unsigned int v9; // ebx
  void (*v10)(void); // rax
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // r8d
  __int64 v16; // rcx
  unsigned int v17; // edx
  FastRegion::Internal::CRgnData *v18; // rcx
  __int64 v20; // [rsp+58h] [rbp-9h] BYREF
  __int64 v21; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v22; // [rsp+68h] [rbp+7h] BYREF
  int v23; // [rsp+6Ch] [rbp+Bh]
  int v24; // [rsp+70h] [rbp+Fh]
  int v25; // [rsp+74h] [rbp+13h]
  char v26[8]; // [rsp+78h] [rbp+17h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp+1Fh]
  int *v28; // [rsp+88h] [rbp+27h]
  __int64 v29; // [rsp+90h] [rbp+2Fh]
  int v30; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int64 v32; // [rsp+D8h] [rbp+77h] BYREF

  lpVtbl = a3->lpVtbl;
  v32 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a3,
         &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
         &v32);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)(unsigned int)v8);
    if ( !v32 )
      return v9;
    v10 = *(void (**)(void))(*(_QWORD *)v32 + 16LL);
LABEL_4:
    v10();
    return v9;
  }
  v21 = 0LL;
  v11 = wil::com_ptr_t<IDeviceTextureTarget,wil::err_returncode_policy>::query_to<IDeviceTexture>(
          (char *)this + 120,
          &v21);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)(unsigned int)v11);
LABEL_20:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
    return v9;
  }
  v20 = 0LL;
  v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 120LL))(v21);
  v13 = (**v12)(v12, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v20);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)(unsigned int)v13);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( !v32 )
      return v9;
    v10 = *(void (**)(void))(*(_QWORD *)v32 + 16LL);
    goto LABEL_4;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15));
  if ( *(_DWORD *)(v14 + 1112) )
  {
    v9 = -2003304307;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)0x8898008DLL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
    goto LABEL_20;
  }
  FastRegion::CRegion::BeginIterator(a2, (__int64)v26);
  while ( (unsigned __int64)v28 < v27 )
  {
    v15 = v28[2];
    v16 = 2 * v30;
    v23 = *v28;
    v25 = v15;
    v17 = *(_DWORD *)(v29 + 4 * v16);
    v24 = *(_DWORD *)(v29 + 4 * v16 + 4);
    v22 = v17;
    CD3DDevice::CopySubresourceRegion(v14, v32, a4, (int *)&v22, v20, 0, v17, v23, 0);
    FastRegion::Internal::CRgnData::StepIterator(v18, (struct FastRegion::CRegion::Iterator *)v26);
  }
  CD2DBitmapCache::AddInvalidRegion(this, (const struct FastRegion::Internal::CRgnData **)a2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
  return 0LL;
}
