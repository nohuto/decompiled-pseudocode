/*
 * XREFs of MiLockFileExtentsExclusive @ 0x1407F0608
 * Callers:
 *     MiInsertCopyExtents @ 0x14067B2F0 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14067B6F4 (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x1407F02DC (MiDeleteFileExtentList.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 MiLockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&qword_140E2D798, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D798, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140E2D798, result, (__int64)&qword_140E2D798);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
