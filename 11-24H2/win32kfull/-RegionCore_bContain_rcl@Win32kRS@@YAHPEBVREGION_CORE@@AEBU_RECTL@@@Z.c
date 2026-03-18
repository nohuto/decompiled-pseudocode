/*
 * XREFs of ?RegionCore_bContain_rcl@Win32kRS@@YAHPEBVREGION_CORE@@AEBU_RECTL@@@Z @ 0x1400A42B8
 * Callers:
 *     ?bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z @ 0x1400A4ED8 (-bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3E80 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_bContain_rcl(
        Win32kRS *this,
        const struct REGION_CORE *a2,
        const struct _RECTL *a3)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rdi
  struct W32_PUSH_LOCK *v6; // rbx

  BaseRustGlobals = GetBaseRustGlobals();
  v6 = (const struct BaseRustGlobals *)((char *)BaseRustGlobals + 8);
  W32AcquirePushLockSharedEx((const struct BaseRustGlobals *)((char *)BaseRustGlobals + 8), 2u);
  LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(Win32kRS *, const struct REGION_CORE *))(*(_QWORD *)BaseRustGlobals
                                                                                               + 48LL))(
                               this,
                               a2);
  W32ReleasePushLockSharedEx(v6, 2LL);
  return (unsigned int)BaseRustGlobals;
}
