/*
 * XREFs of HalpLbrGetInformation @ 0x1405677B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HalpLbrGetInformation(_DWORD *a1, unsigned int *a2)
{
  char result; // al
  unsigned int v3; // r8d

  result = HalpLbrStackSize;
  if ( HalpLbrStackSize )
  {
    if ( a1 )
      *a1 = HalpLbrStackSize;
    if ( !a2 )
      return 1;
    v3 = 1023;
    if ( HalpLbrType == 2 )
    {
      v3 = ((HalpIntelArchLbrCapabilities & 1) != 0 ? 1023 : 1020) & 0xFFFFFE03;
      if ( (HalpIntelArchLbrCapabilities & 2) != 0 )
        v3 = (HalpIntelArchLbrCapabilities & 1) != 0 ? 1023 : 1020;
      if ( (HalpIntelArchLbrCapabilities & 4) != 0 )
        goto LABEL_12;
      v3 &= ~0x200u;
    }
    if ( HalpLbrType == 3 )
      v3 &= ~0x200u;
LABEL_12:
    *a2 = v3;
    return 1;
  }
  return result;
}
