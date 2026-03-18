/*
 * XREFs of ??$emplace_back@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_T$$QEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801D8AD8
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18005F5C0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1802338C4 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x1802BAC58 (-ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801D8C34 (--$_Emplace_reallocate@V-$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v2; // r9
  __int64 v3; // rdx
  __int64 v5; // rax

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 == *(_QWORD **)(a1 + 16) )
    return std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>(
             a1,
             *(_QWORD *)(a1 + 8),
             a2);
  v5 = *a2;
  *a2 = 0LL;
  *v2 = v5;
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v3 + 8;
  return v3;
}
