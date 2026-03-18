/*
 * XREFs of PnpProcessDependencyRelations @ 0x14082F9A8
 * Callers:
 *     PnpProcessRelation @ 0x14082E994 (PnpProcessRelation.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     PipIsDevNodeDNStarted @ 0x1404E6CD4 (PipIsDevNodeDNStarted.c)
 *     PiEnumerateDependentListEntry @ 0x1406EDC90 (PiEnumerateDependentListEntry.c)
 *     PnpProcessRelation @ 0x14082E994 (PnpProcessRelation.c)
 *     PiGetDependentList @ 0x140830B54 (PiGetDependentList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140832A80 (PnpReleaseDependencyRelationsLock.c)
 */

__int64 __fastcall PnpProcessDependencyRelations(__int64 a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD **DependentList; // r14
  _QWORD *i; // rdi

  v1 = *(_QWORD *)(a1 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  DependentList = (_QWORD **)PiGetDependentList(v1);
  for ( i = *DependentList; i != DependentList; i = (_QWORD *)*i )
    PiEnumerateDependentListEntry((__int64)i);
  PnpReleaseDependencyRelationsLock(v4, v3, v5);
  return 0LL;
}
