/*
 * XREFs of LdrpFreeLoadContextOfNode @ 0x1800D8FB8
 * Callers:
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800D8FB8 (LdrpFreeLoadContextOfNode.c)
 * Callees:
 *     LdrpFreeLoadContextOfNode @ 0x1800D8FB8 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeLoadContext @ 0x1800D9060 (LdrpFreeLoadContext.c)
 */

void __fastcall LdrpFreeLoadContextOfNode(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx

  v2 = *a1;
  v5 = *a1 - 20;
  v6 = (_QWORD *)v5[22];
  if ( v6 && v6[5] == a2 )
  {
    while ( 1 )
    {
      LdrpFreeLoadContext(v6);
      if ( a1 == (_QWORD **)*v2 )
        break;
      v2 = (_QWORD *)v5[20];
      v5 = v2 - 20;
      v6 = (_QWORD *)v2[2];
    }
    v7 = v5[19];
    v8 = *(_QWORD **)(v7 + 40);
    if ( v8 )
    {
      v9 = *(_QWORD **)(v7 + 40);
      do
      {
        v9 = (_QWORD *)*v9;
        LdrpFreeLoadContextOfNode(v9[1], a2);
      }
      while ( v9 != v8 );
    }
  }
}
