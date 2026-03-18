/*
 * XREFs of KiInitializeProcessorStateInitializationParameters @ 0x1405B72DC
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall KiInitializeProcessorStateInitializationParameters(void *a1)
{
  return memset_0(a1, 0, 0xE8uLL);
}
