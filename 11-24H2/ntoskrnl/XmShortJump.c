/*
 * XREFs of XmShortJump @ 0x1404618F0
 * Callers:
 *     <none>
 * Callees:
 *     XmGetCodeByte @ 0x140461BC8 (XmGetCodeByte.c)
 */

__int64 __fastcall XmShortJump(__int64 a1)
{
  *(_DWORD *)(a1 + 104) = (unsigned __int16)(*(_WORD *)(a1 + 20) + (char)XmGetCodeByte(a1));
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 112) & 0xF;
  return 1LL;
}
