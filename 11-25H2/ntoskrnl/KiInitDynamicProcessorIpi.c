/*
 * XREFs of KiInitDynamicProcessorIpi @ 0x1405B8750
 * Callers:
 *     <none>
 * Callees:
 *     KiConfigureDynamicProcessor @ 0x140B480C8 (KiConfigureDynamicProcessor.c)
 */

void __noreturn KiInitDynamicProcessorIpi()
{
  KiConfigureDynamicProcessor();
}
