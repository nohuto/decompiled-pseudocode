/*
 * XREFs of KiResetBootProcessorApicMask @ 0x14072F124
 * Callers:
 *     KiCompleteBootProcessorContextInitialization @ 0x1405B26F4 (KiCompleteBootProcessorContextInitialization.c)
 * Callees:
 *     <none>
 */

__int64 KiResetBootProcessorApicMask()
{
  __int64 result; // rax

  result = (unsigned int)-(*(_DWORD *)(KiProcessorBlock[0] + 160) * *(_DWORD *)(KiProcessorBlock[0] + 164));
  *(_DWORD *)(KiProcessorBlock[0] + 220) = result;
  return result;
}
