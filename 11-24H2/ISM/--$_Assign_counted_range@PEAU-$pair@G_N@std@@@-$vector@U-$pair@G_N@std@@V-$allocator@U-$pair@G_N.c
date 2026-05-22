/*
 * XREFs of ??$_Assign_counted_range@PEAU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEAU?$pair@G_N@1@_K@Z @ 0x18017DA9C
 * Callers:
 *     ?Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@@Z @ 0x18017E3A8 (-Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x18017D20C (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

char __fastcall std::vector<std::pair<unsigned short,bool>>::_Assign_counted_range<std::pair<unsigned short,bool> *>(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  char *v10; // rdi
  unsigned __int64 v11; // rdx
  char *v12; // rdx
  __int16 v13; // ax
  char result; // al
  size_t v15; // rbx

  v5 = *a1;
  v6 = a3;
  v7 = (a1[2] - v5) >> 2;
  if ( a3 > v7 )
  {
    v8 = 0x3FFFFFFFFFFFFFFFLL;
    if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v9 = v7 >> 1;
    if ( v7 <= 0x3FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v8 = v9 + v7;
      if ( v9 + v7 < v6 )
        v8 = v6;
    }
    if ( v5 )
    {
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)(4 * v7));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    std::vector<std::pair<unsigned short,bool>>::_Buy_raw(a1, v8);
    v10 = *a1;
    goto LABEL_17;
  }
  v10 = a1[1];
  v11 = (v10 - v5) >> 2;
  if ( a3 > v11 )
  {
    while ( v5 != v10 )
    {
      *(_WORD *)v5 = *(_WORD *)a2;
      v5[2] = a2[2];
      v5 += 4;
      v10 = a1[1];
      a2 += 4;
    }
    v6 = a3 - v11;
LABEL_17:
    v15 = 4 * v6;
    memmove_0(v10, a2, v15);
    result = v15 + (_BYTE)v10;
    a1[1] = &v10[v15];
    return result;
  }
  v12 = &v5[4 * a3];
  if ( a3 )
  {
    do
    {
      v13 = *(_WORD *)a2;
      a2 += 4;
      *(_WORD *)v5 = v13;
      v5 += 4;
      result = *(a2 - 2);
      *(v5 - 2) = result;
      --v6;
    }
    while ( v6 );
  }
  a1[1] = v12;
  return result;
}
