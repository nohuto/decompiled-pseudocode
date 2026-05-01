/*
 * XREFs of ??1SearchAppSizeAndBorderInfo@@QEAA@XZ @ 0x180226338
 * Callers:
 *     _UndockedSearchAppExperienceManager::PositionSearchAppWindow_::_1_::dtor$6 @ 0x1806E688F (_UndockedSearchAppExperienceManager--PositionSearchAppWindow_--_1_--dtor$6.c)
 *     _SearchBoxOnTaskbarSearchAppPositioner::GetAppRectAndClippingRegion_::_1_::dtor$1 @ 0x1806E6FF6 (_SearchBoxOnTaskbarSearchAppPositioner--GetAppRectAndClippingRegion_--_1_--dtor$1.c)
 *     _SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion_::_1_::dtor$1 @ 0x1806E7008 (_SearchBoxOnTaskbarSearchAppPositioner--GetSearchBoxOnTaskbarAppRectAndClippingRegion_--_1_--dto.c)
 * Callees:
 *     <none>
 */

void __fastcall SearchAppSizeAndBorderInfo::~SearchAppSizeAndBorderInfo(SearchAppSizeAndBorderInfo *this)
{
  std::vector<Geometry::CRect>::_Tidy((__int64)this + 72);
}
