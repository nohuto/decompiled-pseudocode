/*
 * XREFs of ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140069040
 * Callers:
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140029090 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_vScale@Win32kRS@@YAXPEAVREGION_CORE@@VPOINTFL@@@Z @ 0x14003D324 (-RegionCore_vScale@Win32kRS@@YAXPEAVREGION_CORE@@VPOINTFL@@@Z.c)
 *     ?RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z @ 0x140064708 (-RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z.c)
 *     ?RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z @ 0x140064ED8 (-RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z.c)
 *     ?RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z @ 0x140065C18 (-RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z.c)
 *     ?RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140066BC4 (-RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z @ 0x1400689C4 (-RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z.c)
 *     ?RegionCore_iReduce@Win32kRS@@YAJPEAVREGION_CORE@@PEBV2@@Z @ 0x140068DB8 (-RegionCore_iReduce@Win32kRS@@YAJPEAVREGION_CORE@@PEBV2@@Z.c)
 *     ?RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z @ 0x140199D48 (-RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C0F70 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C1200 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 *     ?RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z @ 0x1401C1340 (-RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z @ 0x1401C13D0 (-bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z @ 0x1401C14F0 (-bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall RgnCaptureLiveMemoryDumpOnZeroSizedScan(
        unsigned int (__fastcall **a1)(const struct REGION_CORE *),
        const struct REGION_CORE *a2)
{
  if ( !a1[21](a2) )
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, a2, 0LL, 0LL, 0LL, 0LL, 0);
}
