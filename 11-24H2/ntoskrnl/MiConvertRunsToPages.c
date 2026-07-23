/*
 * XREFs of MiConvertRunsToPages @ 0x1407F0508
 * Callers:
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 */

__int64 __fastcall MiConvertRunsToPages(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // r10d
  _QWORD *v10; // r11
  __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned int v13; // ecx
  __int64 *v14; // r8
  unsigned __int64 v15; // r9
  __int64 result; // rax
  __int64 v17; // r9
  __int64 v18; // r10
  unsigned int i; // ecx
  __int64 v20; // r8
  unsigned __int64 j; // rdx
  unsigned __int64 v22; // rax

  v4 = *(_DWORD *)(a1 + 4);
  v5 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    v10 = (_QWORD *)(a1 + 16);
    v11 = v4;
    do
    {
      v12 = *(v10 - 1);
      v5 += *v10;
      if ( v6 <= 1 )
      {
        if ( v12 == 0x8000000000000000uLL )
        {
          v6 = -1;
        }
        else
        {
          v13 = 0;
          v14 = MiPageSizes;
          do
          {
            v15 = *v14;
            if ( !(v12 % *v14) && !(*v10 % v15) )
              break;
            if ( v6 <= v13 )
              v6 = v13 + 1;
            if ( v15 == 512 )
              break;
            ++v13;
            ++v14;
          }
          while ( v13 < 3 );
        }
      }
      v10 += 2;
      --v11;
    }
    while ( v11 );
    if ( v6 > 1 )
      v6 = 3;
  }
  *a4 = v6;
  *a3 = v5;
  result = MiAllocatePool(0x40uLL, 8 * v5, 826698061);
  v17 = result;
  if ( result )
  {
    v18 = 0LL;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      v20 = *(_QWORD *)(a1 + 16LL * i + 16);
      for ( j = *(_QWORD *)(a1 + 16LL * i + 8); v20; --v20 )
      {
        *(_QWORD *)(v17 + 8 * v18) = j;
        v22 = j + 1;
        ++v18;
        if ( j == 0x8000000000000000uLL )
          v22 = 0x8000000000000000uLL;
        j = v22;
      }
    }
    return v17;
  }
  return result;
}
