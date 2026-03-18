/*
 * XREFs of ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x180175EF4
 * Callers:
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802E1434 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802E1604 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x180061260 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query_to@VIDeviceTexture@@@?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVIDeviceTexture@@@Z @ 0x180176474 (--$query_to@VIDeviceTexture@@@-$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x1801A178C (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v14; // rax
  int v15; // ebx
  int v16; // r8d
  __int64 v17; // rcx
  int v18; // edx
  FastRegion::Internal::CRgnData *v19; // rcx
  __int64 v21; // [rsp+58h] [rbp-9h] BYREF
  __int64 v22; // [rsp+60h] [rbp-1h] BYREF
  int v23; // [rsp+68h] [rbp+7h] BYREF
  int v24; // [rsp+6Ch] [rbp+Bh]
  int v25; // [rsp+70h] [rbp+Fh]
  int v26; // [rsp+74h] [rbp+13h]
  _BYTE v27[8]; // [rsp+78h] [rbp+17h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp+1Fh]
  int *v29; // [rsp+88h] [rbp+27h]
  __int64 v30; // [rsp+90h] [rbp+2Fh]
  int v31; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int64 v33; // [rsp+D8h] [rbp+77h] BYREF

  lpVtbl = a3->lpVtbl;
  v33 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a3,
         &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
         &v33);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)(unsigned int)v8);
    if ( !v33 )
      return v9;
    v10 = *(void (**)(void))(*(_QWORD *)v33 + 16LL);
LABEL_4:
    v10();
    return v9;
  }
  v22 = 0LL;
  v11 = wil::com_ptr_t<IDeviceTextureTarget,wil::err_returncode_policy>::query_to<IDeviceTexture>(
          (char *)this + 120,
          &v22);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)(unsigned int)v11);
LABEL_20:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
    return v9;
  }
  v21 = 0LL;
  v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 120LL))(v22);
  v13 = (**v12)(v12, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v21);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)(unsigned int)v13);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( !v33 )
      return v9;
    v10 = *(void (**)(void))(*(_QWORD *)v33 + 16LL);
    goto LABEL_4;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15));
  v15 = v14;
  if ( *(_DWORD *)(v14 + 1112) )
  {
    v9 = -2003304307;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)0x8898008DLL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
    goto LABEL_20;
  }
  FastRegion::CRegion::BeginIterator(a2, (__int64)v27);
  while ( (unsigned __int64)v29 < v28 )
  {
    v16 = v29[2];
    v17 = 2 * v31;
    v24 = *v29;
    v26 = v16;
    v18 = *(_DWORD *)(v30 + 4 * v17);
    v25 = *(_DWORD *)(v30 + 4 * v17 + 4);
    v23 = v18;
    CD3DDevice::CopySubresourceRegion(v15, v33, a4, (unsigned int)&v23, v21, 0, v18, v24, 0);
    FastRegion::Internal::CRgnData::StepIterator(v19, (struct FastRegion::CRegion::Iterator *)v27);
  }
  CD2DBitmapCache::AddInvalidRegion(this, (const struct FastRegion::Internal::CRgnData **)a2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
  return 0LL;
}
