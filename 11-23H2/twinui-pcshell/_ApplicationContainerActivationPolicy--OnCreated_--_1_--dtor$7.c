/*
 * XREFs of _ApplicationContainerActivationPolicy::OnCreated_::_1_::dtor$7 @ 0x180631528
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall ApplicationContainerActivationPolicy::OnCreated_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 104));
  }
}
