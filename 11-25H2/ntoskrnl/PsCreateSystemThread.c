/*
 * XREFs of PsCreateSystemThread @ 0x140A17730
 * Callers:
 *     CcInitializePrivateVolumeCacheMap @ 0x1403A84A0 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x14048DAE0 (CcInitializeAsyncReadForNodeHelper.c)
 *     PopCreatePowerThread @ 0x140497308 (PopCreatePowerThread.c)
 *     EtwpStartLoggerThread @ 0x1404A7B5C (EtwpStartLoggerThread.c)
 *     DisplayBootBitmap @ 0x14053747C (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x140579A18 (CcInitializePartition.c)
 *     KcsanInitSystem @ 0x1405AA910 (KcsanInitSystem.c)
 *     DifPsCreateSystemThreadWrapper @ 0x14062C920 (DifPsCreateSystemThreadWrapper.c)
 *     ExRegisterBootDevice @ 0x140649CF0 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x140B57F10 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140B81AD4 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140B8A410 (VfPoolInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140C08408 (FsRtlInitializeWorkerThread.c)
 *     KasanInitSystem @ 0x140C15600 (KasanInitSystem.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140C1D074 (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140C324E4 (ExpWorkerFactoryInitialization.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x140C4EBE4 (SeRmInitPhase1.c)
 *     PspInitPhase0 @ 0x140C563A8 (PspInitPhase0.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 */

NTSTATUS __stdcall PsCreateSystemThread(
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PKSTART_ROUTINE StartRoutine,
        PVOID StartContext)
{
  return PsCreateSystemThreadEx(
           ThreadHandle,
           DesiredAccess,
           ObjectAttributes,
           ProcessHandle,
           ClientId,
           StartRoutine,
           StartContext,
           0LL,
           0LL);
}
