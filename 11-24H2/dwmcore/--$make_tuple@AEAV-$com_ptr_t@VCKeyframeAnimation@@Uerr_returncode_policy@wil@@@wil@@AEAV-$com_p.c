/*
 * XREFs of ??$make_tuple@AEAV?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@YA?AV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@0@AEAV?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@3@$$QEAV?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@0@@Z @ 0x18028B32C
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x18028B628 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::make_tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy> &,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy> &,std::vector<D2D_RECT_F>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // r11
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  v4 = a4[2];
  a4[2] = 0LL;
  v7 = a4[1];
  a4[1] = 0LL;
  v8 = *a4;
  *a4 = 0LL;
  *a1 = v8;
  a1[1] = v7;
  a1[2] = v4;
  v9 = *a3;
  a1[3] = *a3;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *a2;
  a1[4] = *a2;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  return a1;
}
