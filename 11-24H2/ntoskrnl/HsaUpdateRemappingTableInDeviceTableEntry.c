/*
 * XREFs of HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405712EC
 * Callers:
 *     HsaAllocateRemappingTableEntry @ 0x14056F930 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x140570250 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HsaBuildInterruptRemappingEntry @ 0x1404F8108 (HsaBuildInterruptRemappingEntry.c)
 *     HsaInvalidateRemappingTableEntries @ 0x140570844 (HsaInvalidateRemappingTableEntries.c)
 */

__int64 __fastcall HsaUpdateRemappingTableInDeviceTableEntry(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  _OWORD *v7; // rbx
  __int128 v8; // xmm1
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 result; // rax
  signed __int32 v14[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+38h] [rbp-30h] BYREF
  __int128 v17; // [rsp+48h] [rbp-20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(a1 + 19, &LockHandle);
  v7 = (_OWORD *)(a1[3] + 32LL * *a2);
  v8 = v7[1];
  v16 = *v7;
  v17 = v8;
  HsaBuildInterruptRemappingEntry((__int64)a1, a3, (__int64)&v16);
  v9 = 1 << a2[1];
  v10 = (unsigned int)(1 << (3 - a2[1]));
  if ( v9 )
  {
    v11 = 32LL * (unsigned int)v10;
    v12 = v9;
    do
    {
      *((_QWORD *)v7 + 2) = v17;
      _InterlockedOr(v14, 0);
      HsaInvalidateRemappingTableEntries(a1, v10, 1u);
      v7 = (_OWORD *)((char *)v7 + v11);
      --v12;
    }
    while ( v12 );
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v10);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
