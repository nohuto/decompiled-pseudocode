/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x180140850
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x18000BBA0 (RtlGetSuiteMask.c)
 */

ULONG RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit()
{
  ULONG result; // eax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 2u;
  return result;
}
