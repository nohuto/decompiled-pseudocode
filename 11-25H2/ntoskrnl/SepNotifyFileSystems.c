/*
 * XREFs of SepNotifyFileSystems @ 0x1407845D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepNotifyFileSystems(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // rbx
  _QWORD *j; // rbx
  void *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  for ( i = SeFileSystemNotifyRoutinesHead; i; i = (_QWORD *)*i )
    guard_dispatch_icall_no_overrides(P + 4);
  for ( j = SeFileSystemNotifyRoutinesExHead; j; j = (_QWORD *)*j )
    guard_dispatch_icall_no_overrides(P + 4);
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegion();
  v5 = (void *)P[5];
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x53466553u);
  ExFreePoolWithTag(P, 0);
}
