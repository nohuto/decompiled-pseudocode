/*
 * XREFs of KiIsFlushEntire @ 0x14048B740
 * Callers:
 *     KiPreprocessFlushTb @ 0x1403AEBC0 (KiPreprocessFlushTb.c)
 *     KeFlushTb @ 0x1403AFDF0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B0C90 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsFlushEntire(int a1)
{
  bool v1; // zf

  if ( !KiFlushPcid )
  {
    if ( KiKvaShadow )
    {
      v1 = a1 == 0;
    }
    else
    {
      if ( !a1 )
        return 1;
      v1 = a1 == 1;
    }
    if ( !v1 )
      return 1;
  }
  return 0;
}
