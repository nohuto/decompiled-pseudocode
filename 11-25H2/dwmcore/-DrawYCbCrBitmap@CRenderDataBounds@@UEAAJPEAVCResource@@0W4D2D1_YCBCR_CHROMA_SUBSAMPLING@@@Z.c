/*
 * XREFs of ?DrawYCbCrBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1802B65F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EE2F8 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderDataBounds::DrawYCbCrBitmap(
        CRenderDataBounds *this,
        struct CResource *a2,
        struct CResource *a3,
        __int64 a4)
{
  __int64 v7; // rax
  int (__fastcall *v8)(char *, __int64 *); // rbx
  _DWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  struct D2D_RECT_F v11; // [rsp+28h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+18h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64, struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(
         a2,
         41LL,
         a3,
         a4)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 64LL))(a3, 41LL) )
  {
    v7 = *((_QWORD *)a2 + 9);
    v12 = 0LL;
    v8 = *(int (__fastcall **)(char *, __int64 *))(v7 + 64);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v12);
    if ( v8((char *)a2 + 72, &v12) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v12 + 32LL))(v12, v10);
      v11.left = 0.0;
      v11.top = 0.0;
      v11.right = (float)v10[0];
      v11.bottom = (float)v10[1];
      CRenderDataBounds::AddBounds((__int64)this, &v11);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
  }
  return 0LL;
}
