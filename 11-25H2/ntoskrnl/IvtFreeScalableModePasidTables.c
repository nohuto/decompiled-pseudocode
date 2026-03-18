/*
 * XREFs of IvtFreeScalableModePasidTables @ 0x14056B300
 * Callers:
 *     IvtAllocateScalableModePasidTables @ 0x14056A25C (IvtAllocateScalableModePasidTables.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056A710 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x14056AB70 (IvtConfigureAts.c)
 *     IvtLegacyAllocateScalableModePasidTables @ 0x14056C4A0 (IvtLegacyAllocateScalableModePasidTables.c)
 *     IvtLegacyGrowPasidTable @ 0x14056D620 (IvtLegacyGrowPasidTable.c)
 *     IvtSetDevicePasidTable @ 0x14056DE50 (IvtSetDevicePasidTable.c)
 *     IvtDeleteDevice @ 0x1405758E0 (IvtDeleteDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExtEnvFreeMemory @ 0x14055D3A0 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14055D3E0 (ExtEnvFreePhysicalMemory.c)
 */

void __fastcall IvtFreeScalableModePasidTables(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
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
    || (v8 = *(_QWORD **)(a2 + 24), *v8 != a2 + 16) )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
