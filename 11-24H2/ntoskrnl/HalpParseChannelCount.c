/*
 * XREFs of HalpParseChannelCount @ 0x140565BF0
 * Callers:
 *     HalpGetNumaProcMemoryCount @ 0x140C13460 (HalpGetNumaProcMemoryCount.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140C13674 (HalpInitializeConfigurationFromMadt.c)
 * Callees:
 *     <none>
 */

__int64 HalpParseChannelCount()
{
  unsigned int v1; // edx
  __int64 v2; // rcx
  unsigned __int16 i; // r8

  if ( !HalpAcpiMpst )
    return 0LL;
  v1 = 0;
  v2 = HalpAcpiMpst + 44;
  for ( i = 0; i < *(_WORD *)(HalpAcpiMpst + 40); ++i )
  {
    if ( v2 + 34 > HalpAcpiMpst + (unsigned __int64)*(unsigned int *)(HalpAcpiMpst + 4) )
      return 0;
    if ( *(_DWORD *)(v2 + 24) )
    {
      if ( (*(_BYTE *)v2 & 1) != 0 )
        ++v1;
    }
    v2 += *(unsigned int *)(v2 + 4);
  }
  if ( v1 )
    v1 &= -(*(_WORD *)v2 != 0);
  return v1;
}
