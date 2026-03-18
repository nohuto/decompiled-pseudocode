/*
 * XREFs of ?RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z @ 0x1400689C4
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1400671D0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140069040 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_set_to_rectls(
        Win32kRS *this,
        struct REGION_CORE *a2,
        __int64 a3,
        const struct _RECTL *a4)
{
  __int64 *SystemArgument1; // rdi
  char *v8; // rbx
  __int64 v9; // rsi

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v8 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)((char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8), 2u);
  v9 = *SystemArgument1;
  LODWORD(SystemArgument1) = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, __int64))(*SystemArgument1
                                                                                                  + 168))(
                               this,
                               a2,
                               a3);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v9 + 48), this);
  ExReleasePushLockSharedEx(v8, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SystemArgument1;
}
