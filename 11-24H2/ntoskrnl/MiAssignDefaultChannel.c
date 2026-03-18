/*
 * XREFs of MiAssignDefaultChannel @ 0x1402F3560
 * Callers:
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiGetLargePage @ 0x1402F35A0 (MiGetLargePage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiZeroLargePage @ 0x140308BDC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x14030A090 (MiZeroInParallelWorker.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D4F80 (MiGetLargePageDemoteAsNeeded.c)
 *     MiColorSetChannel @ 0x1404479B4 (MiColorSetChannel.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiAssignDefaultChannel(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v3; // r8
  unsigned __int8 i; // cl

  v1 = qword_140E38C10 + 57216LL * a1;
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
