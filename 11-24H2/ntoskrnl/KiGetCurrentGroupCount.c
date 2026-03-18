/*
 * XREFs of KiGetCurrentGroupCount @ 0x1405BB774
 * Callers:
 *     KiUpdateProcessorCount @ 0x140B558D8 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140E66770;
}
