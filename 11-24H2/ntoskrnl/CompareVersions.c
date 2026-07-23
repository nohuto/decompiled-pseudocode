/*
 * XREFs of CompareVersions @ 0x1405EBC30
 * Callers:
 *     RtlGetProductInfo @ 0x1405EBC70 (RtlGetProductInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVersions(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax

  if ( *a1 <= *a2 )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    v2 = a1[1];
    if ( v2 <= a2[1] )
    {
      if ( v2 < a2[1] )
        return 0xFFFFFFFFLL;
      v3 = a1[2];
      if ( v3 <= a2[2] )
      {
        if ( v3 >= a2[2] )
        {
          v4 = a1[3];
          if ( v4 <= a2[3] )
            return (unsigned int)-(v4 < a2[3]);
          return 1LL;
        }
        return 0xFFFFFFFFLL;
      }
    }
  }
  return 1LL;
}
