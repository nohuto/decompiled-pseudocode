/*
 * XREFs of PopResetActionDefaults @ 0x1406FBF94
 * Callers:
 *     PopExecutePowerAction @ 0x140753574 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void PopResetActionDefaults()
{
  dword_140F0B12C = 0;
  dword_140F0B134 = 0;
  dword_140F0B138 = 1;
  byte_140F0B129 = 0;
  if ( (PopAction & 2) == 0 )
  {
    dword_140F0B104 = 0;
    dword_140F0B108 = 0;
    dword_140F0B110 = 0;
    LOBYTE(PopAction) = 0;
    byte_140F0B102 = 0;
    byte_140F0B128 = 0;
    dword_140F0B114 = 17;
    if ( qword_140F0B120 )
    {
      ExFreePoolWithTag(qword_140F0B120, 0x67696450u);
      qword_140F0B120 = 0LL;
    }
    dword_140F0B10C = 268435459;
  }
}
