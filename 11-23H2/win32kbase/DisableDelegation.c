/*
 * XREFs of DisableDelegation @ 0x1C00B8A90
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     SetInputDelegationModeImpl @ 0x1C01E8E5C (SetInputDelegationModeImpl.c)
 * Callees:
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01DC164 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

__int64 __fastcall DisableDelegation(CCursorClip *a1)
{
  __int64 result; // rax

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) != 0 )
    CCursorClip::OverrideClip(a1, 0);
  result = 0LL;
  InputDelegation::CInputDelegationInfo::gInstance = 0LL;
  dword_1C02908A0 = 0;
  return result;
}
