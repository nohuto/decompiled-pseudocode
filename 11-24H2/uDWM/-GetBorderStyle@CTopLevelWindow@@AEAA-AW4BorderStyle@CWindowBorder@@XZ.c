/*
 * XREFs of ?GetBorderStyle@CTopLevelWindow@@AEAA?AW4BorderStyle@CWindowBorder@@XZ @ 0x18007765C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::GetBorderStyle(__int64 a1)
{
  return (*(unsigned __int8 *)(*(_QWORD *)(a1 + 712) + 737LL) >> 2) & 1;
}
