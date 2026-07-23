/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x1403C81C8
 * Callers:
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStop @ 0x140A4375C (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140A438B0 (SmStoreCompressionStart.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiGetWorkingSetSwapSupport @ 0x1403C84EC (MiGetWorkingSetSwapSupport.c)
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
  v6 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v4 + 1198));
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
