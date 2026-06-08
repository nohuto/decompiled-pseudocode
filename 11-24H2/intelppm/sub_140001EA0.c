/*
 * XREFs of sub_140001EA0 @ 0x140001EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140001EA0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 i; // rdi
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 j; // rdi
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rbx
  int v18; // ecx
  __int64 v19; // r8
  unsigned __int64 v20; // rax

  if ( !a3 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a3 + 48);
  if ( !v4 || *(_DWORD *)(a3 + 24) != 2 )
    return 3221225485LL;
  if ( a1 == *(_QWORD *)v4 )
    return 0LL;
  v6 = a1 - *(_QWORD *)v4;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 16); i = (unsigned int)(i + 1) )
  {
    v8 = *(_QWORD *)(v4 + 24);
    v9 = *(_DWORD *)(v8 + 40 * i + 20);
    v10 = v8 + 40 * i;
    v11 = *(_DWORD *)(v10 + 16);
    if ( v11 == 64 )
      v12 = -1LL;
    else
      v12 = ((1LL << v11) - 1) << v9;
    if ( a2 )
      v13 = *a2;
    else
      v13 = __readmsr(*(_QWORD *)(v10 + 8));
    if ( (((v13 & v12) >> v9) & 1) != 0 )
      *(_QWORD *)(v10 + 32) += v6;
  }
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v4 + 32); *(_QWORD *)(v17 + 32) += v6 * ((v20 & v19) >> v16) )
  {
    v15 = *(_QWORD *)(v4 + 40);
    v16 = *(_DWORD *)(v15 + 40 * j + 20);
    v17 = v15 + 40 * j;
    v18 = *(_DWORD *)(v17 + 16);
    if ( v18 == 64 )
      v19 = -1LL;
    else
      v19 = ((1LL << v18) - 1) << v16;
    if ( a2 )
      v20 = *a2;
    else
      v20 = __readmsr(*(_QWORD *)(v17 + 8));
    j = (unsigned int)(j + 1);
  }
  *(_QWORD *)(v4 + 8) += v6;
  result = 0LL;
  *(_QWORD *)v4 = a1;
  return result;
}
