/*
 * XREFs of KiGetCurrentGroupCount @ 0x1405B8DA4
 * Callers:
 *     KiUpdateProcessorCount @ 0x140B57928 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140E668B0;
}
