/*
 * XREFs of MiAssignDefaultChannel @ 0x140251B50
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140263DE4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x140313F70 (MiZeroInParallelWorker.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiColorSetChannel @ 0x1404400D4 (MiColorSetChannel.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiAssignDefaultChannel(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v3; // r8
  unsigned __int8 i; // cl

  v1 = qword_140E38D50 + 57216LL * a1;
  if ( (*(_DWORD *)(v1 + 15184) & 1) != 0 )
  {
    v3 = v1 + 15237;
    for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
    {
      if ( *(_BYTE *)(i + v3) == 1 )
        return i;
    }
    for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
    {
      if ( *(_BYTE *)(i + v3) == 2 )
        return i;
    }
  }
  return 0;
}
