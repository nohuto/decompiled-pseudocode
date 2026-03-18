/*
 * XREFs of ?RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z @ 0x140064708
 * Callers:
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x1400647D0 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140069040 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_upload_for_floodfill(
        Win32kRS *this,
        struct REGION_CORE *a2,
        const int *a3,
        __int64 a4,
        int *a5)
{
  __int64 *SystemArgument1; // rdi
  unsigned int v9; // r14d
  char *v10; // rbx
  __int64 v11; // rsi

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v9 = (unsigned int)a3;
  v10 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)((char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8), 2u);
  v11 = *SystemArgument1;
  LODWORD(SystemArgument1) = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, _QWORD, __int64, _DWORD))(*SystemArgument1 + 336))(
                               this,
                               a2,
                               v9,
                               a4,
                               (_DWORD)a5);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v11 + 48), this);
  ExReleasePushLockSharedEx(v10, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SystemArgument1;
}
