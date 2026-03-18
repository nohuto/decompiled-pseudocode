/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x140405C6C
 * Callers:
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStop @ 0x140A4CBCC (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140A4CD20 (SmStoreCompressionStart.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiGetWorkingSetSwapSupport @ 0x140405F90 (MiGetWorkingSetSwapSupport.c)
 */

__int64 __fastcall MmQueryProcessWorkingSetSwapPages(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rbp
  unsigned __int64 WorkingSetSwapSupport; // rax
  unsigned __int8 v8; // r9

  v2 = a1 + 1024;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(a1 + 1024) <= 2 )
    return 3221226021LL;
  v5 = -1073741275;
  v6 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v4 + 1198));
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1184));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2);
  if ( WorkingSetSwapSupport > 2 )
  {
    v5 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)WorkingSetSwapSupport + 24LL);
  }
  MiReleaseSpinLockExclusive((_DWORD *)(v6 + 1184), v8);
  return v5;
}
