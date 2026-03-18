/*
 * XREFs of ?RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400A360C
 * Callers:
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A345C (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3E80 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

struct SCAN *__fastcall Win32kRS::RegionCore_get_pscnTail_mut(Win32kRS *this, struct REGION_CORE *a2)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rdi
  struct W32_PUSH_LOCK *v4; // rbx
  __int64 v5; // rdi

  BaseRustGlobals = GetBaseRustGlobals();
  v4 = (const struct BaseRustGlobals *)((char *)BaseRustGlobals + 8);
  W32AcquirePushLockSharedEx((const struct BaseRustGlobals *)((char *)BaseRustGlobals + 8), 2u);
  v5 = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)BaseRustGlobals + 264LL))(this);
  W32ReleasePushLockSharedEx(v4, 2u);
  return (struct SCAN *)v5;
}
