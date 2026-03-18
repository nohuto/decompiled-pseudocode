/*
 * XREFs of ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140066AF0
 * Callers:
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140028A10 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400296C0 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x1400647D0 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1400652E8 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x140065F10 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     GreEqualRgn @ 0x140066030 (GreEqualRgn.c)
 *     ?bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z @ 0x1400661EC (-bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140066300 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140066420 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

struct SCAN *__fastcall REGION_CORE::get_pscnTail(REGION_CORE *this)
{
  char *SystemArgument1; // rdi
  __int64 v3; // rax
  char *v4; // rcx
  __int64 v5; // rdi

  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  if ( !WPP_MAIN_CB.Dpc.SystemArgument1 )
    return (struct SCAN *)(*(_QWORD *)this + *((_QWORD *)this + 2));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
  v3 = (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)SystemArgument1 + 264LL))(this);
  v4 = SystemArgument1 + 8;
  v5 = v3;
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (struct SCAN *)v5;
}
