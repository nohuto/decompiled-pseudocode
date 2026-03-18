/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400268F0
 * Callers:
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1400262A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14002BA00 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140068B50 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C0F70 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140028934 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this)
{
  __int64 *SystemArgument1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct REGION_CORE *v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  struct SCAN *pScan_mut; // rax
  char *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)this + 24LL;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v8 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
    v9 = v3 & -(__int64)(v2 != 0);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 1, 2LL);
    v10 = *SystemArgument1;
    (*(void (__fastcall **)(__int64))(v10 + 160))(v9);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v10 + 216))(v9) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v9, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v8, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = (struct REGION_CORE *)-v2;
    v5 = v3 & -(__int64)(v4 != 0LL);
    v6 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)(v5 + 0x10) = 16LL;
    if ( v6 < 0x10 )
    {
      *(_QWORD *)((v3 & -(__int64)(v4 != 0LL)) + 0x10) = v6;
      RustOnZeroSizedScanCallback();
      SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
    }
    *(_DWORD *)(v5 + 24) = 1;
    *(_OWORD *)(v5 + 28) = 0LL;
    if ( SystemArgument1 )
      pScan_mut = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v5, v4);
    else
      pScan_mut = *(struct SCAN **)v5;
    *(_DWORD *)pScan_mut = 0;
    *((_DWORD *)pScan_mut + 3) = 0;
    *((_DWORD *)pScan_mut + 1) = 0x80000000;
    *((_DWORD *)pScan_mut + 2) = 0x7FFFFFFF;
  }
}
