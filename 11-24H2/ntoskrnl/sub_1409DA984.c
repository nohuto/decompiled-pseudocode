/*
 * XREFs of sub_1409DA984 @ 0x1409DA984
 * Callers:
 *     sub_1409D9B08 @ 0x1409D9B08 (sub_1409D9B08.c)
 * Callees:
 *     sub_1409DAA1C @ 0x1409DAA1C (sub_1409DAA1C.c)
 *     sub_1409DB410 @ 0x1409DB410 (sub_1409DB410.c)
 */

__int64 __fastcall sub_1409DA984(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v4; // rax
  int v5; // edi
  int v6; // eax
  int v7; // eax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  if ( v1 )
  {
    v4 = v1 - 1;
    *(_QWORD *)(a1 + 64) = v4;
    if ( !v4 )
    {
      v5 = *(_DWORD *)(a1 + 72);
      while ( --v5 >= 0 )
      {
        v6 = *(_DWORD *)(a1 + 48);
        if ( v6 == 1 )
        {
          v7 = sub_1409DB410(a1, 16LL * v5 + *(_QWORD *)(a1 + 56) + 248LL);
        }
        else
        {
          if ( v6 )
            return (unsigned int)-1073741811;
          v7 = sub_1409DAA1C(a1, *(_QWORD *)(a1 + 56) + 4 * (3LL * v5 + 61));
        }
        v2 = v7;
        if ( v7 < 0 )
          return v2;
        --*(_DWORD *)(a1 + 72);
      }
    }
  }
  return v2;
}
