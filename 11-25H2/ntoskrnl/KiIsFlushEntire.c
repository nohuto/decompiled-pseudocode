/*
 * XREFs of KiIsFlushEntire @ 0x1404037B0
 * Callers:
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14027027C (KeFlushCurrentTbOnly.c)
 *     KiPreprocessFlushTb @ 0x140403650 (KiPreprocessFlushTb.c)
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
