/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140B58068
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1405BC5F0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140B4B020 (KiEnableXSave.c)
 */

void __noreturn KiConfigureDynamicProcessor()
{
  KiEnableXSave(0LL);
}
