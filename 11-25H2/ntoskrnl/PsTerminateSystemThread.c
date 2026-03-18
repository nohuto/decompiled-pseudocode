/*
 * XREFs of PsTerminateSystemThread @ 0x14098F390
 * Callers:
 *     PopIrpWorker @ 0x140356760 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x14058BFA0 (InbvRotateGuiBootDisplay.c)
 *     DifPsTerminateSystemThreadWrapper @ 0x14062D0D0 (DifPsTerminateSystemThreadWrapper.c)
 *     ExpExpirationThread @ 0x1407A6C50 (ExpExpirationThread.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407D5AF0 (CmpHiveCachePopulateHiveEntryThread.c)
 *     IopThreadStart @ 0x14098F330 (IopThreadStart.c)
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x1408F48F0 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    return PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, ExitStatus, 1);
  else
    return -1073741811;
}
