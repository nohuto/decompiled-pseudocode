/*
 * XREFs of RtlpTreeDoubleRotateNodes @ 0x180032FD4
 * Callers:
 *     RtlAvlRemoveNode @ 0x180027B50 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1800333C0 (RtlAvlInsertNodeEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpTreeDoubleRotateNodes(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // r11
  __int64 v17; // rax

  v4 = *(_QWORD *)a3;
  if ( !a4 )
    v4 = *(_QWORD *)(a3 + 8);
  if ( (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
    goto LABEL_4;
  v6 = a4 ^ 1LL;
  v7 = a4;
  if ( *(_QWORD *)(a3 + 8 * v6) != v4
    || *(_QWORD *)(a2 + 8LL * a4) != a3
    || (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
  {
    goto LABEL_4;
  }
  *(_QWORD *)(a2 + 8LL * a4) = v4;
  *(_QWORD *)(v4 + 16) &= 3uLL;
  *(_QWORD *)(v4 + 16) |= a2;
  v8 = *(_QWORD *)(v4 + 8LL * a4);
  if ( v8 )
  {
    v16 = *(_QWORD *)(v8 + 16);
    if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
      goto LABEL_4;
    *(_QWORD *)(v8 + 16) = a3 | v16 & 3;
  }
  *(_QWORD *)(a3 + 8 * v6) = v8;
  v9 = a4 ^ 1;
  *(_QWORD *)(v4 + 8 * v7) = a3;
  *(_QWORD *)(a3 + 16) &= 3uLL;
  *(_QWORD *)(a3 + 16) |= v4;
  if ( (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2
    || (v10 = (unsigned int)v9, v11 = v9 ^ 1, *(_QWORD *)(a2 + 8 * v11) != v4) )
  {
LABEL_4:
    __fastfail(0x1Du);
  }
  v12 = *(_QWORD *)(a2 + 16);
  v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (v12 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( v13[1] == a2 )
    {
      v13[1] = v4;
    }
    else
    {
      if ( *v13 != a2 )
        goto LABEL_4;
      *v13 = v4;
    }
  }
  else
  {
    if ( *a1 != a2 )
      goto LABEL_4;
    *a1 = v4;
  }
  *(_QWORD *)(v4 + 16) ^= (v12 ^ *(_QWORD *)(v4 + 16)) & 0xFFFFFFFFFFFFFFFCuLL;
  v14 = *(_QWORD *)(v4 + 8 * v10);
  if ( v14 )
  {
    v17 = *(_QWORD *)(v14 + 16);
    if ( (v17 & 0xFFFFFFFFFFFFFFFCuLL) == v4 )
    {
      *(_QWORD *)(v14 + 16) = a2 | v17 & 3;
      goto LABEL_15;
    }
    goto LABEL_4;
  }
LABEL_15:
  result = v4;
  *(_QWORD *)(a2 + 8 * v11) = v14;
  *(_QWORD *)(v4 + 8 * v10) = a2;
  *(_QWORD *)(a2 + 16) &= 3uLL;
  *(_QWORD *)(a2 + 16) |= v4;
  return result;
}
