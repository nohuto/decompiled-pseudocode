/*
 * XREFs of ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14002A15C
 * Callers:
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1400107A0 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x140010800 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140019A04 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400296C0 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x14002A6B0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     SetRectRgnIndirect @ 0x14002CCB0 (SetRectRgnIndirect.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z @ 0x1400B9DA0 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_get_sizeScan(Win32kRS *this, const struct REGION_CORE *a2)
{
  PVOID SystemArgument1; // rdi
  char *v4; // rbx

  SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
  v4 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 2LL);
  LODWORD(SystemArgument1) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)SystemArgument1 + 216LL))(this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SystemArgument1;
}
