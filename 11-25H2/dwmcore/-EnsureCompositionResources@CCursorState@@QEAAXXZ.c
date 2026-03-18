/*
 * XREFs of ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802BC170
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18029A990 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802BC708 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x180100570 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1801DCA6C (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801F5F50 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ColorConvertBitmap@CCursorState@@CA?AV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAVCSystemMemoryBitmap@@@Z @ 0x1802BBE78 (-ColorConvertBitmap@CCursorState@@CA-AV-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@.c)
 *     ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x1802BC2D4 (-EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802BDBC4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCursorState::EnsureCompositionResources(CCursorState *this)
{
  __int64 v1; // rdx
  __int64 *v3; // rdi
  void ***v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rdx
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct IWICBitmapSource **); // [rsp+60h] [rbp+20h] BYREF
  struct IWICBitmapSource *v14; // [rsp+68h] [rbp+28h] BYREF
  void **v15; // [rsp+70h] [rbp+30h] BYREF

  v1 = *((_QWORD *)this + 22);
  if ( v1 )
  {
    v3 = (__int64 *)((char *)this + 120);
    if ( !*((_QWORD *)this + 15) )
    {
      v13 = 0LL;
      if ( *((_BYTE *)this + 81) )
      {
        v4 = CCursorState::ColorConvertBitmap(&v15, *(_QWORD *)(v1 + 24));
        v5 = (__int64)*v4;
        *v4 = 0LL;
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
          (__int64 *)&v13,
          v5);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
      }
      else if ( *((_BYTE *)this + 114) )
      {
        CCursorState::TryGetShape((_DWORD)this, (unsigned int)&v10, *(_DWORD *)(v1 + 12), 1, 1);
        if ( v10 )
        {
          wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
            (__int64 *)&v13,
            (__int64 *)(v10 + 24));
        }
        else
        {
          v6 = (__int64 *)(*((_QWORD *)this + 22) + 24LL);
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
          (__int64 *)(v1 + 24));
      }
      v14 = 0LL;
      v7 = (**v13)(v13, &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94, &v14);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x162,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v7,
          v9);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v3);
      v8 = CWICBitmapRealization::Create(v14, (struct IBitmapRealization **)v3);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x165,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v8,
          v9);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
    }
    CCursorState::EnsureDestRectAndTransform(this, 0);
  }
}
