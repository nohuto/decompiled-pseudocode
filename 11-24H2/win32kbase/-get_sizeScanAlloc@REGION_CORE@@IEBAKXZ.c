/*
 * XREFs of ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50
 * Callers:
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140027B90 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140028A10 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400296C0 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x140064C10 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1400652E8 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1400653B4 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140065A98 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140066420 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x1400DD83C (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140174490 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C1770 (-vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall REGION_CORE::get_sizeScanAlloc(REGION_CORE *this)
{
  char *SystemArgument1; // rdi
  unsigned int v3; // eax
  char *v4; // rcx
  unsigned int v5; // edi

  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  if ( !WPP_MAIN_CB.Dpc.SystemArgument1 )
    return *((unsigned int *)this + 2);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
  v3 = (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)SystemArgument1 + 224LL))(this);
  v4 = SystemArgument1 + 8;
  v5 = v3;
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return v5;
}
