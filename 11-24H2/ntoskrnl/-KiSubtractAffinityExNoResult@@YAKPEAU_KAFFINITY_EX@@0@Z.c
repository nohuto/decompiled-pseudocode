/*
 * XREFs of ?KiSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x1404C91EC
 * Callers:
 *     KeSubtractAffinityEx2 @ 0x1402B2C40 (KeSubtractAffinityEx2.c)
 *     KeSubtractAffinityEx @ 0x1405B57C0 (KeSubtractAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSubtractAffinityExNoResult(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  unsigned __int16 Count; // r10
  unsigned __int16 i; // r8

  Count = a1->Count;
  if ( a1->Count >= a2->Count )
    Count = a2->Count;
  for ( i = 0; i < Count; ++i )
  {
    if ( (~a2->Bitmap[i] & a1->Bitmap[i]) != 0 )
      return 1LL;
  }
  while ( i < a1->Count )
  {
    if ( a1->Bitmap[i] )
      return 1LL;
    ++i;
  }
  return 0LL;
}
