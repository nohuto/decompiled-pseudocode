/*
 * XREFs of ?RegionCore_sizeSave@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14007BDF8
 * Callers:
 *     GreGetRegionData @ 0x14002B770 (GreGetRegionData.c)
 *     ?sizeSave@RGNCOREOBJ@@QEBAKXZ @ 0x14007BCFC (-sizeSave@RGNCOREOBJ@@QEBAKXZ.c)
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x14007BD80 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_sizeSave(Win32kRS *this, const struct REGION_CORE *a2)
{
  PVOID SystemArgument1; // rdi
  char *v4; // rbx

  SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
  v4 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 2LL);
  LODWORD(SystemArgument1) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)SystemArgument1 + 288LL))(this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SystemArgument1;
}
