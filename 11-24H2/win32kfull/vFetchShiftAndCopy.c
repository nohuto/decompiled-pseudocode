/*
 * XREFs of vFetchShiftAndCopy @ 0x140166B5C
 * Callers:
 *     ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x140166770 (-vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z.c)
 *     ?vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x140314FC0 (-vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x140166AEC (-CopyPattern@@YAXPEAKJJJ@Z.c)
 */

void __fastcall vFetchShiftAndCopy(__int64 a1)
{
  unsigned int *v1; // r11
  __int64 v2; // rdx
  unsigned int v3; // r9d
  __int64 v4; // rdi
  __int64 v5; // r10
  unsigned __int64 v6; // rbx
  unsigned int *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r10d
  __int64 v10; // rax

  v1 = *(unsigned int **)a1;
  v2 = *(unsigned int *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(_QWORD *)a1 + 4 * v2;
  v7 = (unsigned int *)(v4 + v5);
  if ( v3 == 8 )
  {
    v9 = v5 + 4;
    v10 = v9 - 8;
    if ( v9 < 8 )
      v10 = v9;
    CopyPattern(v1, v2, *(_DWORD *)(v10 + v4), *v7);
  }
  else
  {
    while ( (unsigned __int64)v1 < v6 )
    {
      *v1 = *v7;
      v8 = (_DWORD)v5 + 4 - v3;
      ++v1;
      if ( (int)v5 + 4 < v3 )
        v8 = (unsigned int)(v5 + 4);
      LODWORD(v5) = v8;
      v7 = (unsigned int *)(v4 + v8);
    }
  }
}
