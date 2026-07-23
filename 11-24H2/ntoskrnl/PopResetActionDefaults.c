/*
 * XREFs of PopResetActionDefaults @ 0x1406F9BD4
 * Callers:
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PopResetActionDefaults()
{
  dword_140F0B9AC = 0;
  dword_140F0B9B4 = 0;
  dword_140F0B9B8 = 1;
  byte_140F0B9A9 = 0;
  if ( (PopAction & 2) == 0 )
  {
    dword_140F0B984 = 0;
    dword_140F0B988 = 0;
    dword_140F0B990 = 0;
    LOBYTE(PopAction) = 0;
    byte_140F0B982 = 0;
    byte_140F0B9A8 = 0;
    dword_140F0B994 = 17;
    if ( qword_140F0B9A0 )
    {
      ExFreePoolWithTag(qword_140F0B9A0, 0x67696450u);
      qword_140F0B9A0 = 0LL;
    }
    dword_140F0B98C = 268435459;
  }
}
