/*
 * XREFs of PsCreateSystemThread @ 0x1408F8C00
 * Callers:
 *     CcInitializePrivateVolumeCacheMap @ 0x1404300DC (CcInitializePrivateVolumeCacheMap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x140487DA0 (CcInitializeAsyncReadForNodeHelper.c)
 *     PopCreatePowerThread @ 0x1404917D8 (PopCreatePowerThread.c)
 *     EtwpStartLoggerThread @ 0x1404A2E5C (EtwpStartLoggerThread.c)
 *     DisplayBootBitmap @ 0x14053746C (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x14057A1B8 (CcInitializePartition.c)
 *     KcsanInitSystem @ 0x1405AB210 (KcsanInitSystem.c)
 *     DifPsCreateSystemThreadWrapper @ 0x140636EA0 (DifPsCreateSystemThreadWrapper.c)
 *     ExRegisterBootDevice @ 0x1406542F0 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x140B69E80 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140B93AB4 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140B9C3F0 (VfPoolInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140C1B49C (FsRtlInitializeWorkerThread.c)
 *     KasanInitSystem @ 0x140C286E0 (KasanInitSystem.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140C30294 (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140C45D44 (ExpWorkerFactoryInitialization.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x140C6239C (SeRmInitPhase1.c)
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
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
