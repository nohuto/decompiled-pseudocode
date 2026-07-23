/*
 * XREFs of VmpCheckPinTooLate @ 0x14079F2D0
 * Callers:
 *     VmpPinMemoryRange @ 0x140649280 (VmpPinMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpCheckPinTooLate(__int64 a1)
{
  return (*(_BYTE *)(a1 + 138) & 1) != 0 ? 0xC000010A : 0;
}
