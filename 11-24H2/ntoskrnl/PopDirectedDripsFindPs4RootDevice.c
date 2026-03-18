/*
 * XREFs of PopDirectedDripsFindPs4RootDevice @ 0x140764FC4
 * Callers:
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x140764E70 (PopDirectedDripsBuildPs4BroadcastTree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDirectedDripsFindPs4RootDevice(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 760) & 1) == 0 )
    a1 = *(_QWORD *)(a1 + 16);
  return a1;
}
