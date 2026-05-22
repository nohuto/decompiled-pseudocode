/*
 * XREFs of ?RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z @ 0x180063FCC
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001CD30 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

void __fastcall InputSiteHierarchyManager::RemoveInputSinkFromParentList(
        InputSiteHierarchyManager *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r9
  unsigned __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *j; // rsi
  _QWORD *k; // rax
  size_t v14; // rdi
  __int64 v15; // [rsp+40h] [rbp+18h]

  v15 = a3;
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)&v15 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = *((_QWORD *)this + 5);
  v9 = *(_QWORD **)(v8 + 16 * (v5 & *((_QWORD *)this + 8)) + 8);
  if ( v9 == *((_QWORD **)this + 3) )
  {
LABEL_8:
    v9 = 0LL;
  }
  else
  {
    v10 = *(_QWORD **)(v8 + 16 * (v5 & *((_QWORD *)this + 8)));
    while ( a3 != v9[2] )
    {
      if ( v9 == v10 )
        goto LABEL_8;
      v9 = (_QWORD *)v9[1];
    }
  }
  if ( !v9 )
    v9 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v9 != *((_QWORD **)this + 3) )
  {
    v11 = (_QWORD *)v9[6];
    for ( j = (_QWORD *)v9[5]; j != v11 && *j != a2; ++j )
      ;
    if ( j != v11 )
    {
      for ( k = j + 1; k != v11; ++k )
      {
        if ( *k != a2 )
          *j++ = *k;
      }
      if ( j != v11 )
      {
        v14 = v9[6] - (_QWORD)v11;
        memmove_0(j, v11, v14);
        v9[6] = (char *)j + v14;
      }
    }
  }
}
