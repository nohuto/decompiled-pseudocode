/*
 * XREFs of MiObtainProtoBaseFromNode @ 0x14041FDF0
 * Callers:
 *     MiGetPrototypePteRanges @ 0x14041FB48 (MiGetPrototypePteRanges.c)
 *     MiGetPrototypePteBoundaries @ 0x140693E78 (MiGetPrototypePteBoundaries.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140693F18 (MiReplaceSystemProtoPtesNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiObtainProtoBaseFromNode(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  unsigned int v5; // r8d
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8

  v2 = a1[3];
  result = 0LL;
  *a2 = 0LL;
  v5 = v2 & 7;
  if ( !v5 )
  {
    v6 = *(a1 - 14);
    v7 = *((unsigned int *)a1 - 19);
LABEL_3:
    *a2 = v7;
    return v6;
  }
  v8 = v5 - 1LL;
  if ( !v8 )
  {
    v9 = *(a1 - 6);
    *a2 = *((unsigned int *)a1 - 3);
    return v9;
  }
  v10 = v8 - 1;
  if ( v10 )
  {
    v14 = v10 - 1;
    if ( !v14 )
    {
      v15 = a1[6];
      *a2 = a1[4];
      return v15;
    }
    if ( v14 == 1 )
    {
      v6 = a1[4];
      v7 = a1[5];
      goto LABEL_3;
    }
  }
  else
  {
    v11 = *(a1 - 7) + 128LL;
    v12 = *(_QWORD *)(*(a1 - 7) + 136LL);
    do
    {
      v13 = *(unsigned int *)(v11 + 44);
      v11 = *(_QWORD *)(v11 + 16);
      result += v13;
    }
    while ( v11 );
    *a2 = result;
    return v12;
  }
  return result;
}
