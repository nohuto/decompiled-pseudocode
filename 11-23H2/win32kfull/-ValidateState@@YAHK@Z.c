/*
 * XREFs of ?ValidateState@@YAHK@Z @ 0x1C0223318
 * Callers:
 *     ClearWindowState @ 0x1C0223348 (ClearWindowState.c)
 *     SetWindowState @ 0x1C02233A0 (SetWindowState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & byte_1C0321798[HIBYTE(a1)]) == (_BYTE)a1;
}
