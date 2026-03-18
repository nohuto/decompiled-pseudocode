/*
 * XREFs of MiCheckMdlSlabFragmentation @ 0x1403B67F4
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1403B5490 (MiFreeUnusedSlabPages.c)
 *     MiDemoteSlabEntriesDpc @ 0x14044E510 (MiDemoteSlabEntriesDpc.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x14045CB68 (MiGetSlabCurrentTime.c)
 */

__int64 __fastcall MiCheckMdlSlabFragmentation(__int64 a1, int a2)
{
  unsigned int v3; // r10d
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // rsi
  __int64 SlabCurrentTime; // r8
  unsigned __int64 v18; // r11
  unsigned int v19; // [rsp+40h] [rbp+8h]

  v3 = 0;
  v19 = 0;
  v5 = LODWORD(MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3]);
  v6 = v5 * *(_QWORD *)(a1 + 120);
  if ( !v6 )
    return v3;
  v7 = *(_QWORD *)(a1 + 96);
  v8 = *(_QWORD *)(a1 + 104);
  if ( v8 )
  {
    if ( v7 < v8 + v5 )
      return v3;
    v7 -= v8;
  }
  v9 = *(_QWORD *)(a1 + 24);
  v10 = 10LL;
  v11 = *(_QWORD *)(v9 + 18688);
  if ( v7 >= v11 / 0xA )
  {
    v16 = *(_QWORD *)(v9 + 18512);
    LOBYTE(v19) = 10;
    v13 = v16 / 0xA;
    if ( v11 > v16 / 0xA )
    {
      if ( v11 > v16 >> 2 )
      {
        if ( v11 > v16 >> 1 )
          goto LABEL_18;
        LOBYTE(v10) = 13;
      }
      else
      {
        LOBYTE(v10) = 12;
      }
    }
    else
    {
      LOBYTE(v10) = 11;
    }
    LOBYTE(v19) = v10;
LABEL_18:
    v14 = (v11 >> 1) + (v11 >> 2);
    if ( v7 < v14 || (LOBYTE(v19) = 20, v13 = v16 / 0x14, v11 > v16 / 0x14) )
    {
LABEL_22:
      if ( a2 )
        return v19;
      SlabCurrentTime = MiGetSlabCurrentTime(v14, v13, v10);
      if ( SlabCurrentTime
         - *(_QWORD *)(57216LL * *(unsigned int *)(a1 + 132) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 57016) >= v18
        && (unsigned __int64)(SlabCurrentTime - *(_QWORD *)(a1 + 168)) >= 0x2FAF080
        && (*(_DWORD *)(a1 + 136) & 1) == 0 )
      {
        return v19;
      }
      return v3;
    }
    LOBYTE(v10) = 21;
LABEL_21:
    LOBYTE(v19) = v10;
    goto LABEL_22;
  }
  v12 = 100 * v7 / v6;
  v13 = (v6 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v14 = 5 * (10 - v6 / 0xFA00);
  if ( (__int64)v14 < 10 )
    v14 = 10LL;
  if ( v12 > v14 )
  {
    LOBYTE(v10) = 100;
    BYTE2(v19) = v12;
    HIBYTE(v19) = v14;
    goto LABEL_21;
  }
  return v3;
}
