/*
 * XREFs of StorpWheaRemoveErrorSource @ 0x140184CB0
 * Callers:
 *     DllUnload @ 0x1400A5120 (DllUnload.c)
 * Callees:
 *     <none>
 */

__int64 StorpWheaRemoveErrorSource()
{
  __int64 result; // rax

  result = WheaErrorSourceGetState((unsigned int)g_StorpWheaErrorSourceId);
  if ( (_DWORD)result != 3 )
    return WheaRemoveErrorSourceDeviceDriver((unsigned int)g_StorpWheaErrorSourceId);
  return result;
}
