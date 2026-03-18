/*
 * XREFs of HsaAllocatePasidTables @ 0x14056EF5C
 * Callers:
 *     HsaGrowPasidTable @ 0x14056FFC0 (HsaGrowPasidTable.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExtEnvAllocateMemory @ 0x14055D130 (ExtEnvAllocateMemory.c)
 *     HsaFreePasidTables @ 0x14056F99C (HsaFreePasidTables.c)
 */

__int64 __fastcall HsaAllocatePasidTables(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, int a6, _QWORD *a7)
{
  __int64 v11; // rbx
  int Memory; // esi
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v16; // rax
  __int64 v17; // rcx
  KIRQL v18; // al
  unsigned __int64 v19; // rcx
  unsigned int v20; // ebp
  unsigned int v21; // r14d
  __int64 v22; // r13
  PVOID v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  KIRQL NewIrql; // [rsp+98h] [rbp+20h]

  BaseAddress = 0LL;
  v24 = 0LL;
  v11 = 0LL;
  Memory = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a7 = 0LL;
  if ( a4 >= 0x40000 )
    return 3221225659LL;
  if ( !*(_QWORD *)(a2 + 48) )
  {
    result = ExtEnvAllocateMemory(a1, 0x38u, &v24);
    if ( (int)result < 0 )
      return result;
    v11 = v24;
    Memory = ExtEnvAllocateMemory(v14, 0x2000u, (_QWORD *)(v24 + 48));
    if ( Memory < 0 )
      goto LABEL_20;
    *(_QWORD *)(v11 + 8) = v11;
    *(_QWORD *)v11 = v11;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_DWORD *)(v11 + 32) = a3;
    *(_DWORD *)(v11 + 36) = a5;
    *(_DWORD *)(v11 + 40) = a6;
    *(_QWORD *)(v11 + 24) = a2;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 152), &LockHandle);
    if ( !*(_QWORD *)(a2 + 48) )
    {
      v16 = (_QWORD *)(a1 + 240);
      *(_QWORD *)(a2 + 48) = v11;
      v17 = *(_QWORD *)(a1 + 240);
      if ( *(_QWORD *)(v17 + 8) != a1 + 240 )
        __fastfail(3u);
      *(_QWORD *)v11 = v17;
      *(_QWORD *)(v11 + 8) = v16;
      *(_QWORD *)(v17 + 8) = v11;
      *v16 = v11;
      v11 = 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a2 + 48) + 16LL));
  v19 = *(_QWORD *)(a2 + 48);
  v20 = 0;
  NewIrql = v18;
  v21 = a4 >> 9;
  v22 = *(_QWORD *)(v19 + 48);
  do
  {
    if ( (*(_BYTE *)(v22 + 8LL * v20) & 1) == 0 )
    {
      Memory = ExtEnvAllocateMemory(v19, 0x1000u, &BaseAddress);
      if ( Memory < 0 )
        break;
      v23 = BaseAddress;
      *(_QWORD *)(v22 + 8LL * v20 + 4096) = BaseAddress;
      v19 = MmGetPhysicalAddress(v23).QuadPart & 0xFFFFFFFFFF000LL ^ (*(_QWORD *)(v22 + 8LL * v20) & 0xFFF0000000000FFEuLL | 1);
      *(_QWORD *)(v22 + 8LL * v20) = v19;
    }
    ++v20;
  }
  while ( v20 <= v21 );
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a2 + 48) + 16LL), NewIrql);
LABEL_20:
  *a7 = *(_QWORD *)(a2 + 48);
  if ( v11 )
    HsaFreePasidTables(a1, v11);
  return (unsigned int)Memory;
}
