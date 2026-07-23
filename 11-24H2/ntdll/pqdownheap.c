/*
 * XREFs of pqdownheap @ 0x180154D30
 * Callers:
 *     build_tree @ 0x180154338 (build_tree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pqdownheap(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  __int64 v5; // r11
  __int64 v6; // rdx
  __int64 v7; // r10
  unsigned __int16 v8; // ax
  __int64 v9; // r10
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  int v12; // eax
  __int64 result; // rax

  v3 = 2 * a3;
  v5 = *(int *)(a1 + 4LL * a3 + 3064);
  while ( 1 )
  {
    v12 = *(_DWORD *)(a1 + 5356);
    if ( v3 > v12 )
      break;
    if ( v3 < v12 )
    {
      v6 = *(int *)(a1 + 4LL * v3 + 3068);
      v7 = *(int *)(a1 + 4LL * v3 + 3064);
      v8 = *(_WORD *)(a2 + 4 * v7);
      if ( *(_WORD *)(a2 + 4 * v6) < v8
        || *(_WORD *)(a2 + 4 * v6) == v8 && *(_BYTE *)(v6 + a1 + 5364) <= *(_BYTE *)(v7 + a1 + 5364) )
      {
        ++v3;
      }
    }
    v9 = *(int *)(a1 + 4LL * v3 + 3064);
    v10 = *(_WORD *)(a2 + 4 * v9);
    if ( *(_WORD *)(a2 + 4 * v5) < v10
      || *(_WORD *)(a2 + 4 * v5) == v10 && *(_BYTE *)(v5 + a1 + 5364) <= *(_BYTE *)(v9 + a1 + 5364) )
    {
      break;
    }
    v11 = a3;
    a3 = v3;
    v3 *= 2;
    *(_DWORD *)(a1 + 4 * v11 + 3064) = v9;
  }
  result = a3;
  *(_DWORD *)(a1 + 4LL * a3 + 3064) = v5;
  return result;
}
