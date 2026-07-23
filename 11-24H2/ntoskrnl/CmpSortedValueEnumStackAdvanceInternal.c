/*
 * XREFs of CmpSortedValueEnumStackAdvanceInternal @ 0x140A1CF08
 * Callers:
 *     CmpSortedValueEnumStackAdvance @ 0x140A1CED8 (CmpSortedValueEnumStackAdvance.c)
 * Callees:
 *     CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x140A1D020 (CmpSortedValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A1D050 (CmpSortedValueEnumStackValueCompareFunction.c)
 */

__int64 __fastcall CmpSortedValueEnumStackAdvanceInternal(__int16 *a1)
{
  __int16 i; // di
  __int64 EntryAtLayerHeight; // rsi
  unsigned int v4; // eax
  __int16 v5; // si
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 j; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_BYTE *)a1 + 10) )
  {
    if ( !*(_QWORD *)a1 )
      return 2147483674LL;
    for ( i = 0; i <= a1[4]; ++i )
    {
      EntryAtLayerHeight = CmpSortedValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)i);
      v4 = *(_DWORD *)(EntryAtLayerHeight + 28);
      if ( v4 < *(_DWORD *)(EntryAtLayerHeight + 24) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(EntryAtLayerHeight + 8) + 8LL * v4);
        if ( v11 == *(_QWORD *)a1 || !CmpSortedValueEnumStackValueCompareFunction(&v11, a1) )
          ++*(_DWORD *)(EntryAtLayerHeight + 28);
      }
    }
  }
  v5 = a1[4];
  v6 = 0LL;
  for ( j = 0LL; v5 >= 0; --v5 )
  {
    v7 = CmpSortedValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v5);
    v8 = *(unsigned int *)(v7 + 28);
    if ( (unsigned int)v8 < *(_DWORD *)(v7 + 24) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * v8);
      v11 = v9;
      if ( !v6 || CmpSortedValueEnumStackValueCompareFunction(&j, &v11) > 0 )
      {
        v6 = v9;
        j = v9;
      }
    }
  }
  *(_QWORD *)a1 = v6;
  *((_BYTE *)a1 + 10) = 1;
  return v6 == 0 ? 0x8000001A : 0;
}
