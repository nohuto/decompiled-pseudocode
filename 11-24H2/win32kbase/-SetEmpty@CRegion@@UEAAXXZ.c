/*
 * XREFs of ?SetEmpty@CRegion@@UEAAXXZ @ 0x14001A880
 * Callers:
 *     ?Release@CRegion@@UEBAJXZ @ 0x1400199B0 (-Release@CRegion@@UEBAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CRegion::SetEmpty(CRegion *this, struct REGION_CORE *a2)
{
  struct SCAN **v2; // rdi
  char *SystemArgument1; // rsi
  struct SCAN *pScan_mut; // rax

  v2 = (struct SCAN **)*((_QWORD *)this + 2);
  if ( v2 )
  {
    SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
      (*(void (__fastcall **)(struct SCAN **))(*(_QWORD *)SystemArgument1 + 152LL))(v2);
      ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else if ( *v2 )
    {
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(*((Win32kRS **)this + 2), a2);
      else
        pScan_mut = *v2;
      GreDeleteFastMutex(pScan_mut);
    }
    GreDeleteFastMutex(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
}
