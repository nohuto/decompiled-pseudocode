/*
 * XREFs of GreReleaseEUDCPushLockExclusive2 @ 0x1401525F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepGetGlobalPushLock@$0A@@@YAPEAVW32_PUSH_LOCK@@XZ @ 0x140152610 (--$GrepGetGlobalPushLock@$0A@@@YAPEAVW32_PUSH_LOCK@@XZ.c)
 *     ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x140152638 (--$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 */

__int64 GreReleaseEUDCPushLockExclusive2()
{
  __int64 GlobalPush; // rax
  __int64 v1; // rcx

  GlobalPush = GrepGetGlobalPushLock<0>();
  return GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v1, GlobalPush);
}
