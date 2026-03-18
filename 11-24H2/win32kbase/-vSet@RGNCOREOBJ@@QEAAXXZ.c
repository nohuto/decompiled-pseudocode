/*
 * XREFs of ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400288AC
 * Callers:
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x140064C10 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x1400F313C (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140028934 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 */

void __fastcall RGNCOREOBJ::vSet(Win32kRS **this, struct REGION_CORE *a2)
{
  PVOID SystemArgument1; // rax
  Win32kRS *v3; // rbx
  unsigned __int64 v4; // rcx
  struct SCAN *pScan_mut; // rax

  SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
  v3 = *this;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    Win32kRS::RegionCore_set_to_null_scan(*this, a2);
  }
  else
  {
    v4 = *((_QWORD *)v3 + 1);
    *((_QWORD *)v3 + 2) = 16LL;
    if ( v4 < 0x10 )
    {
      *((_QWORD *)v3 + 2) = v4;
      RustOnZeroSizedScanCallback();
      SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
    }
    *((_DWORD *)v3 + 6) = 1;
    *(_OWORD *)((char *)v3 + 28) = 0LL;
    if ( SystemArgument1 )
      pScan_mut = Win32kRS::RegionCore_get_pScan_mut(v3, a2);
    else
      pScan_mut = *(struct SCAN **)v3;
    *(_DWORD *)pScan_mut = 0;
    *((_DWORD *)pScan_mut + 3) = 0;
    *((_DWORD *)pScan_mut + 1) = 0x80000000;
    *((_DWORD *)pScan_mut + 2) = 0x7FFFFFFF;
  }
}
