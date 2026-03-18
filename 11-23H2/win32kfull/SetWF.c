/*
 * XREFs of SetWF @ 0x1C0138AFC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 */

char __fastcall SetWF(__int64 *a1, unsigned __int16 a2)
{
  return SetOrClrWF(1, a1, a2, 1);
}
