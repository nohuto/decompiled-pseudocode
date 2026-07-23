/*
 * XREFs of WdInstrDestroyInstruction @ 0x14056A024
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x14055D1F8 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     WdHwDestroyHardwareRegister @ 0x140569F5C (WdHwDestroyHardwareRegister.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset_0(a1, 0, 0x40uLL);
}
