/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x1403CCB80
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x1403CCAF0 (FsRtlCheckLockForReadAccess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1402E1DD0 (FsRtlCheckNoExclusiveConflict.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  _QWORD *LockInformation; // rbx
  unsigned __int64 QuadPart; // r15
  _RTL_SPLAY_LINKS *v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int64 *LastLock; // rax
  _RTL_SPLAY_LINKS *v13; // rcx
  char v14; // al
  KSPIN_LOCK *v15; // rcx
  BOOLEAN v16; // bl
  _RTL_SPLAY_LINKS *v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  _RTL_SPLAY_LINKS *v19; // [rsp+60h] [rbp+8h] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation || !LockInformation[5] || !Length->QuadPart )
    return 1;
  QuadPart = StartingByte->QuadPart;
  v10 = (_RTL_SPLAY_LINKS *)(StartingByte->QuadPart + Length->QuadPart - 1);
  v17 = (_RTL_SPLAY_LINKS *)StartingByte->QuadPart;
  v19 = v10;
  v11 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( (unsigned __int64)v10 < *LockInformation )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(LockInformation + 3, 0LL);
    else
      KiReleaseSpinLockInstrumented(LockInformation + 3, retaddr);
    goto LABEL_8;
  }
  LastLock = (unsigned __int64 *)FileObject->LastLock;
  if ( !LastLock || QuadPart < *LastLock || (unsigned __int64)v10 > LastLock[5] || *((_DWORD *)LastLock + 5) != Key )
  {
    v13 = (_RTL_SPLAY_LINKS *)ProcessId;
    goto LABEL_18;
  }
  v13 = (_RTL_SPLAY_LINKS *)ProcessId;
  if ( (PVOID)LastLock[4] != ProcessId )
  {
LABEL_18:
    v14 = FsRtlCheckNoExclusiveConflict(
            (__int64)(LockInformation + 3),
            &v17,
            &v19,
            Key,
            (_RTL_SPLAY_LINKS *)FileObject,
            v13);
    v15 = LockInformation + 3;
    v16 = v14;
    KeReleaseSpinLock(v15, v11);
    return v16;
  }
  KxReleaseSpinLock(LockInformation + 3);
LABEL_8:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
  __writecr8(v11);
  return 1;
}
