/*
 * XREFs of pqdownheap @ 0x140600D24
 * Callers:
 *     build_tree @ 0x140600320 (build_tree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pqdownheap(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  __int64 v4; // rbx
  __int64 v5; // r11
  __int64 v6; // r10
  unsigned __int16 v7; // ax
  __int64 v8; // r11
  unsigned __int16 v9; // ax
  __int64 v10; // rax
  int v11; // eax
  __int64 result; // rax

  v3 = 2 * a3;
  v4 = *(int *)(a1 + 4LL * a3 + 3064);
  while ( 1 )
  {
    v11 = *(_DWORD *)(a1 + 5356);
    if ( v3 > v11 )
      break;
    if ( v3 < v11 )
    {
      v5 = *(int *)(a1 + 4LL * v3 + 3064);
      v6 = *(int *)(a1 + 4LL * v3 + 3068);
      v7 = *(_WORD *)(a2 + 4 * v6);
      if ( v7 < *(_WORD *)(a2 + 4 * v5)
        || v7 == *(_WORD *)(a2 + 4 * v5) && *(_BYTE *)(v6 + a1 + 5364) <= *(_BYTE *)(v5 + a1 + 5364) )
      {
        ++v3;
      }
    }
    v8 = *(int *)(a1 + 4LL * v3 + 3064);
    v9 = *(_WORD *)(a2 + 4 * v4);
    if ( v9 < *(_WORD *)(a2 + 4 * v8)
      || v9 == *(_WORD *)(a2 + 4 * v8) && *(_BYTE *)(v4 + a1 + 5364) <= *(_BYTE *)(v8 + a1 + 5364) )
    {
      break;
    }
    v10 = a3;
    a3 = v3;
    v3 *= 2;
    *(_DWORD *)(a1 + 4 * v10 + 3064) = v8;
  }
  result = a3;
  *(_DWORD *)(a1 + 4LL * a3 + 3064) = v4;
  return result;
}
