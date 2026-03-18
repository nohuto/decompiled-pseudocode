/*
 * XREFs of ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BE0A8
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockPointer(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 168) + 24LL) = 0LL;
  return a1;
}
