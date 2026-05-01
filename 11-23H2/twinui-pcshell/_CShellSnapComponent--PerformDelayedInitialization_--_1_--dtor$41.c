/*
 * XREFs of _CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor$41 @ 0x1802C289A
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor_41(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 320) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 320) &= ~0x10u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 64));
  }
}
