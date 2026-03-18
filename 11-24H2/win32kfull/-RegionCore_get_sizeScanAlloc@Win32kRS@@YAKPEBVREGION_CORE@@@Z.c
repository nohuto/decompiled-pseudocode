/*
 * XREFs of ?RegionCore_get_sizeScanAlloc@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x1401FEEEC
 * Callers:
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CFC34 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3E80 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_get_sizeScanAlloc(Win32kRS *this, const struct REGION_CORE *a2)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rdi
  struct W32_PUSH_LOCK *v4; // rbx

  BaseRustGlobals = GetBaseRustGlobals();
  v4 = (const struct BaseRustGlobals *)((char *)BaseRustGlobals + 8);
  W32AcquirePushLockSharedEx((const struct BaseRustGlobals *)((char *)BaseRustGlobals + 8), 2u);
  LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)BaseRustGlobals + 224LL))(this);
  W32ReleasePushLockSharedEx(v4, 2LL);
  return (unsigned int)BaseRustGlobals;
}
