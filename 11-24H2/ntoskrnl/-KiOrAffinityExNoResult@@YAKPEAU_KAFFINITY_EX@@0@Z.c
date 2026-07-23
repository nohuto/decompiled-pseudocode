/*
 * XREFs of ?KiOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x1404C65EC
 * Callers:
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     KeOrAffinityEx @ 0x1405B5790 (KeOrAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOrAffinityExNoResult(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  struct _KAFFINITY_EX *v2; // r11
  unsigned __int16 Count; // r9
  unsigned __int16 v4; // r10
  unsigned __int16 i; // dx

  v2 = a2;
  Count = a1->Count;
  v4 = a2->Count;
  if ( a1->Count >= a2->Count )
  {
    v4 = a1->Count;
    Count = a2->Count;
    v2 = a1;
  }
  for ( i = 0; i < Count; ++i )
  {
    if ( a2->Bitmap[i] | a1->Bitmap[i] )
      return 1LL;
  }
  while ( i < v4 )
  {
    if ( v2->Bitmap[i] )
      return 1LL;
    ++i;
  }
  return 0LL;
}
