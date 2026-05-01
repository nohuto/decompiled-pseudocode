/*
 * XREFs of _ApplicationContainerActivationPolicy::QueryService_::_1_::dtor$3 @ 0x180631DB4
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall ApplicationContainerActivationPolicy::QueryService_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 32));
  }
}
