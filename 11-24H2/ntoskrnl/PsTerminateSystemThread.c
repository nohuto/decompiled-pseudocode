/*
 * XREFs of PsTerminateSystemThread @ 0x1409D8000
 * Callers:
 *     PopIrpWorker @ 0x1404EBF10 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x14058F780 (InbvRotateGuiBootDisplay.c)
 *     DifPsTerminateSystemThreadWrapper @ 0x140639090 (DifPsTerminateSystemThreadWrapper.c)
 *     ExpExpirationThread @ 0x1407B60F0 (ExpExpirationThread.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5970 (CmpHiveCachePopulateHiveEntryThread.c)
 *     IopThreadStart @ 0x1409D7FA0 (IopThreadStart.c)
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x1408A7CB0 (PspTerminateThreadByPointer.c)
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
