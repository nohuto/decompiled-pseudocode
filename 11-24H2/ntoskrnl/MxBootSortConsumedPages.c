/*
 * XREFs of MxBootSortConsumedPages @ 0x140C54350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MxBootSortConsumedPages(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rcx

  v2 = a2[5];
  if ( !a1[5] )
    return v2 != 0;
  if ( v2 )
  {
    v4 = *a1;
    if ( v4 >= *a2 )
      return v4 > *a2;
  }
  return -1;
}
