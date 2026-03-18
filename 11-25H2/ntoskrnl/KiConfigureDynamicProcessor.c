/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140B480C8
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1405B8750 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140B3B020 (KiEnableXSave.c)
 */

void __noreturn KiConfigureDynamicProcessor()
{
  KiEnableXSave(0LL);
}
