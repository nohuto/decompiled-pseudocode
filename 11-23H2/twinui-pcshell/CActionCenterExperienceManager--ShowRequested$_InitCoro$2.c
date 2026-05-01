/*
 * XREFs of CActionCenterExperienceManager::ShowRequested$_InitCoro$2 @ 0x1801DC980
 * Callers:
 *     ?ShowRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801DD0F8 (-ShowRequested@CActionCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewReque.c)
 * Callees:
 *     _CActionCenterExperienceManager::ShowRequested_::_10_::_parameters_::_parameters_ @ 0x180071F4C (_CActionCenterExperienceManager--ShowRequested_--_10_--_parameters_--_parameters_.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DCA70 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActionCenterExperienceManager::ShowRequested__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CActionCenterExperienceManager::ShowRequested_::_10_::_parameters_::_parameters_((_DWORD *)((char *)a2 + 625), a5, a4);
  *(_QWORD *)a2 = CActionCenterExperienceManager::ShowRequested__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 624) = 0;
  return CActionCenterExperienceManager::ShowRequested__ResumeCoro_1(a2);
}
