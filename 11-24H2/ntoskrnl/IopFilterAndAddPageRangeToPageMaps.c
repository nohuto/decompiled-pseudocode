/*
 * XREFs of IopFilterAndAddPageRangeToPageMaps @ 0x14059DA7C
 * Callers:
 *     IopAddPageToPageMap @ 0x140590668 (IopAddPageToPageMap.c)
 * Callees:
 *     IopSearchAndAddPageRangeToPageMaps @ 0x140592288 (IopSearchAndAddPageRangeToPageMaps.c)
 */

__int64 __fastcall IopFilterAndAddPageRangeToPageMaps(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 result; // rax
  unsigned int v8; // r9d
  __int64 v11; // r10
  unsigned __int64 v12; // rbx
  unsigned int i; // esi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r9
  unsigned __int64 *v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // [rsp+28h] [rbp-30h]

  result = a5;
  v8 = 0;
  v11 = a1;
  if ( a5 )
  {
    v12 = a4 + a5 - 1;
    if ( IopRemovePagesArray )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= *(_DWORD *)IopRemovePagesArray )
          goto LABEL_14;
        v14 = *(_QWORD *)(IopRemovePagesArray + 16LL * i + 8);
        v15 = v14 + *(_QWORD *)(IopRemovePagesArray + 16LL * i + 16);
        v16 = v15 - 1;
        if ( a4 > v14 )
          break;
        v21 = a6;
        v17 = a4;
        v18 = a3;
        v19 = a2;
        if ( v12 < v14 )
          return IopSearchAndAddPageRangeToPageMaps(v11, v19, v18, v17, v12 - a4 + 1, v21);
        v20 = IopSearchAndAddPageRangeToPageMaps(v11, a2, a3, a4, v14 - a4, a6);
        v11 = a1;
        v8 = v20;
        if ( v12 > v16 )
          goto LABEL_11;
LABEL_12:
        ;
      }
      if ( a4 > v16 )
        goto LABEL_12;
      if ( v12 <= v16 )
        return v8;
LABEL_11:
      a4 = v15;
      goto LABEL_12;
    }
LABEL_14:
    v21 = a6;
    v17 = a4;
    v18 = a3;
    v19 = a2;
    return IopSearchAndAddPageRangeToPageMaps(v11, v19, v18, v17, v12 - a4 + 1, v21);
  }
  return result;
}
