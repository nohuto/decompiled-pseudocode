/*
 * XREFs of KiInitDynamicProcessorIpi @ 0x1405BC5F0
 * Callers:
 *     <none>
 * Callees:
 *     KiConfigureDynamicProcessor @ 0x140B58068 (KiConfigureDynamicProcessor.c)
 */

void __noreturn KiInitDynamicProcessorIpi()
{
  KiConfigureDynamicProcessor();
}
