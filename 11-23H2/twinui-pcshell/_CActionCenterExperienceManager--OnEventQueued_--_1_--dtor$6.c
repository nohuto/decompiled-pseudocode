/*
 * XREFs of _CActionCenterExperienceManager::OnEventQueued_::_1_::dtor$6 @ 0x1802BBB74
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1801BFB34 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CActionCenterExperienceManager::OnEventQueued_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 224));
  }
}
