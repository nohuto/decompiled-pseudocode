/*
 * XREFs of ?AddCompSurfInfoUpdate@CComposition@@QEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A6AD4
 * Callers:
 *     ?SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6250 (-SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEB.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6390 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W.c)
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6570 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatri.c)
 *     ?NotifyOverlayFrame@CGlobalCompositionSurfaceInfo@@UEAAXAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x18029CA60 (-NotifyOverlayFrame@CGlobalCompositionSurfaceInfo@@UEAAXAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENC.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCCompositionSurfaceInfo@@@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A610C (--$_Emplace_reallocate@AEAPEAVCCompositionSurfaceInfo@@@-$vector@V-$com_ptr_t@VCCompositionSurfa.c)
 */

void __fastcall CComposition::AddCompSurfInfoUpdate(CComposition *this, struct CCompositionSurfaceInfo *a2)
{
  struct CCompositionSurfaceInfo **v2; // rcx
  char *v3; // rbx
  struct CCompositionSurfaceInfo **i; // rax
  struct CCompositionSurfaceInfo *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (struct CCompositionSurfaceInfo **)*((_QWORD *)g_pComposition + 745);
  v3 = (char *)g_pComposition + 5952;
  for ( i = (struct CCompositionSurfaceInfo **)*((_QWORD *)g_pComposition + 744); i != v2 && *i != a2; ++i )
    ;
  if ( i == v2 )
  {
    if ( *((_QWORD *)g_pComposition + 745) == *((_QWORD *)g_pComposition + 746) )
    {
      std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::_Emplace_reallocate<CCompositionSurfaceInfo * &>(
        (__int64 **)g_pComposition + 744,
        *((__int64 **)g_pComposition + 745),
        (__int64 *)&v5);
    }
    else
    {
      wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
        *((_QWORD **)g_pComposition + 745),
        (__int64)a2);
      *((_QWORD *)v3 + 1) += 8LL;
    }
  }
}
