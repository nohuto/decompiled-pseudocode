/*
 * XREFs of PopDirectedDripsVisitPs4Device @ 0x140764A90
 * Callers:
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x140764840 (PopDirectedDripsBuildPs4BroadcastTree.c)
 * Callees:
 *     PopDirectedDripsVisitDevice @ 0x1406F760C (PopDirectedDripsVisitDevice.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x140763F0C (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x1407649D8 (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsIsLikelySpecialDevice @ 0x140764A18 (PopDirectedDripsIsLikelySpecialDevice.c)
 */

__int64 __fastcall PopDirectedDripsVisitPs4Device(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  __int64 v10; // rcx
  unsigned int v11; // r8d
  _QWORD *v12; // r14
  _QWORD *i; // rsi
  __int64 v14; // rbx
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1 + 728;
  v7 = 0;
  v16 = 0;
  PopDirectedDripsVisitDevice(a3, a1 + 728, a4, 5u);
  if ( PopDirectedDripsIsLikelySpecialDevice(a1, &v16) )
  {
    v11 = v16;
LABEL_3:
    PopDirectedDripsDiagTraceProblemDevice(v10, a4, v11);
    return (unsigned int)-1073741637;
  }
  if ( (*(_DWORD *)(v5 + 32) & 8) != 0 )
  {
    v11 = 3;
    goto LABEL_3;
  }
  v12 = (_QWORD *)(a1 + 176);
  *(_DWORD *)(v5 + 32) |= 0x20000u;
  for ( i = *(_QWORD **)(a1 + 176); i != v12; i = (_QWORD *)*i )
  {
    v14 = *(i - 1);
    PopDirectedDripsVisitDevice(a3, v14 + 568, a4, 6u);
    PopDirectedDripsInsertQueueDevice(a2, (_QWORD *)(v14 + 568));
  }
  return v7;
}
