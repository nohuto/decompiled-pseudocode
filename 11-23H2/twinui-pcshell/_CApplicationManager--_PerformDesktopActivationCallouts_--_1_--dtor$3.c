/*
 * XREFs of _CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor$3 @ 0x1802C02BC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 80));
  }
  return result;
}
