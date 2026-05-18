/*
 * XREFs of sub_180036C90 @ 0x180036C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180036C90(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  _BYTE *v6; // rdx
  bool v9; // cl
  bool v10; // al
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx

  v6 = (_BYTE *)(a1 + 112);
  v9 = (a5 & 1) != 0 && (*v6 & 4) != 0;
  v10 = (a5 & 2) != 0 && (*v6 & 2) != 0;
  if ( v9 || v10 )
    goto LABEL_44;
  v11 = **(_QWORD **)(a1 + 56);
  if ( (*v6 & 2) != 0 )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = **(_QWORD **)(a1 + 64);
    if ( v12 && *(_QWORD *)(a1 + 104) < v12 )
      *(_QWORD *)(a1 + 104) = v12;
  }
  v13 = *(__int64 **)(a1 + 24);
  v14 = *v13;
  v15 = (*(_QWORD *)(a1 + 104) - *v13) >> 1;
  if ( !a4 )
  {
    v17 = 0LL;
    goto LABEL_31;
  }
  v16 = a4 - 1;
  if ( !v16 )
  {
    if ( (a5 & 3) != 3 )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( !v11 && v14 )
          goto LABEL_44;
        v18 = v11;
      }
      else
      {
        if ( (a5 & 2) == 0 || !v12 && v14 )
          goto LABEL_44;
        v18 = v12;
      }
      v17 = (__int64)(v18 - v14) >> 1;
      goto LABEL_31;
    }
LABEL_44:
    *a2 = -1LL;
    goto LABEL_45;
  }
  if ( v16 != 1 )
    goto LABEL_44;
  v17 = (*(_QWORD *)(a1 + 104) - *v13) >> 1;
LABEL_31:
  v19 = v17 + a3;
  if ( v17 + a3 > v15 || v19 && ((a5 & 1) != 0 && !v11 || (a5 & 2) != 0 && !v12) )
    goto LABEL_44;
  v20 = v14 + 2 * v19;
  if ( (a5 & 1) != 0 && v11 )
  {
    v21 = (*(_QWORD *)(a1 + 104) - v20) >> 1;
    **(_QWORD **)(a1 + 24) = v14;
    **(_QWORD **)(a1 + 56) = v20;
    **(_DWORD **)(a1 + 80) = v21;
  }
  if ( (a5 & 2) != 0 && v12 )
  {
    v22 = **(int **)(a1 + 88);
    v23 = **(_QWORD **)(a1 + 64);
    **(_QWORD **)(a1 + 32) = v14;
    **(_QWORD **)(a1 + 64) = v20;
    **(_DWORD **)(a1 + 88) = (v23 + 2 * v22 - v20) >> 1;
  }
  *a2 = v19;
LABEL_45:
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
