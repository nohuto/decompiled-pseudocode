/*
 * XREFs of KiInitializeProcessorStateInitializationParameters @ 0x1405B463C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall KiInitializeProcessorStateInitializationParameters(void *a1)
{
  return memset_0(a1, 0, 0xE8uLL);
}
