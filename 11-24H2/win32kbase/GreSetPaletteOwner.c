/*
 * XREFs of GreSetPaletteOwner @ 0x1401C3A90
 * Callers:
 *     <none>
 * Callees:
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetPaletteOwner(__int64 a1, int a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a1 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 3008LL) + 120LL) )
    return (unsigned int)HmgSetOwner(a1, a2, 8);
  return v4;
}
