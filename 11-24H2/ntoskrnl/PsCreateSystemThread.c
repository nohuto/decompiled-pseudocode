/*
 * XREFs of PsCreateSystemThread @ 0x140A22450
 * Callers:
 *     CcInitializePrivateVolumeCacheMap @ 0x1402CA884 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x14048D520 (CcInitializeAsyncReadForNodeHelper.c)
 *     PopCreatePowerThread @ 0x140496E48 (PopCreatePowerThread.c)
 *     EtwpStartLoggerThread @ 0x1404A8A40 (EtwpStartLoggerThread.c)
 *     DisplayBootBitmap @ 0x140539C2C (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x14057CD28 (CcInitializePartition.c)
 *     KcsanInitSystem @ 0x1405AE2A0 (KcsanInitSystem.c)
 *     DifPsCreateSystemThreadWrapper @ 0x1406388E0 (DifPsCreateSystemThreadWrapper.c)
 *     ExRegisterBootDevice @ 0x140655BF0 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x140B67D40 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140B91AB4 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140B9A3F0 (VfPoolInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140C194A8 (FsRtlInitializeWorkerThread.c)
 *     KasanInitSystem @ 0x140C26690 (KasanInitSystem.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140C2E174 (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140C436D8 (ExpWorkerFactoryInitialization.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x140C6024C (SeRmInitPhase1.c)
 *     PspInitPhase0 @ 0x140C65530 (PspInitPhase0.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
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
