/*
 * XREFs of PfpFileBuildReadList @ 0x1409376B0
 * Callers:
 *     PfpFileBuildReadSupport @ 0x140937944 (PfpFileBuildReadSupport.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfpFileBuildReadList(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // r8
  _DWORD *v11; // rcx
  int v12; // eax
  unsigned int *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r11d
  __int64 v17; // r8
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  __int64 Pool2; // rax

  if ( (*(_DWORD *)a2 & 1) != 0 && !a3 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x18uLL, 0x4C526650u);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_DWORD *)(Pool2 + 12) = 0;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_DWORD *)(Pool2 + 8) = 1;
      *a4 = Pool2;
      return 0LL;
    }
    return 3221225626LL;
  }
  v7 = (_DWORD *)(a2 + 16);
  v8 = 0LL;
  v9 = *(_DWORD *)(a2 + 16);
  if ( v9 )
  {
    v10 = v9;
    v11 = (_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
    do
    {
      v12 = *v11 >> 12;
      v11 += 4;
      v8 = (unsigned int)(v12 + v8 + 2);
      --v10;
    }
    while ( v10 );
    v13 = (unsigned int *)(a2 + 16);
  }
  else
  {
    v13 = (unsigned int *)(a2 + 16);
  }
  v14 = 8 * v8 + 16;
  if ( v14 <= 0xFFFFFFFF )
  {
    v15 = ExAllocatePool2(0x100uLL, (unsigned int)v14, 0x4C526650u);
    if ( v15 )
    {
      *(_OWORD *)v15 = 0LL;
      if ( (*(_DWORD *)a2 & 1) != 0 )
        *(_DWORD *)(v15 + 12) = 1;
      v16 = 0;
      if ( *v7 )
      {
        do
        {
          v17 = *(_QWORD *)(a2 + 24) + 16LL * v16;
          v18 = *(_QWORD *)v17 & 0xFFFFFFFFFFFFF000uLL;
          if ( (*(_BYTE *)(*(_QWORD *)a1 + 80LL) & 2) == 0 )
            v18 = *(_QWORD *)v17;
          v19 = *(_QWORD *)v17 + *(unsigned int *)(v17 + 8);
          while ( v18 < v19 )
          {
            *(_QWORD *)(v15 + 8LL * (unsigned int)(*(_DWORD *)(v15 + 8))++ + 16) = v18;
            v18 += 4096LL;
          }
          ++v16;
        }
        while ( v16 < *v13 );
      }
      *a4 = v15;
      return 0LL;
    }
    return 3221225626LL;
  }
  return 3221225621LL;
}
