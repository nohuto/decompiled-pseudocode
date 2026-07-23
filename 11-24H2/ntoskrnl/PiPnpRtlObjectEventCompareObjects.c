/*
 * XREFs of PiPnpRtlObjectEventCompareObjects @ 0x1409F8800
 * Callers:
 *     FindNodeOrParent @ 0x1403D9E20 (FindNodeOrParent.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403E5040 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCompareObjects(_RTL_AVL_TABLE *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int v7; // eax
  int v8; // eax
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rcx
  int v11; // ecx
  int v12; // eax

  v3 = *a2;
  v4 = *a3;
  if ( v3 == *a3 )
    return 2LL;
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_DWORD *)(v5 + 24);
  if ( v7 < *(_DWORD *)(v6 + 24) )
    return 0LL;
  if ( v7 <= *(_DWORD *)(v6 + 24) )
  {
    v8 = *(_DWORD *)(v5 + 28);
    if ( v8 < *(_DWORD *)(v6 + 28) )
      return 0LL;
    if ( v8 <= *(_DWORD *)(v6 + 28) )
    {
      v9 = *(const wchar_t **)(v6 + 16);
      v10 = *(const wchar_t **)(v5 + 16);
      if ( v8 == 3 )
      {
        v10 += 4;
        v9 += 4;
      }
      v11 = wcsicmp(v10, v9);
      v12 = 0;
      if ( v11 >= 0 )
      {
        LOBYTE(v12) = v11 <= 0;
        return (unsigned int)(v12 + 1);
      }
      return 0LL;
    }
  }
  return 1LL;
}
