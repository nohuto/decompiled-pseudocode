/*
 * XREFs of ?RegionCore_bContain_region@Win32kRS@@YAHPEBVREGION_CORE@@0@Z @ 0x14017C280
 * Callers:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14001666C (-bTightenRao@DC@@QEAAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_bContain_region(
        Win32kRS *this,
        const struct REGION_CORE *a2,
        const struct REGION_CORE *a3)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rdi
  char *v6; // rbx

  BaseRustGlobals = GetBaseRustGlobals();
  v6 = (char *)BaseRustGlobals + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)BaseRustGlobals + 8, 2LL);
  LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(Win32kRS *, const struct REGION_CORE *))(*(_QWORD *)BaseRustGlobals
                                                                                               + 56LL))(
                               this,
                               a2);
  ExReleasePushLockSharedEx(v6, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)BaseRustGlobals;
}
