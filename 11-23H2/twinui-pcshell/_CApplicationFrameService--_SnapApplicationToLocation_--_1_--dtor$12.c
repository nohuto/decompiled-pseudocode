/*
 * XREFs of _CApplicationFrameService::_SnapApplicationToLocation_::_1_::dtor$12 @ 0x1803BD4D3
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CApplicationFrameService::_SnapApplicationToLocation_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~8u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 48));
  }
}
