/*
 * XREFs of HalpInterruptRebootService @ 0x1405578D0
 * Callers:
 *     HalpNmiReboot @ 0x140557354 (HalpNmiReboot.c)
 *     HalpPreprocessNmi @ 0x140557480 (HalpPreprocessNmi.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x14053F4E0 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
