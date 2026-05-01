/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x1802BD238
 * Callers:
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$6 @ 0x1806CD9F1 (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$6.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsString__tagpropertykey__::_1_::dtor$0 @ 0x1806CDA03 (_CPropertyStoreHelperBase_IPropertyStore_--GetAsString__tagpropertykey__--_1_--dtor$0.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$1 @ 0x1806D7A1E (_GetUnpackagedAppPinnableItem_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
