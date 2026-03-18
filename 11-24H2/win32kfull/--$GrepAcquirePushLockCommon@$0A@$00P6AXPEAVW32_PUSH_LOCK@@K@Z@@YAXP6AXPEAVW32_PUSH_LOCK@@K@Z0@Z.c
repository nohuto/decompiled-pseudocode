/*
 * XREFs of ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1401525C4
 * Callers:
 *     GreRemoveDisplayDriverRealizations @ 0x140132334 (GreRemoveDisplayDriverRealizations.c)
 *     GreAcquireEUDCPushLockExclusive2 @ 0x140152420 (GreAcquireEUDCPushLockExclusive2.c)
 *     GreEnableEUDC @ 0x140152440 (GreEnableEUDC.c)
 *     ??0?$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140269890 (--0-$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??$GrepAcquireLockValidate@$0A@@@YAXXZ @ 0x140152F28 (--$GrepAcquireLockValidate@$0A@@@YAXXZ.c)
 */

void __fastcall GrepAcquirePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(
        __int64 a1,
        struct W32_PUSH_LOCK *a2)
{
  GrepAcquireLockValidate<0>();
  W32AcquirePushLockExclusiveEx(a2, 0);
}
