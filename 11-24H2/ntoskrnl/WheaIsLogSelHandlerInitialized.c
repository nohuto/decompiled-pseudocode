/*
 * XREFs of WheaIsLogSelHandlerInitialized @ 0x14065E050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool WheaIsLogSelHandlerInitialized()
{
  return (_DWORD)WheapHighIrqlLogSelHandler != 0;
}
