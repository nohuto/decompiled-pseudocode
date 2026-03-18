/*
 * XREFs of ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x1802BCCCC
 * Callers:
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802BDBC4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180187810 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1801DC7EC (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801F5F50 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z @ 0x1802661B8 (-GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z.c)
 *     ??$make_shared@UShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@UShapeData@CCursorState@@@0@XZ @ 0x1802BB25C (--$make_shared@UShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@UShapeData@CCursorState@@@0@X.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1802BFD08 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CCursorState::RotateShape(__int64 a1, _QWORD *a2, int **a3, int a4)
{
  CComposition *v4; // rcx
  __int64 v6; // rbx
  struct IWICImagingFactoryVtbl *lpVtbl; // rax
  unsigned int v10; // esi
  CSystemMemoryBitmap *v11; // rax
  CSystemMemoryBitmap *v12; // rax
  struct WICRect *v13; // r8
  bool v14; // r9
  const char *v15; // r9
  unsigned int v16; // esi
  unsigned int v17; // esi
  __int64 v18; // rsi
  int v19; // ecx
  struct IWICImagingFactory *v21; // [rsp+20h] [rbp-40h] BYREF
  struct IBitmapSource *v22; // [rsp+28h] [rbp-38h] BYREF
  struct IWICBitmapSource *v23; // [rsp+30h] [rbp-30h] BYREF
  int v24; // [rsp+38h] [rbp-28h] BYREF
  int v25; // [rsp+3Ch] [rbp-24h]
  CSystemMemoryBitmap *v26; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v27[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v29; // [rsp+80h] [rbp+20h] BYREF

  v4 = *(CComposition **)(a1 + 64);
  v6 = 0LL;
  v21 = 0LL;
  if ( (int)CComposition::GetImagingFactory(v4, &v21) >= 0 )
  {
    lpVtbl = v21->lpVtbl;
    v29 = 0LL;
    if ( ((int (__fastcall *)(struct IWICImagingFactory *, __int64 *))lpVtbl->CreateBitmapFlipRotator)(v21, &v29) < 0
      || (v10 = (a4 - (*a3)[2] + 4) % 4,
          (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v29 + 64LL))(
            v29,
            (*((_QWORD *)*a3 + 3) + 32LL) & -(__int64)(*((_QWORD *)*a3 + 3) != 0LL),
            v10) < 0) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    else
    {
      v23 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v29)(
             v29,
             &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
             &v23) >= 0 )
      {
        v22 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v22);
        if ( (int)HrCreateBitmapFromWICBitmapSource(v23, &v22) >= 0 )
        {
          v11 = (CSystemMemoryBitmap *)operator new(0x98uLL);
          if ( v11 )
            v12 = CSystemMemoryBitmap::CSystemMemoryBitmap(v11);
          else
            v12 = 0LL;
          wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
            &v26,
            (__int64)v12);
          if ( (int)CSystemMemoryBitmap::HrInit(v26, v22, v13, v14) >= 0 )
          {
            std::make_shared<CCursorState::ShapeData,>(v27);
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(*((_QWORD *)*a3 + 3) + 120LL) + 32LL))(
              *((_QWORD *)*a3 + 3) + 120LL,
              &v24);
            v16 = v10 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                if ( v17 != 1 )
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    (void *)0x3D7,
                    (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
                    v15);
                v18 = v27[0];
                *(_DWORD *)v27[0] = (*a3)[1];
                v19 = v24 - **a3;
              }
              else
              {
                v18 = v27[0];
                *(_DWORD *)v27[0] = v24 - **a3;
                v19 = v25 - (*a3)[1];
              }
            }
            else
            {
              v18 = v27[0];
              *(_DWORD *)v27[0] = v25 - (*a3)[1];
              v19 = **a3;
            }
            *(_DWORD *)(v18 + 4) = v19;
            *(_DWORD *)(v18 + 8) = a4;
            *(_DWORD *)(v18 + 12) = (*a3)[3];
            do
            {
              *(_BYTE *)(v18 + v6 + 16) = *((_BYTE *)*a3 + v6 + 16);
              ++v6;
            }
            while ( v6 < 2 );
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              (__int64 *)(v18 + 24),
              (__int64 *)&v26);
            a2[1] = v27[1];
            *a2 = v18;
          }
          else
          {
            *a2 = 0LL;
            a2[1] = 0LL;
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
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
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
  return a2;
}
