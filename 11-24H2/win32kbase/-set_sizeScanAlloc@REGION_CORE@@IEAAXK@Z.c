/*
 * XREFs of ?set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z @ 0x140065BE4
 * Callers:
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140065A98 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017A1BC (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C1200 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 * Callees:
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 */

void __fastcall REGION_CORE::set_sizeScanAlloc(REGION_CORE *this, unsigned int a2)
{
  if ( !WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    *((_QWORD *)this + 1) = a2;
    if ( (unsigned __int64)a2 < *((_QWORD *)this + 2) )
    {
      *((_QWORD *)this + 2) = a2;
      RustOnZeroSizedScanCallback();
    }
  }
}
