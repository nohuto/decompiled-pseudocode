/*
 * XREFs of ?RegionCore_subtract@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_RECTL@@1_K@Z @ 0x1400A3930
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CF118 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_subtract(
        Win32kRS *this,
        struct REGION_CORE *a2,
        const struct _RECTL *a3,
        const struct _RECTL *a4)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rdi
  char *v9; // rbx
  __int64 v10; // rsi

  BaseRustGlobals = GetBaseRustGlobals();
  v9 = (char *)BaseRustGlobals + 8;
  W32AcquirePushLockSharedEx((const struct BaseRustGlobals *)((char *)BaseRustGlobals + 8), 2u);
  v10 = *(_QWORD *)BaseRustGlobals;
  LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, const struct _RECTL *, const struct _RECTL *))(*(_QWORD *)BaseRustGlobals + 208LL))(
                               this,
                               a2,
                               a3,
                               a4);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v10 + 48), this);
  ExReleasePushLockSharedEx(v9, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)BaseRustGlobals;
}
