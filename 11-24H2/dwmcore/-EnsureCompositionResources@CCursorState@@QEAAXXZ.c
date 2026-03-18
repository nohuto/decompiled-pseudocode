/*
 * XREFs of ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802B269C
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802908E0 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802B30A8 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x180189728 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1801CE8F8 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801E8D90 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ColorConvertBitmap@CCursorState@@CA?AV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAVCSystemMemoryBitmap@@@Z @ 0x1802B2438 (-ColorConvertBitmap@CCursorState@@CA-AV-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@.c)
 *     ?EnsureShapeRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x1802B2BB8 (-EnsureShapeRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?GetSize@ShapeData@CCursorState@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1802B2EF8 (-GetSize@ShapeData@CCursorState@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z @ 0x1802B47F4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCursorState::EnsureCompositionResources(CCursorState *this)
{
  __int64 *v1; // rax
  __int64 *v3; // rdi
  void ***v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rdx
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-10h]
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct IWICBitmapSource **); // [rsp+60h] [rbp+20h] BYREF
  void **v14; // [rsp+68h] [rbp+28h] BYREF
  struct IWICBitmapSource *v15; // [rsp+70h] [rbp+30h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 22);
  if ( v1 )
  {
    v3 = (__int64 *)((char *)this + 120);
    if ( !*((_QWORD *)this + 15) )
    {
      v13 = 0LL;
      if ( *((_BYTE *)this + 81) )
      {
        v4 = CCursorState::ColorConvertBitmap(&v14, v1[2]);
        v5 = (__int64)*v4;
        *v4 = 0LL;
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
          (__int64 *)&v13,
          v5);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
      }
      else if ( *((_BYTE *)this + 114) )
      {
        CCursorState::ShapeData::GetSize((CCursorState::ShapeData *)v1);
        LODWORD(v14) = (_DWORD)v14 + 6;
        HIDWORD(v14) += 6;
        CCursorState::TryGetShape(this, 1);
        if ( v10 )
        {
          wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
            (__int64 *)&v13,
            (__int64 *)(v10 + 16));
        }
        else
        {
          v6 = (__int64 *)(*((_QWORD *)this + 22) + 16LL);
          *((_BYTE *)this + 115) = 0;
          wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
            (__int64 *)&v13,
            v6);
          *((_BYTE *)this + 114) = 0;
        }
        if ( v11 )
          std::_Ref_count_base::_Decref(v11);
      }
      else
      {
        wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
          (__int64 *)&v13,
          v1 + 2);
      }
      v15 = 0LL;
      v7 = (**v13)(v13, &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94, &v15);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x13A,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v7,
          v9);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v3);
      v8 = CWICBitmapRealization::Create(v15, (struct IBitmapRealization **)v3);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x13E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v8,
          v9);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
    }
    CCursorState::EnsureShapeRectAndTransform(this, 0);
  }
}
