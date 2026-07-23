/*
 * XREFs of MiScrubLargePageRegions @ 0x1406F60D4
 * Callers:
 *     MiScrubNode @ 0x140A2DE94 (MiScrubNode.c)
 * Callees:
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiScrubInterrupted @ 0x1404845F4 (MiScrubInterrupted.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 *     MiScrubActiveLargePage @ 0x1407FE198 (MiScrubActiveLargePage.c)
 */

__int64 __fastcall MiScrubLargePageRegions(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  ULONG_PTR v12; // rsi
  __int64 v13; // rbp
  __int64 *v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int8 v17; // al

  v3 = a3;
  v4 = a2;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v8 = (-85 * (unsigned __int8)((a2 + 0x220000000000LL) >> 4)) & 0xF;
  if ( ((-85 * (unsigned __int8)((a2 + 0x220000000000LL) >> 4)) & 0xF) != 0 )
  {
    v9 = 16 - v8;
    if ( 16 - v8 >= a3 )
      return 0LL;
    v7 = v9 - 0x5555555555555555LL * ((a2 + 0x220000000000LL) >> 4);
    v4 = 48 * v9 + a2;
    v3 = a3 - v9;
  }
  v10 = v3 & 0xF;
  if ( (v3 & 0xF) != 0 )
  {
    if ( v10 >= v3 )
      return 0LL;
    v3 -= v10;
  }
  v11 = 48 * v3 + v4;
  v12 = v3 + v7;
  while ( v3 )
  {
    v13 = 0LL;
    v14 = MiPageSizes;
    do
    {
      if ( ((*v14 - 1) & v12) == 0 )
        goto LABEL_13;
      v13 = (unsigned int)(v13 + 1);
      ++v14;
    }
    while ( (unsigned int)v13 < 2 );
    if ( (unsigned int)v13 > 2 )
    {
LABEL_17:
      v3 -= 16LL;
      v11 -= 768LL;
      v12 -= 16LL;
      continue;
    }
    do
    {
LABEL_13:
      v15 = MiPageSizes[v13];
      if ( v15 <= v3 && (unsigned int)MiGetPfnPageSizeIndex(v11 - 48 * v15) == (_DWORD)v13 )
        break;
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 <= 2 );
    if ( (unsigned int)v13 > 2 )
      goto LABEL_17;
    _mm_lfence();
    v16 = MiPageSizes[v13];
    v12 -= v16;
    v11 += -48 * v16;
    v17 = *(_BYTE *)(v11 + 34) & 7;
    if ( v17 > 1u )
    {
      if ( v17 == 6
        && (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
        && (unsigned __int16)*(_DWORD *)(v11 + 32) == 2
        && MiGetLeafVa(*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) <= 0x7FFFFFFEFFFFLL )
      {
        MiScrubActiveLargePage(a1, v12, (unsigned int)v13);
      }
    }
    else if ( !(unsigned int)MiScrubLargePage(a1, v12, v13) )
    {
      return v16 - 0x5555555555555555LL * ((v11 - a2) >> 4);
    }
    if ( MiScrubInterrupted(a1) )
      return v16 - 0x5555555555555555LL * ((v11 - a2) >> 4);
    v3 -= v16;
  }
  return 0LL;
}
