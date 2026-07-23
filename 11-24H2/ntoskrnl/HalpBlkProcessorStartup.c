/*
 * XREFs of HalpBlkProcessorStartup @ 0x140BDD860
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkApicInitializeLocalUnit @ 0x140BDD1F0 (HalpBlkApicInitializeLocalUnit.c)
 *     HalpBlkMceInitialize @ 0x140BDD790 (HalpBlkMceInitialize.c)
 *     HalpBlkIdleLoop @ 0x140BDD7D0 (HalpBlkIdleLoop.c)
 */

void __fastcall __noreturn HalpBlkProcessorStartup(unsigned __int64 a1)
{
  _disable();
  __writemsr(0xC0000101, a1);
  __writemsr(0xC0000102, a1);
  HalpBlkApicInitializeLocalUnit();
  HalpBlkMceInitialize();
  _InterlockedIncrement64(MK_FP(__GS__, 16LL));
  HalpBlkIdleLoop();
}
