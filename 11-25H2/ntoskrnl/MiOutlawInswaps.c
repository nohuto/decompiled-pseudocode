/*
 * XREFs of MiOutlawInswaps @ 0x1403D81C0
 * Callers:
 *     MiBeginProcessClean @ 0x1403D80B8 (MiBeginProcessClean.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiGetWorkingSetSwapSupport @ 0x1403D82C4 (MiGetWorkingSetSwapSupport.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned __int8 v3; // dl
  __int64 WorkingSetSwapSupport; // rsi
  _QWORD *v5; // rcx

  v1 = a1 + 1024;
  v2 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 1198));
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1184));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1);
  v5 = &unk_140E38518;
  if ( (*(_DWORD *)(v1 + 184) & 0xF) != 1 )
    v5 = (_QWORD *)(v1 + 216);
  *v5 = 2LL;
  MiReleaseSpinLockExclusive((_DWORD *)(v2 + 1184), v3);
  return WorkingSetSwapSupport;
}
