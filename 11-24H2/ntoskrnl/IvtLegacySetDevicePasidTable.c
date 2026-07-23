/*
 * XREFs of IvtLegacySetDevicePasidTable @ 0x14056DFF0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IvtLegacyUpdateScalableModeContextEntry @ 0x14056E2C8 (IvtLegacyUpdateScalableModeContextEntry.c)
 */

__int64 __fastcall IvtLegacySetDevicePasidTable(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdi
  int v6; // esi
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // rdx
  __int64 result; // rax
  int v10; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    LODWORD(v5) = 0;
    v6 = 4;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 64);
    v6 = *(_DWORD *)(v5 + 48);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  IvtLegacyUpdateScalableModeContextEntry(a1, *(_QWORD *)(a2 + 56), v5, 0, v6, v10);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v8);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
