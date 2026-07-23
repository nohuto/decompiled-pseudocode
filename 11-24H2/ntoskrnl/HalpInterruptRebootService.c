/*
 * XREFs of HalpInterruptRebootService @ 0x140557E00
 * Callers:
 *     HalpNmiReboot @ 0x140557884 (HalpNmiReboot.c)
 *     HalpPreprocessNmi @ 0x1405579B0 (HalpPreprocessNmi.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x14053F610 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
