/*
 * XREFs of RtlpTreeDoubleRotateNodes @ 0x1402917F4
 * Callers:
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpTreeDoubleRotateNodes(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rcx

  v4 = *(_QWORD *)a3;
  if ( !a4 )
    v4 = *(_QWORD *)(a3 + 8);
  if ( (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
    goto LABEL_4;
  v14 = a4 ^ 1LL;
  v15 = a4;
  if ( *(_QWORD *)(a3 + 8 * v14) != v4
    || *(_QWORD *)(a2 + 8LL * a4) != a3
    || (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
  {
    goto LABEL_4;
  }
  *(_QWORD *)(a2 + 8LL * a4) = v4;
  *(_QWORD *)(v4 + 16) = a2 | *(_DWORD *)(v4 + 16) & 3;
  v6 = *(_QWORD *)(v4 + 8LL * a4);
  if ( v6 )
  {
    v16 = *(_QWORD *)(v6 + 16);
    if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
      goto LABEL_4;
    *(_QWORD *)(v6 + 16) = a3 | v16 & 3;
  }
  *(_QWORD *)(a3 + 8 * v14) = v6;
  v7 = a4 ^ 1;
  *(_QWORD *)(v4 + 8 * v15) = a3;
  *(_QWORD *)(a3 + 16) = v4 | *(_DWORD *)(a3 + 16) & 3;
  if ( (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2
    || (v8 = (unsigned int)v7, v9 = v7 ^ 1, *(_QWORD *)(a2 + 8 * v9) != v4) )
  {
LABEL_4:
    __fastfail(0x1Du);
  }
  v10 = *(_QWORD *)(a2 + 16);
  v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (v10 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( v11[1] == a2 )
    {
      v11[1] = v4;
    }
    else
    {
      if ( *v11 != a2 )
        goto LABEL_4;
      *v11 = v4;
    }
  }
  else
  {
    if ( *a1 != a2 )
      goto LABEL_4;
    *a1 = v4;
  }
  *(_QWORD *)(v4 + 16) ^= (v10 ^ *(_QWORD *)(v4 + 16)) & 0xFFFFFFFFFFFFFFFCuLL;
  v12 = *(_QWORD *)(v4 + 8 * v8);
  if ( v12 )
  {
    v17 = *(_QWORD *)(v12 + 16);
    if ( (v17 & 0xFFFFFFFFFFFFFFFCuLL) == v4 )
    {
      *(_QWORD *)(v12 + 16) = a2 | v17 & 3;
      goto LABEL_12;
    }
    goto LABEL_4;
  }
LABEL_12:
  result = v4;
  *(_QWORD *)(a2 + 8 * v9) = v12;
  *(_QWORD *)(v4 + 8 * v8) = a2;
  *(_QWORD *)(a2 + 16) = v4 | *(_DWORD *)(a2 + 16) & 3;
  return result;
}
