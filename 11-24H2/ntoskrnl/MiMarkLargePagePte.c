/*
 * XREFs of MiMarkLargePagePte @ 0x140C52010
 * Callers:
 *     <none>
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 */

__int64 __fastcall MiMarkLargePagePte(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rcx

  if ( a3 != 3 )
  {
    v4 = *a2;
    if ( (v4 & 0x81) == 0x81 )
    {
      v5 = (v4 >> 12) & 0xFFFFFFFFFFLL;
      if ( v5 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v6 = 512LL;
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
        MiUpdateLargePageBitMap((unsigned __int64)&MiSystemPartition, v5, v6, 5);
      }
    }
  }
  return 0LL;
}
