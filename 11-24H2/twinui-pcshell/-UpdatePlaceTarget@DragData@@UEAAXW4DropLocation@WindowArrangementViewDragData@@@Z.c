/*
 * XREFs of ?UpdatePlaceTarget@DragData@@UEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180534220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragData::UpdatePlaceTarget(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = result;
  *(_DWORD *)(a1 + 104) = a2;
  return result;
}
