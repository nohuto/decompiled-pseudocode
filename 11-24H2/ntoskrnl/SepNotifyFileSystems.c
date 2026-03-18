/*
 * XREFs of SepNotifyFileSystems @ 0x1407939A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepNotifyFileSystems(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *i; // rbx
  _QWORD *j; // rbx
  void *v8; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  for ( i = SeFileSystemNotifyRoutinesHead; i; i = (_QWORD *)*i )
    guard_dispatch_icall_no_overrides(P + 4, v3, v4, v5);
  for ( j = SeFileSystemNotifyRoutinesExHead; j; j = (_QWORD *)*j )
    guard_dispatch_icall_no_overrides(P + 4, P[5], j[2], v5);
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegion();
  v8 = (void *)P[5];
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x53466553u);
  ExFreePoolWithTag(P, 0);
}
