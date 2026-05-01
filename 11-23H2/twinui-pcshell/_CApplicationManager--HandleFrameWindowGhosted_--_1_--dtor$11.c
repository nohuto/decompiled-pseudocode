/*
 * XREFs of _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$11 @ 0x18039C5DC
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 56));
  }
}
