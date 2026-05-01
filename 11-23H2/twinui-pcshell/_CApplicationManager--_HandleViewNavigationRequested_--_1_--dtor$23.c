/*
 * XREFs of _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$23 @ 0x1802B3DF8
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor_23(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 56));
  }
}
