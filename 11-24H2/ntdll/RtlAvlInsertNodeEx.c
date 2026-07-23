/*
 * XREFs of RtlAvlInsertNodeEx @ 0x1800333C0
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x1800335A0 (RtlAddGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DC260 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800ECBF0 (RtlAddFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x180032FD4 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  char v7; // bp
  _BYTE *v8; // rsi
  char v9; // bl
  unsigned __int64 v10; // r8
  char v11; // r9
  _BOOL8 v12; // r9
  _BOOL8 v13; // r10
  _QWORD *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9

  LOBYTE(v4) = 0;
  a4[2] = a2;
  *a4 = 0LL;
  v5 = (unsigned __int64)a4;
  a4[1] = 0LL;
  if ( !a2 )
  {
    *a1 = (unsigned __int64)a4;
    return v4;
  }
  *(_QWORD *)(a2 + 8LL * a3) = a4;
  while ( 1 )
  {
    v7 = *(_BYTE *)(a2 + 16);
    v8 = (_BYTE *)(a2 + 16);
    LOBYTE(v4) = 2 * a3 - 1;
    v9 = v7 & 3;
    if ( (v7 & 3) != 0 )
      break;
    v5 = a2;
    LOBYTE(v4) = v7 ^ (v7 ^ v4) & 3;
    *v8 = v4;
    a2 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return v4;
    a3 = *(_QWORD *)a2 != v5;
  }
  if ( v9 != (v4 & 3) )
  {
    *v8 = v7 & 0xFC;
    return v4;
  }
  if ( (*(_BYTE *)(v5 + 16) & 3) == v9 )
  {
    v12 = !a3;
    if ( (*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v13 = v12;
      v14 = (_QWORD *)(a2 + 8LL * a3);
      if ( *v14 == v5 )
      {
        v15 = *(_QWORD *)v8;
        v4 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v4 )
        {
          if ( *(_QWORD *)(v4 + 8) == a2 )
          {
            *(_QWORD *)(v4 + 8) = v5;
          }
          else
          {
            if ( *(_QWORD *)v4 != a2 )
              goto LABEL_16;
            *(_QWORD *)v4 = v5;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_16;
          *a1 = v5;
        }
        *(_QWORD *)(v5 + 16) ^= (*(_QWORD *)(v5 + 16) ^ v15) & 0xFFFFFFFFFFFFFFFCuLL;
        v16 = *(_QWORD *)(v5 + 8 * v12);
        if ( !v16 )
        {
LABEL_23:
          *v14 = v16;
          *(_QWORD *)(v5 + 8 * v13) = a2;
          *(_QWORD *)v8 &= 3uLL;
          *(_QWORD *)v8 |= v5;
          *(_BYTE *)(v5 + 16) &= 0xFCu;
          *v8 &= 0xFCu;
          return v4;
        }
        v17 = *(_QWORD *)(v16 + 16);
        LOBYTE(v4) = v17 & 0xFC;
        if ( (v17 & 0xFFFFFFFFFFFFFFFCuLL) == v5 )
        {
          *(_QWORD *)(v16 + 16) = a2 | v17 & 3;
          goto LABEL_23;
        }
      }
    }
LABEL_16:
    __fastfail(0x1Du);
  }
  v4 = RtlpTreeDoubleRotateNodes(a1, a2, v5, a3);
  *v8 &= 0xFCu;
  v10 = v4;
  v11 = *(_BYTE *)(v5 + 16);
  *(_BYTE *)(v5 + 16) = v11 & 0xFC;
  if ( v9 == (*(_BYTE *)(v4 + 16) & 3) )
  {
    *v8 ^= (v9 ^ *v8 ^ 0xFE) & 3;
  }
  else if ( v9 == ((*(_BYTE *)(v4 + 16) ^ 0xFE) & 3) )
  {
    LOBYTE(v4) = v11 ^ (v7 ^ v11) & 3;
    *(_BYTE *)(v5 + 16) = v4;
  }
  *(_BYTE *)(v10 + 16) &= 0xFCu;
  return v4;
}
