/*
 * XREFs of MiStartingOffsetNeedLock @ 0x140432804
 * Callers:
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiStartingOffsetNeedLock(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbp
  KIRQL v5; // si
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v10; // rbx

  v2 = *a1;
  if ( (*(_DWORD *)(*a1 + 56) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
    v5 = 17;
  else
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
  v6 = a1[1];
  if ( (*(_DWORD *)(*a1 + 56) & 0x20) != 0 )
  {
    if ( v6 >= v6 + 8LL * *((unsigned int *)a1 + 11) )
      v10 = (v6 << 9) - (*(_QWORD *)(MiGetSharedProtos(*a1, a2, (__int64)a1) + 72) << 9);
    else
      v10 = 0LL;
    v7 = ((unsigned __int64)*((unsigned int *)a1 + 9) << 9) + (v10 & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    v7 = (*((unsigned int *)a1 + 9) | ((unsigned __int64)(a1[4] & 0xFFC0) << 26)) << 12;
  }
  if ( v5 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = v5;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    __writecr8(v5);
  }
  return v7;
}
