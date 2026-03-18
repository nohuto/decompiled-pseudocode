/*
 * XREFs of HalpCheckInterruptType @ 0x1404F824C
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140443D28 (HalpDisableSecondaryInterrupt.c)
 *     HalpEnableSecondaryInterrupt @ 0x1406EF620 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x140445FC0 (HalpIsInterruptTypeSecondary.c)
 */

bool __fastcall HalpCheckInterruptType(_DWORD *a1)
{
  bool result; // al

  result = 0;
  if ( *a1 == 1 )
    return HalpIsInterruptTypeSecondary(a1[2], a1[16]);
  return result;
}
