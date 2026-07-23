/*
 * XREFs of MiAddRuns @ 0x1407EB45C
 * Callers:
 *     MmQueryMemoryRanges @ 0x1407EB9E0 (MmQueryMemoryRanges.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiAddRun @ 0x1407EB344 (MiAddRun.c)
 */

__int64 __fastcall MiAddRuns(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int64 a4, __int16 a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v7; // r14
  unsigned __int64 *v10; // r15
  unsigned __int64 v11; // rdi
  int v12; // ecx
  int v13; // ecx
  __int64 result; // rax

  v5 = a3;
  v7 = 0LL;
  v10 = (unsigned __int64 *)(qword_140E30100 + 8LL * (a3 & 0x3FFFFF));
  while ( v7 < a4 )
  {
    v11 = *v10;
    if ( a5 != 1025 && ((v11 >> 4) & 0x7FF) != a5
      || (v11 & 7) == 0
      || *(int *)(a1 + 32) >= 0
      && (unsigned int)MiPageToNode((unsigned __int64)(v5 & 0x3FFFFF) << 18) != *(_DWORD *)(a1 + 32) )
    {
      goto LABEL_22;
    }
    v12 = 0;
    switch ( v11 & 7 )
    {
      case 1uLL:
        v12 = (*(_BYTE *)(a1 + 4) & 2) != 0;
        break;
      case 2uLL:
        v13 = *(_DWORD *)(a1 + 4) >> 2;
        goto LABEL_16;
      case 3uLL:
        goto LABEL_13;
      case 4uLL:
        v13 = *(_DWORD *)(a1 + 4) >> 4;
        goto LABEL_16;
      case 5uLL:
LABEL_13:
        v13 = *(_DWORD *)(a1 + 4) >> 3;
LABEL_16:
        v12 = v13 & 1;
        break;
    }
    if ( (v11 & 8) != 0 && (*(_DWORD *)(a1 + 4) & 0x20) != 0 || v12 )
    {
      result = MiAddRun(a1, a2, v5);
      if ( (int)result < 0 )
        return result;
    }
LABEL_22:
    ++v7;
    ++v10;
    v5 = (v5 + 1) ^ ((v5 + 1) ^ v5) & 0xFFC00000;
  }
  return 0LL;
}
