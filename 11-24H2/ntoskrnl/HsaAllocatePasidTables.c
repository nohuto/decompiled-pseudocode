/*
 * XREFs of HsaAllocatePasidTables @ 0x14056F6EC
 * Callers:
 *     HsaGrowPasidTable @ 0x140570750 (HsaGrowPasidTable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExtEnvAllocateMemory @ 0x14055D660 (ExtEnvAllocateMemory.c)
 *     HsaFreePasidTables @ 0x14057012C (HsaFreePasidTables.c)
 */

__int64 __fastcall HsaAllocatePasidTables(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, int a6, _QWORD *a7)
{
  __int64 v11; // rbx
  int Memory; // esi
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  KIRQL v19; // al
  unsigned __int64 v20; // rcx
  unsigned int v21; // ebp
  unsigned int v22; // r14d
  __int64 v23; // r13
  PVOID v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  KIRQL NewIrql; // [rsp+98h] [rbp+20h]

  BaseAddress = 0LL;
  v25 = 0LL;
  v11 = 0LL;
  Memory = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a7 = 0LL;
  if ( a4 >= 0x40000 )
    return 3221225659LL;
  if ( !*(_QWORD *)(a2 + 48) )
  {
    result = ExtEnvAllocateMemory(a1, 0x38u, &v25);
    if ( (int)result < 0 )
      return result;
    v11 = v25;
    Memory = ExtEnvAllocateMemory(v14, 0x2000u, (_QWORD *)(v25 + 48));
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
      v17 = (_QWORD *)(a1 + 240);
      *(_QWORD *)(a2 + 48) = v11;
      v18 = *(_QWORD *)(a1 + 240);
      if ( *(_QWORD *)(v18 + 8) != a1 + 240 )
        __fastfail(3u);
      *(_QWORD *)v11 = v18;
      *(_QWORD *)(v11 + 8) = v17;
      *(_QWORD *)(v18 + 8) = v11;
      *v17 = v11;
      v11 = 0LL;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v16);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a2 + 48) + 16LL));
  v20 = *(_QWORD *)(a2 + 48);
  v21 = 0;
  NewIrql = v19;
  v22 = a4 >> 9;
  v23 = *(_QWORD *)(v20 + 48);
  do
  {
    if ( (*(_BYTE *)(v23 + 8LL * v21) & 1) == 0 )
    {
      Memory = ExtEnvAllocateMemory(v20, 0x1000u, &BaseAddress);
      if ( Memory < 0 )
        break;
      v24 = BaseAddress;
      *(_QWORD *)(v23 + 8LL * v21 + 4096) = BaseAddress;
      v20 = MmGetPhysicalAddress(v24).QuadPart & 0xFFFFFFFFFF000LL ^ (*(_QWORD *)(v23 + 8LL * v21) & 0xFFF0000000000FFEuLL | 1);
      *(_QWORD *)(v23 + 8LL * v21) = v20;
    }
    ++v21;
  }
  while ( v21 <= v22 );
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a2 + 48) + 16LL), NewIrql);
LABEL_20:
  *a7 = *(_QWORD *)(a2 + 48);
  if ( v11 )
    HsaFreePasidTables(a1, v11);
  return (unsigned int)Memory;
}
