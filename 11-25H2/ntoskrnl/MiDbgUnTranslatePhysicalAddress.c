/*
 * XREFs of MiDbgUnTranslatePhysicalAddress @ 0x140673D68
 * Callers:
 *     MiDbgCopyMemory @ 0x140672C90 (MiDbgCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1406739D0 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeFlushSingleCurrentTb @ 0x1405B8A4C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405B8C34 (KeFlushSingleTb.c)
 */

void __fastcall MiDbgUnTranslatePhysicalAddress(int *a1)
{
  volatile __int64 *v1; // rdx
  unsigned __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx

  v1 = (volatile __int64 *)*((_QWORD *)a1 + 1);
  if ( v1 )
  {
    _InterlockedExchange64(v1, CLFS_LSN_NULL_EXT);
    v3 = (__int64)((_QWORD)v1 << 25) >> 16;
    if ( (*a1 & 0x12) != 0 )
      KeFlushSingleTb(v3, 0, 2u);
    else
      KeFlushSingleCurrentTb(v3, 0);
  }
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    if ( (v4 & 1) != 0 || (v4 & 2) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a1 + 2) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( (v4 & 0x18) != 0 )
    {
      v5 = *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41);
      v6 = *((_QWORD *)a1 + 3);
      if ( v6 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 172));
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 640));
    }
  }
  v7 = *((unsigned __int8 *)a1 + 4);
  if ( (_BYTE)v7 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    __writecr8(v7);
  }
}
