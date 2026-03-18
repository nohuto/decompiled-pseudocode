/*
 * XREFs of PopResetActionDefaults @ 0x1406F01AC
 * Callers:
 *     PopExecutePowerAction @ 0x140747484 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void PopResetActionDefaults()
{
  dword_140F0AE8C = 0;
  dword_140F0AE94 = 0;
  dword_140F0AE98 = 1;
  byte_140F0AE89 = 0;
  if ( (PopAction & 2) == 0 )
  {
    dword_140F0AE64 = 0;
    dword_140F0AE68 = 0;
    dword_140F0AE70 = 0;
    LOBYTE(PopAction) = 0;
    byte_140F0AE62 = 0;
    byte_140F0AE88 = 0;
    dword_140F0AE74 = 17;
    if ( qword_140F0AE80 )
    {
      ExFreePoolWithTag(qword_140F0AE80, 0x67696450u);
      qword_140F0AE80 = 0LL;
    }
    dword_140F0AE6C = 268435459;
  }
}
