/*
 * XREFs of Xp10ComputeAndWriteCrc @ 0x140789F84
 * Callers:
 *     Xp10CompressBuffer @ 0x1407899D4 (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ComputeAndWriteCrc(unsigned __int16 *a1, unsigned __int8 **a2, __int64 a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // r11d
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned __int8 *v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rdi
  char v11; // al
  unsigned int v12; // ecx
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int8 *v16; // r10
  __int64 v17; // rbx
  __int64 v18; // rdi
  char v19; // al
  unsigned __int64 v20; // rcx

  v3 = *(_DWORD *)(a3 + 8);
  if ( (v3 & 7) != 0 )
  {
    v3 = (v3 & 0xFFFFFFF8) + 8;
    *(_DWORD *)(a3 + 8) = v3;
  }
  if ( ((*a1 >> 14) & 1) == 0 )
  {
    v5 = v3 + 64;
    if ( v3 + 64 <= *(_DWORD *)(a3 + 12) )
    {
      v14 = *((_DWORD *)a2 + 3);
      v15 = -1LL;
      if ( v14 )
      {
        v16 = *a2;
        v17 = v14;
        do
        {
          v18 = 8LL;
          v15 ^= *v16;
          do
          {
            v19 = v15;
            v20 = v15 >> 1;
            v15 = (v15 >> 1) ^ 0x9A6C9329AC4BC9B5uLL;
            if ( (v19 & 1) == 0 )
              v15 = v20;
            --v18;
          }
          while ( v18 );
          ++v16;
          --v17;
        }
        while ( v17 );
      }
      *(_QWORD *)(((unsigned __int64)v3 >> 3) + *(_QWORD *)a3) = ~v15;
      goto LABEL_23;
    }
    return 3221225507LL;
  }
  v5 = v3 + 32;
  if ( v3 + 32 > *(_DWORD *)(a3 + 12) )
    return 3221225507LL;
  v6 = *((_DWORD *)a2 + 3);
  v7 = -1;
  if ( v6 )
  {
    v8 = *a2;
    v9 = v6;
    do
    {
      v10 = 8LL;
      v7 ^= *v8;
      do
      {
        v11 = v7;
        v12 = v7 >> 1;
        v7 = (v7 >> 1) ^ 0x82F63B78;
        if ( (v11 & 1) == 0 )
          v7 = v12;
        --v10;
      }
      while ( v10 );
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  *(_DWORD *)(((unsigned __int64)v3 >> 3) + *(_QWORD *)a3) = ~v7;
LABEL_23:
  *(_DWORD *)(a3 + 8) = v5;
  return 0LL;
}
