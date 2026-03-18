/*
 * XREFs of ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B4A4
 * Callers:
 *     bDeleteAllFlEntry @ 0x1400FE098 (bDeleteAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x14015212C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     GreEnableEUDC @ 0x140152440 (GreEnableEUDC.c)
 *     bAddAllFlEntry @ 0x140152750 (bAddAllFlEntry.c)
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1402595F8 (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     GreEudcLoadLinkW @ 0x14030C258 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x14030C520 (GreEudcUnloadLinkW.c)
 *     NtGdiGetEudcTimeStampEx @ 0x14030D520 (NtGdiGetEudcTimeStampEx.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BA@@@YAXXZ @ 0x14002BBF0 (--$GrepAcquireLockValidate@$0BA@@@YAXXZ.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall GreAcquirePushLockExclusive2<16,1>(__int64 a1)
{
  GrepAcquireLockValidate<16>();
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8608), 0);
}
