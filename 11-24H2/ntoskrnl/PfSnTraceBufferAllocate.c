/*
 * XREFs of PfSnTraceBufferAllocate @ 0x1404939D4
 * Callers:
 *     PfSnTraceGetLogEntry @ 0x140276790 (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x140962AD8 (PfSnBeginTrace.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
