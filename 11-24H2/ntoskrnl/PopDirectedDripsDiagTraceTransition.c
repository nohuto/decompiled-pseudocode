/*
 * XREFs of PopDirectedDripsDiagTraceTransition @ 0x14076407C
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140A35AD4 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDirectedDripsDiagTraceTransition(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 760) & 0x20000) != 0 )
  {
    result = *(_QWORD *)(a1 + 776);
    if ( result )
      ++*(_DWORD *)(result + 160);
  }
  else
  {
    result = *(unsigned int *)(a1 + 760);
    if ( (result & 0x10000) != 0 )
    {
      result = *(_QWORD *)(a1 + 776);
      if ( result )
        ++*(_DWORD *)(result + 156);
    }
  }
  return result;
}
