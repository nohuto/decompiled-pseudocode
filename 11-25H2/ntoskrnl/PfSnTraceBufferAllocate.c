/*
 * XREFs of PfSnTraceBufferAllocate @ 0x140494C58
 * Callers:
 *     PfSnTraceGetLogEntry @ 0x140303020 (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x140828318 (PfSnBeginTrace.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

_DWORD *PfSnTraceBufferAllocate()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = (_DWORD *)ExAllocatePool2(0x40uLL);
  v1 = result;
  if ( result )
  {
    memset_0(result, 0, 0x11000uLL);
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
