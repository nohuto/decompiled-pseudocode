/*
 * XREFs of PiDmCompareObjects @ 0x14099F010
 * Callers:
 *     FindNodeOrParent @ 0x1403EA460 (FindNodeOrParent.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403F03D0 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403F1320 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FFF00 (RtlLookupElementGenericTableAvl.c)
 * Callees:
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 */

__int64 __fastcall PiDmCompareObjects(struct _RTL_AVL_TABLE *Table, __int64 *FirstStruct, __int64 *SecondStruct)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // edx
  const wchar_t *v6; // rdx
  const wchar_t *v7; // rcx
  int v8; // ecx

  v3 = *FirstStruct;
  v4 = *SecondStruct;
  if ( *FirstStruct == *SecondStruct )
    return 2LL;
  v5 = *(_DWORD *)(v3 + 24);
  if ( v5 < *(_DWORD *)(v4 + 24) )
    return 0LL;
  if ( v5 > *(_DWORD *)(v4 + 24) )
    return 1LL;
  v6 = *(const wchar_t **)(v4 + 16);
  v7 = *(const wchar_t **)(v3 + 16);
  if ( *(_DWORD *)(v3 + 28) == 3 )
  {
    v7 += 4;
    v6 += 4;
  }
  v8 = wcsicmp(v7, v6);
  if ( v8 < 0 )
    return 0LL;
  return (unsigned int)(v8 <= 0) + 1;
}
