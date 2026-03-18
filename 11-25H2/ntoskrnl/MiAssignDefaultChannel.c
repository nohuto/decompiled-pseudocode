/*
 * XREFs of MiAssignDefaultChannel @ 0x140222A5C
 * Callers:
 *     MiGetLargePage @ 0x140222688 (MiGetLargePage.c)
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140392A30 (MiGetLargePageDemoteAsNeeded.c)
 *     MiColorSetChannel @ 0x14044FB5C (MiColorSetChannel.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiAssignDefaultChannel(unsigned int a1)
{
  __int64 v1; // r8
  unsigned __int8 v3; // cl
  unsigned __int8 i; // dl

  v1 = qword_140E389D0 + 57216LL * a1;
  if ( (*(_DWORD *)(v1 + 15184) & 1) != 0 )
  {
    v3 = 0;
    for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
    {
      if ( *(_BYTE *)(i + v1 + 15237) == 1 )
        return i;
    }
    while ( v3 < (unsigned __int8)MmNumberOfChannels )
    {
      if ( *(_BYTE *)(v3 + v1 + 15237) == 2 )
        return v3;
      ++v3;
    }
  }
  return 0;
}
