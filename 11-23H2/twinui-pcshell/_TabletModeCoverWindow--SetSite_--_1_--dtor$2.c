/*
 * XREFs of _TabletModeCoverWindow::SetSite_::_1_::dtor$2 @ 0x1802C1A67
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall TabletModeCoverWindow::SetSite_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~4u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 64));
  }
}
