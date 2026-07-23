/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x140436130
 * Callers:
 *     EtwTraceRaw @ 0x14064D8FC (EtwTraceRaw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetReserveTraceBufferStatus(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 > 0xFFF8 )
    return 3221225621LL;
  result = 3221225495LL;
  if ( a2 > *(_DWORD *)(a1 + 8) )
    return 2147483653LL;
  return result;
}
