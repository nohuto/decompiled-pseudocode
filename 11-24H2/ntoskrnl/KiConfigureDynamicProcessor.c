/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140B5A0E8
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1405B9C20 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140B4D11C (KiEnableXSave.c)
 */

void __noreturn KiConfigureDynamicProcessor()
{
  KiEnableXSave(0LL);
}
