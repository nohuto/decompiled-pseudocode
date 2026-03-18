/*
 * XREFs of ?RegionCore_get_sizeScanAlloc@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x140029BD4
 * Callers:
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400296C0 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_get_sizeScanAlloc(Win32kRS *this, const struct REGION_CORE *a2)
{
  PVOID SystemArgument1; // rdi
  char *v4; // rbx

  SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
  v4 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 2LL);
  LODWORD(SystemArgument1) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)SystemArgument1 + 224LL))(this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SystemArgument1;
}
