/*
 * XREFs of SepNotifyFileSystems @ 0x140793A40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepNotifyFileSystems(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *i; // rbx
  _QWORD *j; // rbx
  void *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  for ( i = SeFileSystemNotifyRoutinesHead; i; i = (_QWORD *)*i )
    guard_dispatch_icall_no_overrides(P + 4, v3);
  for ( j = SeFileSystemNotifyRoutinesExHead; j; j = (_QWORD *)*j )
    guard_dispatch_icall_no_overrides(P + 4, P[5]);
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegion();
  v6 = (void *)P[5];
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x53466553u);
  ExFreePoolWithTag(P, 0);
}
