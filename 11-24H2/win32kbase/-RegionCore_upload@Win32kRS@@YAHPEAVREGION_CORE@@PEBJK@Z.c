/*
 * XREFs of ?RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z @ 0x140064ED8
 * Callers:
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x140064C10 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140069040 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_upload(Win32kRS *this, struct REGION_CORE *a2, const int *a3)
{
  __int64 *SystemArgument1; // rdi
  unsigned int v6; // ebp
  char *v7; // rbx
  __int64 v8; // rsi

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v6 = (unsigned int)a3;
  v7 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)((char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8), 2u);
  v8 = *SystemArgument1;
  LODWORD(SystemArgument1) = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, _QWORD))(*SystemArgument1 + 328))(
                               this,
                               a2,
                               v6);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v8 + 48), this);
  ExReleasePushLockSharedEx(v7, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SystemArgument1;
}
