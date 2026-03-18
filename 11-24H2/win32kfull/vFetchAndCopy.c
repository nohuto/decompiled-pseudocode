/*
 * XREFs of vFetchAndCopy @ 0x1401666F4
 * Callers:
 *     ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1401662D0 (-vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x140314FC0 (-vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 *     ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1403151CC (-vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x140166AEC (-CopyPattern@@YAXPEAKJJJ@Z.c)
 */

void __fastcall vFetchAndCopy(__int64 a1)
{
  int *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // r8
  unsigned int *v4; // r10
  __int64 v5; // rdx
  int *v6; // r9
  unsigned __int64 v7; // rcx
  int *v8; // rax
  int *v9; // r8
  int v10; // r9d

  v1 = *(int **)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = *(unsigned int *)(a1 + 20);
  v4 = *(unsigned int **)a1;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = (int *)((char *)v1 + v2);
  v7 = *(_QWORD *)a1 + 4 * v5;
  if ( (_DWORD)v3 == 8 )
  {
    v9 = v6 + 1;
    v10 = *v6;
    if ( (_DWORD)v2 )
      v9 = v1;
    CopyPattern(v4, v5, *v9, v10);
  }
  else
  {
    while ( (unsigned __int64)v4 < v7 )
    {
      *v4 = *v6;
      v8 = v6 + 1;
      ++v4;
      v6 = v1;
      if ( v8 != (int *)((char *)v1 + v3) )
        v6 = v8;
    }
  }
}
