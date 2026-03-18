/*
 * XREFs of ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x140063310
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1400617E0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400CE8CC (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_get_sizeScan(Win32kRS *this, const struct REGION_CORE *a2)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rdi
  char *v4; // rbx

  BaseRustGlobals = GetBaseRustGlobals();
  v4 = (char *)BaseRustGlobals + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)BaseRustGlobals + 8, 2LL);
  LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)BaseRustGlobals + 216LL))(this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)BaseRustGlobals;
}
