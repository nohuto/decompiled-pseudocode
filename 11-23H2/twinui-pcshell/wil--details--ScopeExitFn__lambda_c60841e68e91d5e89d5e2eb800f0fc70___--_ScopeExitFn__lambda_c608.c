/*
 * XREFs of wil::details::ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___::_ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___ @ 0x18041DAC4
 * Callers:
 *     _CControlCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1802BCB03 (_CControlCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 * Callees:
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x180143C40 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___::_ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___(
        _BYTE *a1,
        __int64 a2)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)(*(_QWORD *)a1 + 64LL), a2);
  }
  return result;
}
