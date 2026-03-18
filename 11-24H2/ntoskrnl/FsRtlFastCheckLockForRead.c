/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x1403DB8B0
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x1403DB820 (FsRtlCheckLockForReadAccess.c)
 * Callees:
 *     FsRtlCheckNoExclusiveConflict @ 0x1402479FC (FsRtlCheckNoExclusiveConflict.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
