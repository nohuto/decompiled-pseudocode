/*
 * XREFs of MiDetermineCoalescedLargePageHeatState @ 0x140423F5C
 * Callers:
 *     MiLargePagePromote @ 0x140423C14 (MiLargePagePromote.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDetermineCoalescedLargePageHeatState(unsigned int a1, char a2, int a3, __int64 a4, _DWORD *a5)
{
  if ( (HvlEnlightenments & 0x8400000) == 0 || a1 > 1 && (HvlEnlightenments & 0x8000000) != 0 )
  {
LABEL_7:
    if ( (HvlEnlightenments & 0x200000) != 0 && (!a4 || (*(_DWORD *)(a4 + 15184) & 2) == 0) )
      return (a2 & 1) == 0;
    return 1;
  }
  if ( a4 && (*(_DWORD *)(a4 + 15184) & 2) != 0 )
  {
    if ( (a1 <= 1 || (HvlEnlightenments & 0x8000000) == 0) && (*(_DWORD *)(a4 + 15184) & 2) == 0 )
      return (a2 & 1) == 0;
    goto LABEL_7;
  }
  if ( a3 == 1 )
    return (a2 & 1) == 0;
  if ( (a2 & 2) != 0 )
    *a5 = 1;
  return 0;
}
