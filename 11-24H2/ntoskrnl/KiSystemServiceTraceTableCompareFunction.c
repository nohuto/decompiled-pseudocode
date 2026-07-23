/*
 * XREFs of KiSystemServiceTraceTableCompareFunction @ 0x14073B374
 * Callers:
 *     KiGetSystemServiceTraceTable @ 0x14073B234 (KiGetSystemServiceTraceTable.c)
 *     KiTrackSystemCallEntry @ 0x14073B390 (KiTrackSystemCallEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSystemServiceTraceTableCompareFunction(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 <= v2 )
    return (unsigned int)-(a1 < v2);
  else
    return 1LL;
}
