/*
 * XREFs of PsTerminateSystemThread @ 0x1409D16F0
 * Callers:
 *     PopIrpWorker @ 0x1404E3650 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x14058C7A0 (InbvRotateGuiBootDisplay.c)
 *     DifPsTerminateSystemThreadWrapper @ 0x140637650 (DifPsTerminateSystemThreadWrapper.c)
 *     ExpExpirationThread @ 0x1407B6540 (ExpExpirationThread.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5F40 (CmpHiveCachePopulateHiveEntryThread.c)
 *     IopThreadStart @ 0x1409D1690 (IopThreadStart.c)
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x1408FDF10 (PspTerminateThreadByPointer.c)
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
