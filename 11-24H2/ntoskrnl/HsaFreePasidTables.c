/*
 * XREFs of HsaFreePasidTables @ 0x140572C9C
 * Callers:
 *     HsaAllocatePasidTables @ 0x14057225C (HsaAllocatePasidTables.c)
 *     HsaDeleteDevice @ 0x1405728F0 (HsaDeleteDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExtEnvFreeMemory @ 0x14055FCA0 (ExtEnvFreeMemory.c)
 */

void __fastcall HsaFreePasidTables(__int64 a1, KSPIN_LOCK *a2)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // edi
  __int64 v6; // rdx
  KSPIN_LOCK v7; // rcx
  KSPIN_LOCK **v8; // rax
  KIRQL v9; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  KIRQL v12; // r15
  unsigned __int64 *v13; // rsi
  __int64 v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v5 = 0;
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 152), &LockHandle);
  v7 = *a2;
  if ( *(KSPIN_LOCK **)(*a2 + 8) != a2 || (v8 = (KSPIN_LOCK **)a2[1], *v8 != a2) )
    __fastfail(3u);
  *v8 = (KSPIN_LOCK *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v6);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v9 = KeAcquireSpinLockRaiseToDpc(a2 + 2);
  v11 = a2[6];
  v12 = v9;
  if ( v11 )
  {
    v13 = (unsigned __int64 *)(v11 + 4096);
    do
    {
      if ( (*(_BYTE *)(v13 - 512) & 1) == 0 )
        break;
      ExtEnvFreeMemory(v10, *v13);
      ++v5;
      ++v13;
    }
    while ( v5 < 0x200 );
    ExtEnvFreeMemory(v10, v11);
  }
  KeReleaseSpinLock(a2 + 2, v12);
  ExtEnvFreeMemory(v14, (unsigned __int64)a2);
}
