/*
 * XREFs of IvtLegacyConfigureAts @ 0x14056CBF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     IvtLegacyAllocateTranslationStructures @ 0x14056C7A8 (IvtLegacyAllocateTranslationStructures.c)
 *     IvtLegacyUpdateScalableModeContextEntry @ 0x14056DB38 (IvtLegacyUpdateScalableModeContextEntry.c)
 */

__int64 __fastcall IvtLegacyConfigureAts(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int v5; // r14d
  __int64 result; // rax
  unsigned int v8; // edi
  unsigned __int8 CurrentIrql; // bl
  int v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = -(a3 != 0);
  result = IvtLegacyAllocateTranslationStructures(a1, a2, 0LL, a4, v10, 0LL);
  v8 = result;
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    IvtLegacyUpdateScalableModeContextEntry(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), v5 + 2, 0, v11);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return v8;
  }
  return result;
}
