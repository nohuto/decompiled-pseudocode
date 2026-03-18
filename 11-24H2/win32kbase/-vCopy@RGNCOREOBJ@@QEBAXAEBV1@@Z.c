/*
 * XREFs of ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x14002AF10
 * Callers:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x140025A90 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140025B10 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017A1BC (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z @ 0x1401C13D0 (-bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z.c)
 * Callees:
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140029090 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void __fastcall RGNCOREOBJ::vCopy(Win32kRS **this, REGION_CORE **a2)
{
  char *SystemArgument1; // r15
  REGION_CORE *v5; // rsi
  Win32kRS *v6; // rbp
  __int64 v7; // rdi
  Win32kRS *v8; // rbx
  unsigned int sizeScan; // eax
  struct REGION_CORE *v10; // rdx
  unsigned __int64 v11; // rcx
  bool v12; // zf
  struct SCAN *pScan_mut; // rsi
  struct SCAN *v14; // rbx
  unsigned int v15; // eax

  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v5 = *a2;
    v6 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
    v7 = *(_QWORD *)SystemArgument1;
    (*(void (__fastcall **)(Win32kRS *, REGION_CORE *))(*(_QWORD *)SystemArgument1 + 88LL))(v6, v5);
    if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v7 + 216))(v6) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v6, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v8 = *this;
    if ( *this != *a2 )
    {
      sizeScan = REGION_CORE::get_sizeScan(*a2);
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        Win32kRS::RegionCore_set_sizeScan(v8, (struct REGION_CORE *)sizeScan);
      }
      else
      {
        v11 = *((_QWORD *)v8 + 1);
        *((_QWORD *)v8 + 2) = sizeScan;
        if ( v11 < sizeScan )
        {
          *((_QWORD *)v8 + 2) = v11;
          RustOnZeroSizedScanCallback();
        }
      }
      v12 = WPP_MAIN_CB.Dpc.SystemArgument1 == 0LL;
      *((_DWORD *)*this + 6) = *((_DWORD *)*a2 + 6);
      *(_OWORD *)((char *)*this + 28) = *(_OWORD *)((char *)*a2 + 28);
      if ( v12 )
        pScan_mut = *(struct SCAN **)*a2;
      else
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(*a2, v10);
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
        v14 = Win32kRS::RegionCore_get_pScan_mut(*this, v10);
      else
        v14 = *(struct SCAN **)*this;
      v15 = REGION_CORE::get_sizeScan(*a2);
      memmove(v14, pScan_mut, v15);
    }
  }
}
