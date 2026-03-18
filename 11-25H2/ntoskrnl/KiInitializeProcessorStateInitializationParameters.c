/*
 * XREFs of KiInitializeProcessorStateInitializationParameters @ 0x1405B340C
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall KiInitializeProcessorStateInitializationParameters(void *a1)
{
  return memset_0(a1, 0, 0xE8uLL);
}
