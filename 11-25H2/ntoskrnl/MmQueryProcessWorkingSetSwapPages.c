/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x1403D8014
 * Callers:
 *     PfpPrivSourceEnum @ 0x1408DED60 (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStop @ 0x140A4A624 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140A4A778 (SmStoreCompressionStart.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiGetWorkingSetSwapSupport @ 0x1403D82C4 (MiGetWorkingSetSwapSupport.c)
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
  v6 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v4 + 1198));
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
