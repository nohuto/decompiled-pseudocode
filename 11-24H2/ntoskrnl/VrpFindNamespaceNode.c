/*
 * XREFs of VrpFindNamespaceNode @ 0x14092AEE0
 * Callers:
 *     VrpFindExactNamespaceNode @ 0x14092AEB8 (VrpFindExactNamespaceNode.c)
 *     VrpFindBestMatchNamespaceNode @ 0x14092B39C (VrpFindBestMatchNamespaceNode.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 */

unsigned __int16 *__fastcall VrpFindNamespaceNode(
        unsigned __int64 *a1,
        unsigned __int16 *a2,
        int a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // r8
  unsigned __int16 v6; // si
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // r12
  unsigned __int16 *v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int16 **v12; // rcx
  unsigned __int64 v13; // r14
  int v14; // r8d
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int16 i; // bp
  __int64 v20; // rdx
  __int64 v21; // rax
  const wchar_t *j; // r10
  __int64 k; // rax
  unsigned __int64 v24; // rcx
  __int64 m; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  const wchar_t *n; // r9
  __int64 ii; // rax
  unsigned __int64 v30; // r8
  unsigned __int16 *result; // rax
  unsigned __int64 v32; // [rsp+20h] [rbp-58h]
  unsigned __int16 *v33; // [rsp+28h] [rbp-50h]
  unsigned __int64 *v36; // [rsp+98h] [rbp+20h]

  v36 = a4;
  v5 = a1;
  v6 = 0;
  v7 = 0LL;
  v9 = 0LL;
  v32 = 0LL;
  v10 = 0LL;
  v33 = 0LL;
  if ( a1[6] )
  {
    while ( 2 )
    {
      if ( v9 < v5[6] )
      {
        if ( !is_mul_ok(v5[5], v9)
          || (v11 = v5[9], v12 = (unsigned __int16 **)(v11 + v5[5] * v9), (unsigned __int64)v12 < v11) )
        {
          v12 = 0LL;
        }
        v10 = *v12;
        v13 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v16 = 0LL;
        while ( 1 )
        {
          v17 = *a2;
          v18 = 2 * v15;
          for ( i = 0; 2 * v15 < v17; v18 = 2 * v15 )
          {
            if ( *(_WORD *)(*((_QWORD *)a2 + 1) + v18) != 92 )
              break;
            ++v15;
          }
          v20 = *((_QWORD *)a2 + 1);
          v21 = 2 * v15;
          for ( j = (const wchar_t *)(v20 + 2 * v15); 2 * v15 < v17; v21 = 2 * v15 )
          {
            if ( *(_WORD *)(v20 + v21) == 92 )
              break;
            ++v15;
            i += 2;
          }
          for ( k = 2 * v15; 2 * v15 < v17; k = 2 * v15 )
          {
            if ( *(_WORD *)(v20 + k) != 92 )
              break;
            ++v15;
          }
          v24 = *v10;
          for ( m = 2 * v16; 2 * v16 < v24; m = 2 * v16 )
          {
            if ( *(_WORD *)(*((_QWORD *)v10 + 1) + m) != 92 )
              break;
            ++v16;
          }
          v26 = *((_QWORD *)v10 + 1);
          v27 = 2 * v16;
          for ( n = (const wchar_t *)(v26 + 2 * v16); 2 * v16 < v24; v27 = 2 * v16 )
          {
            if ( *(_WORD *)(v26 + v27) == 92 )
              break;
            ++v16;
            v6 += 2;
          }
          for ( ii = 2 * v16; 2 * v16 < v24; ii = 2 * v16 )
          {
            if ( *(_WORD *)(v26 + ii) != 92 )
              break;
            ++v16;
          }
          if ( !i && !v6 )
          {
            if ( !v14 )
            {
              v7 = v13;
              goto LABEL_46;
            }
            goto LABEL_37;
          }
          v30 = i;
          if ( i >= v6 )
            v30 = v6;
          v14 = wcsnicmp(j, n, v30 >> 1);
          if ( v14 )
            goto LABEL_35;
          v14 = i - v6;
          if ( i != v6 )
            break;
          ++v13;
          v6 = 0;
        }
        if ( !i || v6 )
        {
LABEL_35:
          v6 = 0;
          v13 = 0LL;
          goto LABEL_38;
        }
LABEL_37:
        v6 = 0;
LABEL_38:
        if ( a3 == 1 && v13 > v32 )
        {
          v32 = v13;
          v33 = v10;
        }
        if ( v14 >= 0 )
        {
          v5 = a1;
          ++v9;
          continue;
        }
      }
      break;
    }
    v10 = v33;
    v7 = v32;
LABEL_46:
    a4 = v36;
  }
  if ( a5 )
    *a5 = v7;
  result = v10;
  if ( a4 )
    *a4 = v9;
  return result;
}
