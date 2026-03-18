/*
 * XREFs of FsRtlFastCheckLockForWrite @ 0x14024C900
 * Callers:
 *     FsRtlCheckLockForWriteAccess @ 0x1403DB780 (FsRtlCheckLockForWriteAccess.c)
 * Callees:
 *     FsRtlCheckNoExclusiveConflict @ 0x1402479FC (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x14024B1C0 (FsRtlCheckNoSharedConflict.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForWrite(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PVOID FileObject,
        PVOID ProcessId)
{
  _QWORD *LockInformation; // rbx
  LONGLONG QuadPart; // rax
  _RTL_SPLAY_LINKS *v9; // rbp
  KSPIN_LOCK *v10; // rdi
  _RTL_SPLAY_LINKS *v11; // r14
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  _RTL_SPLAY_LINKS *v15; // r13
  _RTL_SPLAY_LINKS *v16; // r15
  __int64 v17; // rax
  BOOLEAN v18; // bl
  BOOLEAN v19; // al
  _RTL_SPLAY_LINKS *v20[2]; // [rsp+30h] [rbp-38h] BYREF
  _RTL_SPLAY_LINKS *v21; // [rsp+70h] [rbp+8h] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation || !LockInformation[4] && !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v9 = (_RTL_SPLAY_LINKS *)StartingByte->QuadPart;
  v10 = LockInformation + 3;
  v20[0] = v9;
  v11 = (_RTL_SPLAY_LINKS *)((char *)v9 + QuadPart - 1);
  v21 = v11;
  v12 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( (unsigned __int64)v11 < *LockInformation )
  {
    KxReleaseSpinLock(LockInformation + 3);
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = v12;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
    }
    __writecr8(v12);
    return 1;
  }
  v15 = (_RTL_SPLAY_LINKS *)FileObject;
  v16 = (_RTL_SPLAY_LINKS *)ProcessId;
  v17 = *((_QWORD *)FileObject + 15);
  if ( v17
    && (unsigned __int64)v9 >= *(_QWORD *)v17
    && (unsigned __int64)v11 <= *(_QWORD *)(v17 + 40)
    && *(_DWORD *)(v17 + 20) == Key
    && *(PVOID *)(v17 + 32) == ProcessId
    && *(_BYTE *)(v17 + 16) )
  {
    v18 = 1;
  }
  else
  {
    v19 = FsRtlCheckNoSharedConflict((__int64)(LockInformation + 3), v20, &v21);
    if ( v19 == 1 )
      v19 = FsRtlCheckNoExclusiveConflict((__int64)v10, v20, &v21, Key, v15, v16);
    v18 = v19;
  }
  KeReleaseSpinLock(v10, v12);
  return v18;
}
