/*
 * XREFs of ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@AEBUD2D_SIZE_U@@@Z @ 0x1802B39BC
 * Callers:
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z @ 0x1802B47F4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4.c)
 * Callees:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180024574 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1801CE678 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801E8D90 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ?GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z @ 0x18025BE0C (-GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z.c)
 *     ??$make_shared@VShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@VShapeData@CCursorState@@@0@XZ @ 0x1802B1658 (--$make_shared@VShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@VShapeData@CCursorState@@@0@X.c)
 *     ?GetSize@ShapeData@CCursorState@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1802B2EF8 (-GetSize@ShapeData@CCursorState@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1802B66B8 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CCursorState::ScaleShape(__int64 a1, _QWORD *a2, CCursorState::ShapeData **a3, int *a4)
{
  CComposition *v8; // rcx
  float v9; // xmm6_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  struct IWICImagingFactoryVtbl *lpVtbl; // rax
  CSystemMemoryBitmap *v13; // rax
  CSystemMemoryBitmap *v14; // rax
  struct WICRect *v15; // r8
  bool v16; // r9
  __int64 v17; // rbx
  float v18; // xmm0_4
  struct IBitmapSource *v20; // [rsp+30h] [rbp-50h] BYREF
  struct IWICBitmapSource *v21; // [rsp+38h] [rbp-48h] BYREF
  CSystemMemoryBitmap *v22; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v23[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-30h] BYREF
  float v25; // [rsp+C0h] [rbp+40h]
  __int64 v26; // [rsp+D0h] [rbp+50h] BYREF
  struct IWICImagingFactory *v27; // [rsp+D8h] [rbp+58h] BYREF

  CCursorState::ShapeData::GetSize(*a3, (__int64)v23);
  v8 = *(CComposition **)(a1 + 64);
  v9 = (float)*a4;
  v27 = 0LL;
  v10 = v9 / (float)v23[0];
  v11 = (float)a4[1] / (float)v23[1];
  if ( (int)CComposition::GetImagingFactory(v8, &v27) >= 0 )
  {
    lpVtbl = v27->lpVtbl;
    v26 = 0LL;
    if ( ((int (__fastcall *)(struct IWICImagingFactory *, __int64 *))lpVtbl->CreateBitmapScaler)(v27, &v26) < 0
      || (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int))(*(_QWORD *)v26 + 64LL))(
           v26,
           (*((_QWORD *)*a3 + 2) + 32LL) & -(__int64)(*((_QWORD *)*a3 + 2) != 0LL),
           (unsigned int)*a4,
           (unsigned int)a4[1],
           *(_BYTE *)(a1 + 81) == 0 ? 3 : 0) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    else
    {
      v21 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v26)(
             v26,
             &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
             &v21) >= 0 )
      {
        v20 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v20);
        if ( (int)HrCreateBitmapFromWICBitmapSource(v21, &v20) >= 0 )
        {
          v13 = (CSystemMemoryBitmap *)operator new(0x98uLL);
          if ( v13 )
            v14 = CSystemMemoryBitmap::CSystemMemoryBitmap(v13);
          else
            v14 = 0LL;
          wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
            &v22,
            (__int64)v14);
          if ( (int)CSystemMemoryBitmap::HrInit(v22, v20, v15, v16) >= 0 )
          {
            std::make_shared<CCursorState::ShapeData,>(v24);
            v17 = v24[0];
            v18 = (float)((float)*(int *)*a3 * v10) + 6291456.25;
            *(_DWORD *)v24[0] = (int)(LODWORD(v18) << 10) >> 11;
            v25 = (float)((float)*((int *)*a3 + 1) * v11) + 6291456.25;
            *(_DWORD *)(v17 + 4) = (int)(LODWORD(v25) << 10) >> 11;
            *(_DWORD *)(v17 + 8) = *((_DWORD *)*a3 + 2);
            *(_BYTE *)(v17 + 12) = 1;
            *(_BYTE *)(v17 + 13) = *((_BYTE *)*a3 + 13);
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              (__int64 *)(v17 + 16),
              (__int64 *)&v22);
            a2[1] = v24[1];
            *a2 = v17;
          }
          else
          {
            *a2 = 0LL;
            a2[1] = 0LL;
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
        }
        else
        {
          *a2 = 0LL;
          a2[1] = 0LL;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
      }
      else
      {
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
  return a2;
}
