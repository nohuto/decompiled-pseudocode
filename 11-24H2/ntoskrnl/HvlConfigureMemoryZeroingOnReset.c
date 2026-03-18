/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1405823F0
 * Callers:
 *     HvlPhase1Initialize @ 0x140582A60 (HvlPhase1Initialize.c)
 *     PopShutdownSystem @ 0x140B60044 (PopShutdownSystem.c)
 *     PopHiberCheckResume @ 0x140B6E970 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404D3CC0 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624, a1 != 0);
  return result;
}
