/*
 * XREFs of HalpInterruptRebootService @ 0x14055A1D0
 * Callers:
 *     HalpNmiReboot @ 0x140559C54 (HalpNmiReboot.c)
 *     HalpPreprocessNmi @ 0x140559D80 (HalpPreprocessNmi.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x140541D10 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
