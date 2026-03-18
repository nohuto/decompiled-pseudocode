/*
 * XREFs of IsValidBand @ 0x1400F63FC
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1400F4D44 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidBand(int a1)
{
  unsigned int v1; // r8d
  unsigned int i; // edx

  v1 = 0;
  for ( i = 0; i < 0x12; ++i )
  {
    if ( dword_1403533D0[i] == a1 )
      return 1;
  }
  return v1;
}
