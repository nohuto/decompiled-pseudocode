/*
 * XREFs of ??$emplace_back@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAUIDXGIResource@@@Z @ 0x180100A50
 * Callers:
 *     ?CleanupDelayUnpin@CD3DDevice@@AEAAXXZ @ 0x1802C24D4 (-CleanupDelayUnpin@CD3DDevice@@AEAAXXZ.c)
 *     ?ImmediateUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x1802C39EC (-ImmediateUnpinResources@CD3DDevice@@QEAAXV-$span@PEAVISwapChainRealization@@$0-0@gsl@@@Z.c)
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x1802C4000 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAVISwapChainRealization@@$0-0@gsl@@@Z.c)
 *     ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x1802C42B8 (-ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAUIDXGIResource@@@Z @ 0x180100D04 (--$_Emplace_reallocate@AEAPEAUIDXGIResource@@@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returnc.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<IDXGIResource * &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    return std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<IDXGIResource * &>(
             a1,
             *(_QWORD *)(a1 + 8),
             a2);
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    *(_QWORD **)(a1 + 8),
    *a2);
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v3 + 8;
  return v3;
}
