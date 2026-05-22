/*
 * XREFs of ?RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z @ 0x18001D8B8
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001CD30 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ?reset@?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ @ 0x1800523A8 (-reset@-$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

__int64 __fastcall InputSite::RemoveIdForNamespace(__int64 a1, int a2)
{
  _DWORD *v2; // rdi
  _DWORD *v4; // rdx
  _OWORD *i; // rcx
  size_t v7; // rbx
  __int64 result; // rax

  v2 = *(_DWORD **)(a1 + 16);
  v4 = *(_DWORD **)(a1 + 24);
  while ( v2 != v4 && *v2 != a2 )
    v2 += 4;
  if ( v2 != v4 )
  {
    for ( i = v2 + 4; i != (_OWORD *)v4; ++i )
    {
      if ( *(_DWORD *)i != a2 )
      {
        *(_OWORD *)v2 = *i;
        v2 += 4;
      }
    }
    if ( v2 != v4 )
    {
      v7 = *(_QWORD *)(a1 + 24) - (_QWORD)v4;
      memmove_0(v2, v4, v7);
      result = (__int64)v2 + v7;
      *(_QWORD *)(a1 + 24) = (char *)v2 + v7;
    }
  }
  if ( !a2 )
    return std::_Optional_destruct_base<LegacyInputSinkData,0>::reset(a1 + 48);
  return result;
}
