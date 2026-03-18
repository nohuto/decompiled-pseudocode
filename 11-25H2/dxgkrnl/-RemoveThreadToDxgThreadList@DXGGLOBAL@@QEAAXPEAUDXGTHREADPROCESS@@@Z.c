/*
 * XREFs of ?RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z @ 0x140072E8C
 * Callers:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x14003BEC4 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1401D0BF4 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1401D1B70 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::RemoveThreadToDxgThreadList(KSPIN_LOCK *this, struct DXGTHREADPROCESS ***a2)
{
  struct DXGTHREADPROCESS **v3; // rcx
  struct DXGTHREADPROCESS **v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 215, &LockHandle);
  v3 = *a2;
  if ( (*a2)[1] != (struct DXGTHREADPROCESS *)a2 || (v4 = a2[1], *v4 != (struct DXGTHREADPROCESS *)a2) )
    __fastfail(3u);
  *v4 = (struct DXGTHREADPROCESS *)v3;
  v3[1] = (struct DXGTHREADPROCESS *)v4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
