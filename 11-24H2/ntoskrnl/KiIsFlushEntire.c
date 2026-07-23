/*
 * XREFs of KiIsFlushEntire @ 0x140486514
 * Callers:
 *     KiPreprocessFlushTb @ 0x14039D3D0 (KiPreprocessFlushTb.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14039F4A0 (KeFlushCurrentTbOnly.c)
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
