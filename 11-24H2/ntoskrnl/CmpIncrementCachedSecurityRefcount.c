/*
 * XREFs of CmpIncrementCachedSecurityRefcount @ 0x14088AFCC
 * Callers:
 *     CmpCheckKey @ 0x140888F1C (CmpCheckKey.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140415340 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 __fastcall CmpIncrementCachedSecurityRefcount(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  if ( CmpFindSecurityCellCacheIndex(a1, a2, &v7) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1888) + 16LL * v7 + 8);
    v5 = *(_DWORD *)(v4 + 28);
    if ( v5 + 1 < v5 )
      return (unsigned int)-1073741675;
    else
      *(_DWORD *)(v4 + 28) = v5 + 1;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
