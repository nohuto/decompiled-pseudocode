/*
 * XREFs of IvtFreeScalableModePasidTables @ 0x14056E600
 * Callers:
 *     IvtAllocateScalableModePasidTables @ 0x14056D55C (IvtAllocateScalableModePasidTables.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056DA10 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x14056DE70 (IvtConfigureAts.c)
 *     IvtLegacyAllocateScalableModePasidTables @ 0x14056F7A0 (IvtLegacyAllocateScalableModePasidTables.c)
 *     IvtLegacyGrowPasidTable @ 0x140570920 (IvtLegacyGrowPasidTable.c)
 *     IvtSetDevicePasidTable @ 0x140571150 (IvtSetDevicePasidTable.c)
 *     IvtDeleteDevice @ 0x140578BE0 (IvtDeleteDevice.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExtEnvFreeMemory @ 0x14055FCA0 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14055FCE0 (ExtEnvFreePhysicalMemory.c)
 */

void __fastcall IvtFreeScalableModePasidTables(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  void **v10; // rdi
  __int64 v11; // rsi
  void *v12; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  v5 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2
    || (v6 = *(_QWORD **)(a2 + 8), *v6 != a2)
    || (*v6 = v5, *(_QWORD *)(v5 + 8) = v6, v7 = *(_QWORD *)(a2 + 16), *(_QWORD *)(v7 + 8) != a2 + 16)
    || (v8 = *(__int64 **)(a2 + 24), *v8 != a2 + 16) )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v7);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( ((*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF) != 0 )
  {
    v10 = (void **)(a2 + 64);
    v11 = (*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF;
    do
    {
      if ( *v10 )
        ExtEnvFreePhysicalMemory(v9, *v10, 0x1000u, *(_DWORD *)(a1 + 272));
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  v12 = *(void **)(a2 + 56);
  if ( v12 )
    ExtEnvFreePhysicalMemory(
      v9,
      v12,
      (8 * ((*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF) + 4095) & 0xFFFFF000,
      *(_DWORD *)(a1 + 272));
  ExtEnvFreeMemory(v9, a2);
}
