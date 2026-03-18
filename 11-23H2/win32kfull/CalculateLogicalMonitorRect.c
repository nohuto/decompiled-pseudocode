/*
 * XREFs of CalculateLogicalMonitorRect @ 0x1C00AF334
 * Callers:
 *     ?LogicalMonitorRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C005E150 (-LogicalMonitorRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     GetScreenRectForDpi @ 0x1C00AE544 (GetScreenRectForDpi.c)
 *     _MonitorFromPoint @ 0x1C00AEBB0 (_MonitorFromPoint.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C01F28A0 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C00AF3A8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00B1710 (ScaleDPIRect.c)
 */

__int64 *__fastcall CalculateLogicalMonitorRect(
        __int64 *a1,
        _OWORD *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5)
{
  __int64 v9; // rax

  *(_OWORD *)a1 = *a2;
  if ( a4 )
  {
    v9 = ExpandMonitorSpaceVertex(a4, a5, *a1);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a4, a3, v9, *a1);
  }
  return a1;
}
