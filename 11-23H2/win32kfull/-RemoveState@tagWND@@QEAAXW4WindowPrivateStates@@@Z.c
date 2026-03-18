/*
 * XREFs of ?RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z @ 0x1C01A5A40
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall tagWND::RemoveState(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 320) &= ~a2;
}
