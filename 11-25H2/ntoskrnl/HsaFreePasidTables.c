/*
 * XREFs of HsaFreePasidTables @ 0x14056F99C
 * Callers:
 *     HsaAllocatePasidTables @ 0x14056EF5C (HsaAllocatePasidTables.c)
 *     HsaDeleteDevice @ 0x14056F5F0 (HsaDeleteDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExtEnvFreeMemory @ 0x14055D3A0 (ExtEnvFreeMemory.c)
 */

void __fastcall HsaFreePasidTables(__int64 a1, KSPIN_LOCK *a2)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // edi
  KSPIN_LOCK v6; // rcx
  KSPIN_LOCK **v7; // rax
  KIRQL v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  KIRQL v11; // r15
  unsigned __int64 *v12; // rsi
  __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v5 = 0;
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 152), &LockHandle);
  v6 = *a2;
  if ( *(KSPIN_LOCK **)(*a2 + 8) != a2 || (v7 = (KSPIN_LOCK **)a2[1], *v7 != a2) )
    __fastfail(3u);
  *v7 = (KSPIN_LOCK *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v8 = KeAcquireSpinLockRaiseToDpc(a2 + 2);
  v10 = a2[6];
  v11 = v8;
  if ( v10 )
  {
    v12 = (unsigned __int64 *)(v10 + 4096);
    do
    {
      if ( (*(_BYTE *)(v12 - 512) & 1) == 0 )
        break;
      ExtEnvFreeMemory(v9, *v12);
      ++v5;
      ++v12;
    }
    while ( v5 < 0x200 );
    ExtEnvFreeMemory(v9, v10);
  }
  KeReleaseSpinLock(a2 + 2, v11);
  ExtEnvFreeMemory(v13, (unsigned __int64)a2);
}
