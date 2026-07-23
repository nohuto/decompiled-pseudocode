/*
 * XREFs of MiCountBootDriverRegionPtes @ 0x140C56DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCountBootDriverRegionPtes(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rdx
  unsigned int v4; // r9d
  _QWORD *v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rdx

  v3 = *a2;
  v4 = 1;
  if ( (v3 & 1) != 0 )
  {
    v5 = *(_QWORD **)(a1 + 184);
    v6 = 0LL;
    if ( (v3 & 0x80u) == 0LL )
    {
      if ( a3 <= 1 )
        v6 = a3 == 1;
      else
        v4 = 0;
    }
    else
    {
      v6 = 1LL;
      if ( a3 > 1 )
      {
        v7 = (unsigned int)(a3 - 1);
        do
        {
          v6 <<= 9;
          --v7;
        }
        while ( v7 );
      }
    }
    *v5 += v6;
  }
  return v4;
}
