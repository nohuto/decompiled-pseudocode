/*
 * XREFs of MiComputeFlushRange @ 0x14022F1B8
 * Callers:
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     MmTrimSection @ 0x140370AB4 (MmTrimSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x14022E880 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     MiComputeDataFlushRange @ 0x14022F300 (MiComputeDataFlushRange.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 *a1, int a2, int a3, int a4, __int64 a5)
{
  KIRQL v9; // al
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v14; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]

  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(&dword_140E2CC00);
    v10 = *a1;
    v11 = v9;
    if ( !*a1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CC00);
      if ( (_BYTE)v11 != 17 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v12) = v11;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
        }
        __writecr8(v11);
      }
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
    LOBYTE(v14) = v11;
    MiReleaseSpinLockExclusive(&dword_140E2CC00, v14);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    dword_140E2CC00 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CC00, retaddr);
  if ( a4 && !(unsigned int)MiDoesControlAreaHaveUserWritableReferences(v10)
    || (*(_DWORD *)(v10 + 56) & 3) != 0
    || !*(_QWORD *)(v10 + 32) )
  {
    LOBYTE(v14) = v11;
    MiReleaseSpinLockExclusive(v10 + 72, v14);
    return 0LL;
  }
  LOBYTE(v14) = v11;
  return MiComputeDataFlushRange(v10, v14, a2, a3, 0, a5);
}
