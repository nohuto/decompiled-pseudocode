/*
 * XREFs of PfSnPrefetchCacheCtxStart @ 0x140AAB2C0
 * Callers:
 *     PfSnPrefetchCacheEntryGet @ 0x140949040 (PfSnPrefetchCacheEntryGet.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfSnPrefetchCacheCtxStart(__int64 a1)
{
  char *Pool2; // rax
  unsigned int v3; // r9d
  char *v4; // r8
  unsigned int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  int v10; // eax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 v14; // [rsp+48h] [rbp+10h]

  Pool2 = (char *)ExAllocatePool2(0x40uLL, 0x1000uLL, 0x66506343u);
  v3 = 0;
  v4 = Pool2;
  if ( Pool2 )
  {
    if ( (Pool2 + 256 >= Pool2 ? 0x20 : 0) != 0 )
      memset64(Pool2, a1 | 1, Pool2 + 256 >= Pool2 ? 0x20 : 0);
    v5 = 0;
    v6 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v7 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v8 = *(_QWORD **)(v7 + 8LL * v5);
          if ( ((unsigned __int8)v8 & 1) != 0 )
            break;
          *(_QWORD *)(v7 + 8LL * v5) = *v8;
          v14 = v6 & v8[1];
          v9 = (HIBYTE(v14)
              + 13 * (_BYTE)v14
              + 3 * (3 * BYTE1(v14) - BYTE4(v14))
              + 5 * (BYTE6(v14) - 3 * BYTE3(v14) + 3)
              - 7 * BYTE5(v14)
              - 11 * BYTE2(v14)) & 0x1F;
          *v8 = *(_QWORD *)&Pool2[8 * v9];
          *(_QWORD *)&Pool2[8 * v9] = v8;
        }
        ++v5;
      }
      while ( v5 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    v10 = *(_DWORD *)(a1 + 4) & 0x1F;
    *(_QWORD *)(a1 + 8) = v4;
    v11 = (_QWORD *)((unsigned __int64)(v4 + 263) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_DWORD *)(a1 + 4) = v10 | 0x400;
    v12 = &v11[15 * ((unsigned int)((_DWORD)v4 - (_DWORD)v11 + 4096) / 0x78uLL)];
    while ( v11 < v12 )
    {
      *v11 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v11;
      v11 += 15;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
