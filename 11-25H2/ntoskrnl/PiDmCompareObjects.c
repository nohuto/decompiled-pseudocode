/*
 * XREFs of PiDmCompareObjects @ 0x14099C640
 * Callers:
 *     FindNodeOrParent @ 0x1403E1010 (FindNodeOrParent.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403EA890 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403EAAD0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403EB7E0 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403F7C80 (RtlLookupElementGenericTableAvl.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 */

__int64 __fastcall PiDmCompareObjects(_RTL_AVL_TABLE *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // edx
  const wchar_t *v6; // rdx
  const wchar_t *v7; // rcx
  int v8; // ecx

  v3 = *a2;
  v4 = *a3;
  if ( *a2 == *a3 )
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
