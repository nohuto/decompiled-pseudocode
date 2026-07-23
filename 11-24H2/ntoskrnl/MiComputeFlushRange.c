/*
 * XREFs of MiComputeFlushRange @ 0x140302AC8
 * Callers:
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     MmTrimSection @ 0x1404724C4 (MmTrimSection.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x140302190 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     MiComputeDataFlushRange @ 0x140302C10 (MiComputeDataFlushRange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 *a1, int a2, int a3, int a4, __int64 a5)
{
  KIRQL v9; // al
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  int v14; // edx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(&dword_140E2CD40);
    v10 = *a1;
    v11 = v9;
    if ( !*a1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CD40);
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
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v10 + 72)) )
      break;
    MiReleaseSpinLockExclusive(&dword_140E2CD40, v11);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    dword_140E2CD40 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CD40, retaddr);
  if ( a4 && !(unsigned int)MiDoesControlAreaHaveUserWritableReferences(v10)
    || (*(_DWORD *)(v10 + 56) & 3) != 0
    || !*(_QWORD *)(v10 + 32) )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v10 + 72), v11);
    return 0LL;
  }
  LOBYTE(v14) = v11;
  return MiComputeDataFlushRange(v10, v14, a2, a3, 0, a5);
}
