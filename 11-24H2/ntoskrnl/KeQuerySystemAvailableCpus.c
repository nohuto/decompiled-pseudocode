/*
 * XREFs of KeQuerySystemAvailableCpus @ 0x1405B836C
 * Callers:
 *     PsQuerySystemAvailableCpus @ 0x1405E5670 (PsQuerySystemAvailableCpus.c)
 *     PsQuerySystemAvailableCpusCount @ 0x1405E56B0 (PsQuerySystemAvailableCpusCount.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x14029D200 (RtlBeginReadTickLock.c)
 *     KeCountSetBitsAffinityEx @ 0x1403AFC80 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

__int64 __fastcall KeQuerySystemAvailableCpus(struct _KAFFINITY_EX *a1, _QWORD *a2, __int64 *a3, _DWORD *a4)
{
  __int64 TickLock; // rdi
  unsigned int v5; // ebx
  __int64 result; // rax

  TickLock = KiSystemAvailableCpusSequence;
  v5 = 0;
  if ( a2 && *a2 == KiSystemAvailableCpusSequence )
  {
    v5 = -2147483598;
  }
  else
  {
    do
    {
      TickLock = RtlBeginReadTickLock(&KiSystemAvailableCpusSequence);
      if ( a1 )
        KiCopyAffinityEx(a1, a1->Size, &KiSystemAvailableCpus);
      if ( a4 )
        *a4 = KeCountSetBitsAffinityEx(&KiSystemAvailableCpus.Count);
    }
    while ( KiSystemAvailableCpusSequence != TickLock );
  }
  result = v5;
  *a3 = TickLock;
  return result;
}
