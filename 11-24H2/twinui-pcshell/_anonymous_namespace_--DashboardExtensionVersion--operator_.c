/*
 * XREFs of _anonymous_namespace_::DashboardExtensionVersion::operator_ @ 0x1805CB6D0
 * Callers:
 *     std::_Optional_construct_base__anonymous_namespace_::DashboardExtensionVersion_::_Assign__anonymous_namespace_::DashboardExtensionVersion_ @ 0x1805C3798 (std--_Optional_construct_base__anonymous_namespace_--DashboardExtensionVersion_--_Assign__anonym.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180048B14 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall anonymous_namespace_::DashboardExtensionVersion::operator_(_QWORD *a1, _QWORD *a2)
{
  if ( a1 != a2 )
  {
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)a1);
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  std::wstring::operator=((__int64)(a1 + 3), (__int64)(a2 + 3));
  return a1;
}
