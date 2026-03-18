/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x14057EC40
 * Callers:
 *     HvlPhase1Initialize @ 0x14057F2B0 (HvlPhase1Initialize.c)
 *     PopShutdownSystem @ 0x140B4FF14 (PopShutdownSystem.c)
 *     PopHiberCheckResume @ 0x140B56660 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404D3E70 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624, a1 != 0);
  return result;
}
