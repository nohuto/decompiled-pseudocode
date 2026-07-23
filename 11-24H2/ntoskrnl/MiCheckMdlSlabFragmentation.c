/*
 * XREFs of MiCheckMdlSlabFragmentation @ 0x14048FD10
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x140354C04 (MiFreeUnusedSlabPages.c)
 *     MiDemoteSlabEntriesDpc @ 0x14043B750 (MiDemoteSlabEntriesDpc.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x140263454 (MiGetSlabCurrentTime.c)
 */

__int64 __fastcall MiCheckMdlSlabFragmentation(__int64 a1, int a2)
{
  unsigned int v3; // r10d
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r9
  signed __int64 v12; // rcx
  unsigned __int64 v14; // rsi
  char v15; // r8
  char v16; // r8
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
  v10 = *(_QWORD *)(v9 + 18688);
  if ( v7 >= v10 / 0xA )
  {
    v14 = *(_QWORD *)(v9 + 18512);
    LOBYTE(v19) = 10;
    if ( v10 > v14 / 0xA )
    {
      if ( v10 > v14 >> 2 )
      {
        if ( v10 > v14 >> 1 )
          goto LABEL_18;
        v15 = 13;
      }
      else
      {
        v15 = 12;
      }
    }
    else
    {
      v15 = 11;
    }
    LOBYTE(v19) = v15;
LABEL_18:
    if ( v7 < (v10 >> 1) + (v10 >> 2) || (LOBYTE(v19) = 20, v10 > v14 / 0x14) )
    {
LABEL_22:
      if ( a2 )
        return v19;
      SlabCurrentTime = MiGetSlabCurrentTime();
      if ( SlabCurrentTime
         - *(_QWORD *)(57216LL * *(unsigned int *)(a1 + 132) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 57016) >= v18
        && (unsigned __int64)(SlabCurrentTime - *(_QWORD *)(a1 + 168)) >= 0x2FAF080
        && (*(_DWORD *)(a1 + 136) & 1) == 0 )
      {
        return v19;
      }
      return v3;
    }
    v16 = 21;
LABEL_21:
    LOBYTE(v19) = v16;
    goto LABEL_22;
  }
  v11 = 100 * v7 / v6;
  v12 = 5 * (10 - v6 / 0xFA00);
  if ( v12 < 10 )
    v12 = 10LL;
  if ( v11 > v12 )
  {
    v16 = 100;
    BYTE2(v19) = v11;
    HIBYTE(v19) = v12;
    goto LABEL_21;
  }
  return v3;
}
