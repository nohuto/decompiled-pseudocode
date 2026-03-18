/*
 * XREFs of IvtLegacySetDevicePasidTable @ 0x14056D860
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     IvtLegacyUpdateScalableModeContextEntry @ 0x14056DB38 (IvtLegacyUpdateScalableModeContextEntry.c)
 */

__int64 __fastcall IvtLegacySetDevicePasidTable(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdi
  int v6; // esi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  int v9; // [rsp+28h] [rbp-40h]
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
  IvtLegacyUpdateScalableModeContextEntry(a1, *(_QWORD *)(a2 + 56), v5, 0, v6, v9);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
