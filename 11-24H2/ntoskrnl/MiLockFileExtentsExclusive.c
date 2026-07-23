/*
 * XREFs of MiLockFileExtentsExclusive @ 0x1407F0BD8
 * Callers:
 *     MiInsertCopyExtents @ 0x14067C4D0 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14067C8D4 (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x1407F08AC (MiDeleteFileExtentList.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *MiLockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = (char *)KeAbPreAcquire((__int64)&qword_140E2D8D8, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D8D8, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&qword_140E2D8D8, result, (__int64)&qword_140E2D8D8);
  if ( v2 )
    v2[10] = 1;
  return result;
}
