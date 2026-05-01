/*
 * XREFs of _CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806E567A
 * Callers:
 *     <none>
 * Callees:
 *     ??1Item@AgileRegistrationList@@QEAA@XZ @ 0x180298CE4 (--1Item@AgileRegistrationList@@QEAA@XZ.c)
 */

void __fastcall CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync__ResumeCoro_1_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 208) + 88LL;
  AgileRegistrationList::Item::~Item(*(AgileRegistrationList::Item **)(a2 + 112));
}
