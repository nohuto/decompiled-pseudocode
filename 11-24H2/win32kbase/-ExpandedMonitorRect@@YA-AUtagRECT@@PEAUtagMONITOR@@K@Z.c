/*
 * XREFs of ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x140047D4C
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140047880 (TransformRectBetweenCoordinateSpaces.c)
 *     FindAdjacentMonitor @ 0x140110194 (FindAdjacentMonitor.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x140047DE0 (ExpandMonitorSpaceVertex.c)
 */

struct tagRECT *__fastcall ExpandedMonitorRect(
        struct tagRECT *__return_ptr retstr,
        struct tagMONITOR *a2,
        unsigned int a3)
{
  unsigned __int16 v4; // si
  unsigned __int16 v5; // bx
  __int64 v6; // rax
  __int64 v7; // r8

  *retstr = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 28LL);
  if ( (a3 & 0xF) != 2 )
  {
    v4 = (a3 >> 8) & 0x1FF;
    v5 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(retstr) + 57008) + 104LL) + 40LL) + 62LL);
    v6 = ExpandMonitorSpaceVertex(v4, v5, *(_QWORD *)&retstr->left);
    v7 = *(_QWORD *)&retstr->right;
    *(_QWORD *)&retstr->left = v6;
    *(_QWORD *)&retstr->right = ExpandMonitorSpaceVertex(v4, v5, v7);
  }
  return retstr;
}
