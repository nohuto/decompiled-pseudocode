/*
 * XREFs of AsiPopulateHashes @ 0x14065F208
 * Callers:
 *     ApiSetComposeSchema @ 0x14065EA7C (ApiSetComposeSchema.c)
 * Callees:
 *     qsort @ 0x1404FC5E0 (qsort.c)
 */

__int64 __fastcall AsiPopulateHashes(unsigned int *a1)
{
  size_t v1; // rsi
  __int64 *v2; // r14
  size_t v3; // rax
  unsigned int v5; // ebp
  unsigned int v6; // r15d
  unsigned int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int16 *v13; // r12
  unsigned int v14; // ecx
  __int64 v15; // r13
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  char *v18; // rdi
  unsigned int i; // r8d

  v1 = a1[3];
  v2 = AsiPrimeArray;
  v3 = v1;
  v5 = 0;
  while ( 2 )
  {
    v6 = *(_DWORD *)v2;
    v7 = 0;
    if ( (_DWORD)v1 )
    {
      v8 = 0LL;
      v9 = 0LL;
      do
      {
        v10 = 0;
        v11 = v9 + a1[4];
        v12 = v8 + a1[5];
        v13 = (unsigned __int16 *)((char *)a1 + *(unsigned int *)((char *)a1 + v11 + 4));
        v14 = *(unsigned int *)((char *)a1 + v11 + 12) >> 1;
        if ( v14 )
        {
          v15 = v14;
          do
          {
            v16 = *v13++;
            v17 = v16 + 32;
            if ( (unsigned __int16)(v16 - 65) > 0x19u )
              v17 = v16;
            v10 = v17 + v6 * v10;
            --v15;
          }
          while ( v15 );
        }
        *(unsigned int *)((char *)a1 + v12 + 4) = v7;
        v9 += 24LL;
        ++v7;
        *(unsigned int *)((char *)a1 + v12) = v10;
        v8 += 8LL;
      }
      while ( v7 < (unsigned int)v1 );
      v3 = v1;
    }
    v18 = (char *)a1 + a1[5];
    qsort(v18, v3, 8uLL, AsiSortHashTableHelper);
    for ( i = 1; ; ++i )
    {
      if ( i >= (unsigned int)v1 )
      {
        a1[6] = v6;
        return 1LL;
      }
      if ( *(_DWORD *)&v18[8 * i - 8] == *(_DWORD *)&v18[8 * i] )
        break;
    }
    ++v5;
    v2 = (__int64 *)((char *)v2 + 4);
    v3 = v1;
    if ( v5 < 0x64 )
      continue;
    break;
  }
  return 0LL;
}
