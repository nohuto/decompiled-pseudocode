/*
 * XREFs of RebalanceNode @ 0x18008F1E0
 * Callers:
 *     RtlInsertElementGenericTableFullAvl @ 0x18008DDC0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x18008E510 (RtlInsertElementGenericTableAvl.c)
 *     DeleteNodeFromTree @ 0x18008EFF0 (DeleteNodeFromTree.c)
 * Callees:
 *     PromoteNode @ 0x1800E889C (PromoteNode.c)
 */

__int64 __fastcall RebalanceNode(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r11
  __int64 v3; // r11
  __int64 result; // rax
  __int64 v5; // r10
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  char v13; // r9
  __int64 v14; // r11

  v1 = *(char *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 24) == 1 )
    v2 = *(_QWORD *)(a1 + 16);
  else
    v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 24) == (_BYTE)v1 )
  {
    PromoteNode(v2);
    *(_BYTE *)(v3 + 24) = 0;
    result = 0LL;
    *(_BYTE *)(v5 + 24) = 0;
  }
  else
  {
    v6 = -v1;
    if ( *(char *)(v2 + 24) == -v1 )
    {
      if ( (_BYTE)v1 == 1 )
        v7 = *(_QWORD *)(v2 + 8);
      else
        v7 = *(_QWORD *)(v2 + 16);
      PromoteNode(v7);
      PromoteNode(v8);
      *(_BYTE *)(v11 + 24) = 0;
      *(_BYTE *)(v12 + 24) = 0;
      if ( *(_BYTE *)(v9 + 24) == v10 )
      {
        *(_BYTE *)(v11 + 24) = -v10;
        result = 0LL;
        *(_BYTE *)(v9 + 24) = 0;
      }
      else
      {
        if ( *(char *)(v9 + 24) == v6 )
          *(_BYTE *)(v12 + 24) = v10;
        *(_BYTE *)(v9 + 24) = 0;
        return 0LL;
      }
    }
    else
    {
      PromoteNode(v2);
      result = 1LL;
      *(_BYTE *)(v14 + 24) = -v13;
    }
  }
  return result;
}
