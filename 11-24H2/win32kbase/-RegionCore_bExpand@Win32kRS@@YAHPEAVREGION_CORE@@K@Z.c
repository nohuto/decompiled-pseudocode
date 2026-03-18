/*
 * XREFs of ?RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z @ 0x140199D48
 * Callers:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1400EF910 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140069040 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_bExpand(Win32kRS *this, struct REGION_CORE *a2)
{
  __int64 *SystemArgument1; // rdi
  unsigned int v3; // ebp
  char *v5; // rbx
  __int64 v6; // rsi

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v3 = (unsigned int)a2;
  v5 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)((char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8), 2u);
  v6 = *SystemArgument1;
  LODWORD(SystemArgument1) = (*(__int64 (__fastcall **)(Win32kRS *, _QWORD))(*SystemArgument1 + 104))(this, v3);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((unsigned int (__fastcall **)(const struct REGION_CORE *))(v6 + 48), this);
  ExReleasePushLockSharedEx(v5, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SystemArgument1;
}
