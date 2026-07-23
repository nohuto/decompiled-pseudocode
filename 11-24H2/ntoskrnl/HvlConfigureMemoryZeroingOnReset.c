/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x14057F770
 * Callers:
 *     HvlPhase1Initialize @ 0x14057FDE0 (HvlPhase1Initialize.c)
 *     PopShutdownSystem @ 0x140B62104 (PopShutdownSystem.c)
 *     PopHiberCheckResume @ 0x140B709E0 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404CCED0 (HvlpSetRegister64.c)
 */

void __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  if ( (HvlpFlags & 0x40000) != 0 )
    HvlpSetRegister64(624, a1 != 0);
}
