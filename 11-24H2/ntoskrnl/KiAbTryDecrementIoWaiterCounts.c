/*
 * XREFs of KiAbTryDecrementIoWaiterCounts @ 0x140407BF0
 * Callers:
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbTryDecrementIoWaiterCounts(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r8
  char result; // al

  v2 = (_BYTE *)(a2 + 84);
  if ( (*(_BYTE *)(a1 + 11) & 2) != 0 )
  {
    --*v2;
    result = *(_BYTE *)(a1 + 11) & 0xFD;
    *(_BYTE *)(a1 + 11) = result;
  }
  if ( (*(_BYTE *)(a1 + 11) & 4) != 0 )
  {
    *(_DWORD *)v2 ^= ((unsigned __int16)*(_DWORD *)v2 ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)v2 >> 8) - 1) << 8)) & 0x7F00;
    result = *(_BYTE *)(a1 + 11) & 0xFB;
    *(_BYTE *)(a1 + 11) = result;
  }
  return result;
}
