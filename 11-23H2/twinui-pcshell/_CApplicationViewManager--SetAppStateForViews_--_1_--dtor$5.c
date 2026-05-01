/*
 * XREFs of _CApplicationViewManager::SetAppStateForViews_::_1_::dtor$5 @ 0x1802BF7AF
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CApplicationViewManager::SetAppStateForViews_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 184) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 184) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 56));
  }
}
