/*
 * XREFs of PnpProcessDependencyRelations @ 0x1409BF64C
 * Callers:
 *     PnpProcessRelation @ 0x140A54854 (PnpProcessRelation.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PipIsDevNodeDNStarted @ 0x1404DD25C (PipIsDevNodeDNStarted.c)
 *     PiEnumerateDependentListEntry @ 0x1406F75AC (PiEnumerateDependentListEntry.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetDependentList @ 0x1409BE2CC (PiGetDependentList.c)
 *     PnpProcessRelation @ 0x140A54854 (PnpProcessRelation.c)
 */

__int64 __fastcall PnpProcessDependencyRelations(__int64 a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *DependentList; // rsi
  __int64 *i; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  DependentList = PiGetDependentList(v1);
  for ( i = (__int64 *)*DependentList; i != DependentList; i = (__int64 *)*i )
    PiEnumerateDependentListEntry((__int64)i);
  PnpReleaseDependencyRelationsLock();
  return 0LL;
}
