/*
 * XREFs of ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140019CF8
 * Callers:
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140019860 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x14001A350 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     CddEngCreateRectRgn @ 0x1401315B0 (CddEngCreateRectRgn.c)
 * Callees:
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140019D9C (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140028934 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 */

RGNCOREMEMOBJ *__fastcall RGNCOREMEMOBJ::RGNCOREMEMOBJ(RGNCOREMEMOBJ *this)
{
  struct REGION_CORE *RegionCore; // rax
  struct REGION_CORE *v3; // rdx
  struct REGION_CORE *v4; // rbx
  PVOID SystemArgument1; // rax
  unsigned __int64 v6; // rcx
  struct SCAN *pScan_mut; // rax

  RegionCore = RGNCOREMEMOBJ::AllocateRegionCore((unsigned int)this);
  *(_QWORD *)this = RegionCore;
  v4 = RegionCore;
  if ( RegionCore )
  {
    SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      Win32kRS::RegionCore_set_to_null_scan(v4, v3);
    }
    else
    {
      v6 = *((_QWORD *)v4 + 1);
      *((_QWORD *)v4 + 2) = 16LL;
      if ( v6 < 0x10 )
      {
        *((_QWORD *)v4 + 2) = v6;
        RustOnZeroSizedScanCallback();
        SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
      }
      *((_DWORD *)v4 + 6) = 1;
      *(_OWORD *)((char *)v4 + 28) = 0LL;
      if ( SystemArgument1 )
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(v4, v3);
      else
        pScan_mut = *(struct SCAN **)v4;
      *(_DWORD *)pScan_mut = 0;
      *((_DWORD *)pScan_mut + 3) = 0;
      *((_DWORD *)pScan_mut + 1) = 0x80000000;
      *((_DWORD *)pScan_mut + 2) = 0x7FFFFFFF;
    }
  }
  return this;
}
