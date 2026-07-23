/*
 * XREFs of IopMemFindSuitableRange @ 0x140723780
 * Callers:
 *     <none>
 * Callees:
 *     ArbFindSuitableRange @ 0x140702E90 (ArbFindSuitableRange.c)
 */

char __fastcall IopMemFindSuitableRange(_QWORD *a1, __int64 a2)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 44LL) & 1) != 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  return ArbFindSuitableRange(a1, a2);
}
