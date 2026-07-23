/*
 * XREFs of PfSnTraceBufferAllocate @ 0x14048E3C4
 * Callers:
 *     PfSnTraceGetLogEntry @ 0x14022BD20 (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x14094A598 (PfSnBeginTrace.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_DWORD *PfSnTraceBufferAllocate()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = (_DWORD *)ExAllocatePool2(0x40uLL, 0x11000uLL, 0x42506343u);
  v1 = result;
  if ( result )
  {
    memset_0(result, 0, 0x11000uLL);
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
