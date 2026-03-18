/*
 * XREFs of IvtDrainSvmPageRequests @ 0x14056E130
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     IvtIommuWaitCommand @ 0x1403BB7F4 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1403BB944 (IvtIommuSendCommand.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall IvtDrainSvmPageRequests(__int64 a1, unsigned __int16 a2, char a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-18h] BYREF

  v10[1] = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags != LockHandle.OldIrql )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  IvtIommuWaitCommand(a1, 0, 1);
  v10[0] = 18LL;
  IvtIommuSendCommand(a1, v10, 1LL);
  v11[1] = 0x7FFFFFFFFFFFF801LL;
  v11[0] = (16 * (a3 & 0x1F | ((unsigned __int64)a2 << 12))) | 8;
  IvtIommuSendCommand(a1, v11, 1LL);
  IvtIommuWaitCommand(a1, 0, 1);
  IvtIommuSendCommand(a1, v10, 1LL);
  IvtIommuSendCommand(a1, v11, 1LL);
  IvtIommuWaitCommand(a1, 1, 1);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v7);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
