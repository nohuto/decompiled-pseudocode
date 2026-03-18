/*
 * XREFs of GetPenHoldTime @ 0x1C01F31A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C009FF7C (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 GetPenHoldTime()
{
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return *((unsigned int *)off_1C0354038 + 22);
  result = *((unsigned int *)off_1C0354038 + 23);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C0354038 + 22);
  return result;
}
