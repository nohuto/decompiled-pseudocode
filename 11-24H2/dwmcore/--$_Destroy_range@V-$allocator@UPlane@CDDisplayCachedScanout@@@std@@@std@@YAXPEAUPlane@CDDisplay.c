/*
 * XREFs of ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x180068C24
 * Callers:
 *     ??1CDDisplayCachedScanout@@QEAA@XZ @ 0x1800683C8 (--1CDDisplayCachedScanout@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAXQEAUPlane@CDDisplayCachedScanout@@_K1@Z @ 0x1800687CC (-_Change_array@-$vector@UPlane@CDDisplayCachedScanout@@V-$allocator@UPlane@CDDisplayCachedScanou.c)
 *     ??$_Uninitialized_move@PEAUPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAPEAUPlane@CDDisplayCachedScanout@@QEAU12@0PEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x180068858 (--$_Uninitialized_move@PEAUPlane@CDDisplayCachedScanout@@V-$allocator@UPlane@CDDisplayCachedScan.c)
 *     ?Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180068B68 (-Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Cor.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v3 + 8));
      v3 += 88LL;
    }
    while ( v3 != a2 );
  }
}
