/*
 * XREFs of MiOutlawInswaps @ 0x140405E8C
 * Callers:
 *     MiBeginProcessClean @ 0x140405D10 (MiBeginProcessClean.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiGetWorkingSetSwapSupport @ 0x140405F90 (MiGetWorkingSetSwapSupport.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned __int8 v3; // dl
  __int64 WorkingSetSwapSupport; // rsi
  _QWORD *v5; // rcx

  v1 = a1 + 1024;
  v2 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 1198));
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1184));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1);
  v5 = &unk_140E38758;
  if ( (*(_DWORD *)(v1 + 184) & 0xF) != 1 )
    v5 = (_QWORD *)(v1 + 216);
  *v5 = 2LL;
  MiReleaseSpinLockExclusive((_DWORD *)(v2 + 1184), v3);
  return WorkingSetSwapSupport;
}
