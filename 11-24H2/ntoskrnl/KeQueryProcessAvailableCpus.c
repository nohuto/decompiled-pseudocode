/*
 * XREFs of KeQueryProcessAvailableCpus @ 0x1405B82AC
 * Callers:
 *     PsQueryProcessAvailableCpus @ 0x1405E55E0 (PsQueryProcessAvailableCpus.c)
 *     PsQueryProcessAvailableCpusCount @ 0x1405E5630 (PsQueryProcessAvailableCpusCount.c)
 * Callees:
 *     KiUpdateProcessAvailableCpuState @ 0x140204268 (KiUpdateProcessAvailableCpuState.c)
 *     RtlBeginReadTickLock @ 0x14029D200 (RtlBeginReadTickLock.c)
 *     KeCountSetBitsAffinityEx @ 0x1403AFC80 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

__int64 __fastcall KeQueryProcessAvailableCpus(
        __int64 a1,
        struct _KAFFINITY_EX *a2,
        _QWORD *a3,
        __int64 *a4,
        _DWORD *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 TickLock; // rsi
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 448);
  v6 = 0;
  TickLock = *(_QWORD *)v5;
  if ( *(_QWORD *)(v5 + 8) == KiCpuSetSequence && *(_QWORD *)(v5 + 16) == KiForceParkingSequence )
  {
    if ( a3 && *a3 == TickLock )
    {
      v6 = -2147483598;
      goto LABEL_12;
    }
  }
  else
  {
    KiUpdateProcessAvailableCpuState(a1, 0, (__int64)a3);
  }
  do
  {
    TickLock = RtlBeginReadTickLock((__int64 *)v5);
    if ( a2 )
      KiCopyAffinityEx(a2, a2->Size, *(struct _KAFFINITY_EX **)(v5 + 24));
    if ( a5 )
      *a5 = KeCountSetBitsAffinityEx(*(unsigned __int16 **)(v5 + 24));
  }
  while ( *(_QWORD *)v5 != TickLock );
LABEL_12:
  result = v6;
  *a4 = TickLock;
  return result;
}
