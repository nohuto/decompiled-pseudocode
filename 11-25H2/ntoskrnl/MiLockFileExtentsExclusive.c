/*
 * XREFs of MiLockFileExtentsExclusive @ 0x1407E0768
 * Callers:
 *     MiInsertCopyExtents @ 0x14066FB30 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14066FF34 (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x1407E043C (MiDeleteFileExtentList.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *MiLockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = KeAbPreAcquire((__int64)&qword_140E2D558, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D558, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&qword_140E2D558, result, (__int64)&qword_140E2D558);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
