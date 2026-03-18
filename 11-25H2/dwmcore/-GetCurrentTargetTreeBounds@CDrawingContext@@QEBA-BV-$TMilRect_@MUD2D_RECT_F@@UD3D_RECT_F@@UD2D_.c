/*
 * XREFs of ?GetCurrentTargetTreeBounds@CDrawingContext@@QEBA?BV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18029A6FC
 * Callers:
 *     ?DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z @ 0x180299E64 (-DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall CDrawingContext::GetCurrentTargetTreeBounds(__int64 a1, _OWORD *a2)
{
  _QWORD *v3; // rcx
  __int128 v4; // xmm0
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = *(_QWORD **)(a1 + 48);
  if ( v3
    && (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v3)(*v3, &GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97, &v6) >= 0 )
  {
    v4 = *(_OWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 256LL))(v6) + 8);
  }
  else
  {
    v4 = DirectX::g_XMZero;
  }
  *a2 = v4;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v6);
  return a2;
}
