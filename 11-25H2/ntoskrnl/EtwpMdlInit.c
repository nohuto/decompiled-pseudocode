/*
 * XREFs of EtwpMdlInit @ 0x1407999D0
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x140480E94 (EtwpAllocateTraceBuffer.c)
 *     EtwpFreeTraceBuffer @ 0x140482D30 (EtwpFreeTraceBuffer.c)
 *     EtwpFreePfnArray @ 0x1407989F8 (EtwpFreePfnArray.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall EtwpMdlInit(__int64 a1, int a2, __int64 a3)
{
  __int16 result; // ax

  *(_OWORD *)a1 = 0LL;
  result = 8 * (a2 + 6);
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 40) = a2 << 12;
  *(_WORD *)(a1 + 10) = 8202;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 24) = a3;
    *(_WORD *)(a1 + 10) = 8203;
  }
  return result;
}
