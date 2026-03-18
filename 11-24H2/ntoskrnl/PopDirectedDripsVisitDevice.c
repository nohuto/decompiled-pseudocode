/*
 * XREFs of PopDirectedDripsVisitDevice @ 0x1406F99CC
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140764B50 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x140764E70 (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsVisitPs4Device @ 0x1407650C0 (PopDirectedDripsVisitPs4Device.c)
 *     PopDirectedDripsMarkDfxDevice @ 0x140A94C14 (PopDirectedDripsMarkDfxDevice.c)
 * Callees:
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x140AB287C (PopDirectedDripsDiagTraceBroadcastVisit.c)
 */

__int64 __fastcall PopDirectedDripsVisitDevice(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // r10
  _QWORD *v5; // rax

  v4 = (_QWORD *)(a2 + 16);
  if ( (_QWORD *)*v4 == v4 )
  {
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 32);
    v5 = *(_QWORD **)(a1 + 8);
    if ( *v5 != a1 )
      __fastfail(3u);
    *v4 = a1;
    *(_QWORD *)(a2 + 24) = v5;
    *v5 = v4;
    *(_QWORD *)(a1 + 8) = v4;
  }
  return PopDirectedDripsDiagTraceBroadcastVisit(a2 - 728, a3, a4);
}
