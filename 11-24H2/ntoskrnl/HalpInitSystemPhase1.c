/*
 * XREFs of HalpInitSystemPhase1 @ 0x140B4B7C4
 * Callers:
 *     HalInitSystem @ 0x140B4B6C0 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140B4B718 (HalpInitSystemHelper.c)
 */

bool __fastcall HalpInitSystemPhase1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  int v6; // edx

  if ( KeGetPcr()->Prcb.Number )
  {
    v5 = 19;
    v6 = 20;
  }
  else
  {
    v5 = 17;
    v6 = 18;
  }
  return (int)HalpInitSystemHelper(v5, v6, a1, a4) >= 0;
}
