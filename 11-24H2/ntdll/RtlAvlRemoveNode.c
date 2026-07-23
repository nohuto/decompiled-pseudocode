/*
 * XREFs of RtlAvlRemoveNode @ 0x180027B50
 * Callers:
 *     RtlDeleteFunctionTable @ 0x1800277A0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800279B0 (RtlDeleteGrowableFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x180032FD4 (RtlpTreeDoubleRotateNodes.c)
 */

void __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v4; // r10
  unsigned __int64 v6; // rdx
  char v7; // r10
  char v8; // bl
  _BYTE *v9; // rdi
  char v10; // bp
  __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  bool v13; // zf
  _QWORD *v14; // r11
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // r11
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  char v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rax
  char v33; // r8
  __int64 v34; // r11

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    if ( v4 )
    {
      if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
      {
        v31 = *(_QWORD **)(v2 + 8);
        v15 = *(_QWORD *)a2;
        v6 = *(_QWORD *)a2;
        v16 = 0;
        if ( v31 )
        {
          v16 = 1;
          do
          {
            v6 = v15;
            v15 = (unsigned __int64)v31;
            v31 = (_QWORD *)v31[1];
          }
          while ( v31 );
        }
        v17 = *(_QWORD *)v15;
      }
      else
      {
        v14 = *(_QWORD **)v4;
        v15 = *(_QWORD *)(a2 + 8);
        v6 = v15;
        v16 = 1;
        if ( *(_QWORD *)v4 )
        {
          v16 = 0;
          do
          {
            v6 = v15;
            v15 = (unsigned __int64)v14;
            v14 = (_QWORD *)*v14;
          }
          while ( v14 );
        }
        v17 = *(_QWORD *)(v15 + 8);
      }
      *(_QWORD *)v15 = v2;
      *(_QWORD *)(v15 + 8) = v4;
      v18 = *(_QWORD *)(v2 + 16);
      if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
      {
        *(_QWORD *)(v2 + 16) = v15 | v18 & 3;
        v19 = *(_QWORD *)(v4 + 16);
        if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
        {
          *(_QWORD *)(v4 + 16) = v15 | v19 & 3;
          if ( (*(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v6 )
          {
            *(_QWORD *)(v6 + 8LL * v16) = v17;
            if ( v17 )
            {
              if ( *(_QWORD *)(v17 + 16) != v15 )
                goto LABEL_18;
              *(_QWORD *)(v17 + 16) = v6;
            }
            *(_QWORD *)(v15 + 16) = *(_QWORD *)(a2 + 16);
            v7 = 3;
            if ( !v16 )
              v7 = 1;
            v20 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v20 )
            {
              v21 = 0LL;
              if ( *(_QWORD *)(v20 + 8) == a2 )
                v21 = 8LL;
              if ( *(_QWORD *)(v21 + v20) == a2 )
              {
                *(_QWORD *)(v21 + v20) = v15;
                goto LABEL_8;
              }
            }
            else if ( *a1 == a2 )
            {
              *a1 = v15;
              goto LABEL_8;
            }
          }
        }
      }
LABEL_18:
      __fastfail(0x1Du);
    }
  }
  else
  {
    v2 = *(_QWORD *)(a2 + 8);
  }
  v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 16) != a2 )
      goto LABEL_18;
    *(_QWORD *)(v2 + 16) = v6;
  }
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 8) == a2 )
    {
      v7 = 3;
      *(_QWORD *)(v6 + 8) = v2;
      goto LABEL_8;
    }
    if ( *(_QWORD *)v6 == a2 )
    {
      v7 = 1;
      *(_QWORD *)v6 = v2;
      while ( 1 )
      {
LABEL_8:
        v8 = *(_BYTE *)(v6 + 16);
        v9 = (_BYTE *)(v6 + 16);
        v10 = v8 & 3;
        if ( (v8 & 3) == ((unsigned __int8)v7 ^ 2) )
        {
          *v9 = v8 & 0xFC;
          v11 = *(_QWORD *)v9;
        }
        else
        {
          if ( !v10 )
          {
            *v9 = v7 | v8 & 0xFC;
            return;
          }
          v11 = *(_QWORD *)v9;
          v22 = *(_QWORD *)v6;
          if ( v7 == 1 )
            v22 = *(_QWORD *)(v6 + 8);
          v23 = *(_BYTE *)(v22 + 16) & 3;
          if ( v23 == ((unsigned __int8)v7 ^ 2) )
          {
            v32 = RtlpTreeDoubleRotateNodes(a1, v6, v22, v7 == 1);
            *v9 &= 0xFCu;
            v6 = v32;
            v33 = *(_BYTE *)(v22 + 16);
            *(_BYTE *)(v22 + 16) = v33 & 0xFC;
            if ( v10 == (*(_BYTE *)(v32 + 16) & 3) )
            {
              *v9 ^= (v10 ^ *v9 ^ 0xFE) & 3;
            }
            else if ( v10 == ((*(_BYTE *)(v32 + 16) ^ 0xFE) & 3) )
            {
              *(_BYTE *)(v22 + 16) = v33 ^ (v33 ^ v8) & 3;
            }
            *(_BYTE *)(v32 + 16) &= 0xFCu;
          }
          else
          {
            if ( (*(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
              goto LABEL_18;
            v24 = 8LL;
            if ( v7 != 1 )
              v24 = 0LL;
            if ( *(_QWORD *)(v24 + v6) != v22 )
              goto LABEL_18;
            v25 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( (v11 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            {
              if ( v25[1] == v6 )
              {
                v25[1] = v22;
              }
              else
              {
                if ( *v25 != v6 )
                  goto LABEL_18;
                *v25 = v22;
              }
            }
            else
            {
              if ( *a1 != v6 )
                goto LABEL_18;
              *a1 = v22;
            }
            v26 = 0LL;
            *(_QWORD *)(v22 + 16) ^= (*(_QWORD *)(v22 + 16) ^ v11) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v7 != 1 )
              v26 = 8LL;
            v27 = *(_QWORD *)(v26 + v22);
            if ( v27 )
            {
              v34 = *(_QWORD *)(v27 + 16);
              if ( (v34 & 0xFFFFFFFFFFFFFFFCuLL) != v22 )
                goto LABEL_18;
              *(_QWORD *)(v27 + 16) = v6 | v34 & 3;
            }
            v28 = 0LL;
            if ( v7 == 1 )
              v28 = 8LL;
            *(_QWORD *)(v28 + v6) = v27;
            v29 = 0LL;
            if ( v7 != 1 )
              v29 = 8LL;
            *(_QWORD *)(v29 + v22) = v6;
            *(_QWORD *)v9 &= 3uLL;
            *(_QWORD *)v9 |= v22;
            v30 = *(_BYTE *)(v22 + 16);
            if ( !v23 )
            {
              *(_BYTE *)(v22 + 16) = v30 ^ (v7 ^ v30 ^ 0xFE) & 3;
              return;
            }
            v6 = v22;
            *(_BYTE *)(v22 + 16) = v30 & 0xFC;
            *v9 &= 0xFCu;
          }
        }
        v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v12 )
          return;
        v13 = *(_QWORD *)(v12 + 8) == v6;
        v7 = 3;
        v6 = v12;
        if ( !v13 )
          v7 = 1;
      }
    }
    goto LABEL_18;
  }
  if ( *a1 != a2 )
    goto LABEL_18;
  *a1 = v2;
}
