/*
 * XREFs of IvtLegacyConfigureAts @ 0x14056D380
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IvtLegacyAllocateTranslationStructures @ 0x14056CF38 (IvtLegacyAllocateTranslationStructures.c)
 *     IvtLegacyUpdateScalableModeContextEntry @ 0x14056E2C8 (IvtLegacyUpdateScalableModeContextEntry.c)
 */

__int64 __fastcall IvtLegacyConfigureAts(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int v5; // r14d
  __int64 result; // rax
  unsigned int v8; // edi
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = -(a3 != 0);
  result = IvtLegacyAllocateTranslationStructures(a1, a2, 0LL, a4, v11, 0LL);
  v8 = result;
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    IvtLegacyUpdateScalableModeContextEntry(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), v5 + 2, 0, v12);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v10);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return v8;
  }
  return result;
}
