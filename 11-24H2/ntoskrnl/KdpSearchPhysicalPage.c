/*
 * XREFs of KdpSearchPhysicalPage @ 0x140B7A0E8
 * Callers:
 *     KdpSearchPhysicalPageRange @ 0x140B7A2F4 (KdpSearchPhysicalPageRange.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x140680E78 (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpSearchPhysicalPage(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned int i; // esi
  int v11; // r15d
  unsigned int v12; // esi
  unsigned int j; // r14d
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // edx
  int v18; // eax
  unsigned __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v20[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = a1 << 12;
  v6 = 0;
  if ( KdpSearchPfnValue )
  {
    v19 = 0LL;
    for ( i = 0; i < 0x1000; i += 8 )
    {
      if ( (int)MmDbgCopyMemory((char *)(v5 + i), &v19, 8u, 8u, a5 | 2u) >= 0 && ((v19 >> 12) & 0xFFFFFFFFFFLL) == a2 )
      {
        if ( (unsigned int)KdpSearchPageHitIndex < 0x1000 )
        {
          KdpSearchPageHits[KdpSearchPageHitIndex] = a1;
          KdpSearchPageHitOffsets[KdpSearchPageHitIndex++] = i;
        }
        if ( (a4 & 1) == 0 )
          return 1;
      }
    }
  }
  else
  {
    v11 = KdpSearchInProgress & 2;
    v20[0] = 0LL;
    if ( (KdpSearchInProgress & 0x3C) != 0 )
    {
      v12 = ((unsigned int)KdpSearchInProgress >> 2) & 0xF;
      if ( v12 > 8 )
        return 0LL;
    }
    else
    {
      v12 = 8;
    }
    for ( j = 0; j < 0x1000; j += v12 )
    {
      if ( (int)MmDbgCopyMemory((char *)(v5 + j), v20, v12, 0, a5 | 2u) >= 0 )
      {
        if ( v20[0] >= a2 && v20[0] <= a3 )
          goto LABEL_25;
        if ( !v11 )
        {
          v15 = a2 ^ v20[0];
          v16 = 64LL;
          v17 = 0;
          do
          {
            v18 = v17 + 1;
            if ( (v15 & 1) == 0 )
              v18 = v17;
            v15 >>= 1;
            v17 = v18;
            --v16;
          }
          while ( v16 );
          if ( v18 == 1 )
          {
LABEL_25:
            if ( (unsigned int)KdpSearchPageHitIndex < 0x1000 )
            {
              KdpSearchPageHits[KdpSearchPageHitIndex] = a1;
              KdpSearchPageHitOffsets[KdpSearchPageHitIndex++] = j;
            }
            if ( (a4 & 1) == 0 )
              return 1;
          }
        }
      }
    }
  }
  return v6;
}
