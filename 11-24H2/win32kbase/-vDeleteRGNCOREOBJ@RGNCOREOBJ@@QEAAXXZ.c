/*
 * XREFs of ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x14001B7A0
 * Callers:
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140019860 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140019D9C (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x14001A350 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x140110B30 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     CddEngDeleteRgn @ 0x140147F00 (CddEngDeleteRgn.c)
 * Callees:
 *     ?Win32FreePoolImpl@@YAXPEAX@Z @ 0x14001BE10 (-Win32FreePoolImpl@@YAXPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall RGNCOREOBJ::vDeleteRGNCOREOBJ(Win32kRS **this, struct REGION_CORE *a2)
{
  Win32kRS *v2; // r14
  char *SystemArgument1; // rdi
  struct SCAN *pScan_mut; // rax

  v2 = *this;
  if ( *this )
  {
    SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
      (*(void (__fastcall **)(Win32kRS *))(*(_QWORD *)SystemArgument1 + 152LL))(v2);
      ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else if ( *(_QWORD *)v2 )
    {
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(*this, a2);
      else
        pScan_mut = *(struct SCAN **)*this;
      GreDeleteFastMutex(pScan_mut);
    }
    if ( *this )
      Win32FreePoolImpl(*this);
    *this = 0LL;
  }
}
