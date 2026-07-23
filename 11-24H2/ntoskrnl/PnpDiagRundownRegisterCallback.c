/*
 * XREFs of PnpDiagRundownRegisterCallback @ 0x140A38EF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140A39170 (PipForDeviceNodeSubtree.c)
 */

void __fastcall PnpDiagRundownRegisterCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rax

  if ( ControlCode == 2 )
  {
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ConnectionResource) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
      PipForDeviceNodeSubtree(IopRootDeviceNode, PnpDiagRundownConnectionResourceForEachDevice, 0LL);
      ExReleaseResourceLite(&IopDeviceTreeLock);
      KeLeaveCriticalRegion();
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ParentPdo) )
    {
      v6 = KeGetCurrentThread();
      --v6->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
      PipForDeviceNodeSubtree(IopRootDeviceNode, PnpDiagRundownParentPdoForEachDevice, 0LL);
      ExReleaseResourceLite(&IopDeviceTreeLock);
      KeLeaveCriticalRegion();
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN) )
    {
      v4 = KeGetCurrentThread();
      --v4->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
      PipForDeviceNodeSubtree(IopRootDeviceNode, PnpDiagRundownParentDevNodeForEachDevice, 0LL);
      ExReleaseResourceLite(&IopDeviceTreeLock);
      KeLeaveCriticalRegion();
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_InterruptResource) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree(IopRootDeviceNode, PnpDiagRundownInterruptResourceForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
  }
}
