/*
 * XREFs of ?RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z @ 0x1400CE83C
 * Callers:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14001666C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400CE13C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x1400CE7DC (-bRectl@RGNOBJ@@QEBAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_is_rect(Win32kRS *this, const struct REGION_CORE *a2)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rdi
  char *v4; // rbx

  BaseRustGlobals = GetBaseRustGlobals();
  v4 = (char *)BaseRustGlobals + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)BaseRustGlobals + 8, 2LL);
  LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)BaseRustGlobals + 64LL))(this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)BaseRustGlobals;
}
