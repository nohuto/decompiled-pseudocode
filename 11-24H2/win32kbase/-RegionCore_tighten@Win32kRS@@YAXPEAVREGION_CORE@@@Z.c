/*
 * XREFs of ?RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140066BC4
 * Callers:
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x140065F10 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140069040 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kRS::RegionCore_tighten(Win32kRS *this, struct REGION_CORE *a2)
{
  __int64 *SystemArgument1; // rdi
  char *v4; // rbx
  __int64 v5; // rdi

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v4 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)((char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8), 2u);
  v5 = *SystemArgument1;
  (*(void (__fastcall **)(Win32kRS *))(v5 + 304))(this);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v5 + 48), this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
}
