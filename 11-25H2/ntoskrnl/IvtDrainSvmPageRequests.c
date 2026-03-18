/*
 * XREFs of IvtDrainSvmPageRequests @ 0x14056AE30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     IvtIommuWaitCommand @ 0x140447284 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1404473D4 (IvtIommuSendCommand.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall IvtDrainSvmPageRequests(__int64 a1, unsigned __int16 a2, char a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v10[2]; // [rsp+48h] [rbp-18h] BYREF

  v9[1] = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags != LockHandle.OldIrql )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  IvtIommuWaitCommand(a1, 0, 1);
  v9[0] = 18LL;
  IvtIommuSendCommand(a1, (unsigned __int64)v9, 1);
  v10[1] = 0x7FFFFFFFFFFFF801LL;
  v10[0] = (16 * (a3 & 0x1F | ((unsigned __int64)a2 << 12))) | 8;
  IvtIommuSendCommand(a1, (unsigned __int64)v10, 1);
  IvtIommuWaitCommand(a1, 0, 1);
  IvtIommuSendCommand(a1, (unsigned __int64)v9, 1);
  IvtIommuSendCommand(a1, (unsigned __int64)v10, 1);
  IvtIommuWaitCommand(a1, 1, 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
