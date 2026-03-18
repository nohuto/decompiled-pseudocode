/*
 * XREFs of MiComputeFlushRange @ 0x140218830
 * Callers:
 *     MmFlushSection @ 0x1402C1F80 (MmFlushSection.c)
 *     MmTrimSection @ 0x1403598AC (MmTrimSection.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x140218514 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     MiComputeDataFlushRange @ 0x140218970 (MiComputeDataFlushRange.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 *a1, int a2, int a3, int a4, __int64 a5)
{
  KIRQL v9; // al
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]

  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(&SpinLock);
    v10 = *a1;
    v11 = v9;
    if ( !*a1 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        SpinLock = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
      if ( (!a4 || (unsigned int)MiDoesControlAreaHaveUserWritableReferences(v10))
        && (*(_DWORD *)(v10 + 56) & 3) == 0
        && *(_QWORD *)(v10 + 32) )
      {
        return MiComputeDataFlushRange(v10, (unsigned __int8)v11, a2, a3, 0, a5);
      }
      MiReleaseSpinLockExclusive(v10 + 72, (unsigned __int8)v11);
      return 0LL;
    }
    MiReleaseSpinLockExclusive(&SpinLock, (unsigned __int8)v11);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  if ( (_BYTE)v11 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
    __writecr8(v11);
  }
  return 0LL;
}
