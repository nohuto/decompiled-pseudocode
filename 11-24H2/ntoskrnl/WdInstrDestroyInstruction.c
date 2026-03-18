/*
 * XREFs of WdInstrDestroyInstruction @ 0x14056CB94
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x14055F5C8 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     WdHwDestroyHardwareRegister @ 0x14056CACC (WdHwDestroyHardwareRegister.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset_0(a1, 0, 0x40uLL);
}
