/*
 * XREFs of ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x140029050
 * Callers:
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x1400647D0 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x140064C10 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1400652E8 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1400653B4 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140066420 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C1200 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 * Callees:
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140029090 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 */

void __fastcall REGION_CORE::set_sizeScan(REGION_CORE *this, struct REGION_CORE *a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    Win32kRS::RegionCore_set_sizeScan(this, a2, a3);
  }
  else
  {
    v3 = (unsigned int)a2;
    v4 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 2) = v3;
    if ( v4 < v3 )
    {
      *((_QWORD *)this + 2) = v4;
      RustOnZeroSizedScanCallback();
    }
  }
}
