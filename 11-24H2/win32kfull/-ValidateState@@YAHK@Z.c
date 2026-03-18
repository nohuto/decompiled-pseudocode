/*
 * XREFs of ?ValidateState@@YAHK@Z @ 0x1401C4AA0
 * Callers:
 *     ClearWindowState @ 0x1401C49E0 (ClearWindowState.c)
 *     SetWindowState @ 0x1401C4A40 (SetWindowState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & byte_1403549E0[HIBYTE(a1)]) == (_BYTE)a1;
}
