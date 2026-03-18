/*
 * XREFs of PnpProcessDependencyRelations @ 0x140A1123C
 * Callers:
 *     PnpProcessRelation @ 0x140A0C664 (PnpProcessRelation.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PipIsDevNodeDNStarted @ 0x1404E6B60 (PipIsDevNodeDNStarted.c)
 *     PiEnumerateDependentListEntry @ 0x1406F996C (PiEnumerateDependentListEntry.c)
 *     PnpProcessRelation @ 0x140A0C664 (PnpProcessRelation.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140A0F814 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetDependentList @ 0x140A0FEBC (PiGetDependentList.c)
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
