/*
 * XREFs of EtwpThreadEnumCallback @ 0x1408BD820
 * Callers:
 *     PsEnumProcessThreads @ 0x1408BD784 (PsEnumProcessThreads.c)
 *     EtwpProcessEnumCallback @ 0x1408BEE80 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpTraceThreadRundown @ 0x1403044A0 (EtwpTraceThreadRundown.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140644A5C (EtwpTraceThreadRundownWithStack.c)
 */

__int64 __fastcall EtwpThreadEnumCallback(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // zf

  if ( (*(_DWORD *)(a2 + 1440) & 1) == 0 || !*(_BYTE *)(a2 + 4) )
  {
    v4 = *(_BYTE *)(a3 + 66) == 0;
    *(_DWORD *)(a3 + 40) = 6297859;
    if ( v4 )
      EtwpTraceThreadRundown(a2, a3);
    else
      EtwpTraceThreadRundownWithStack(a2, a3);
  }
  return 0LL;
}
