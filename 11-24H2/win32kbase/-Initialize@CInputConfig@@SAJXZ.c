/*
 * XREFs of ?Initialize@CInputConfig@@SAJXZ @ 0x14014037C
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RegisterCoreMsgProviderPreferences @ 0x1401404F0 (RegisterCoreMsgProviderPreferences.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x14019C200 (--0CInputConfig@@AEAA@XZ.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401F3E0C (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 */

__int64 __fastcall CInputConfig::Initialize(__int64 a1)
{
  __int64 UserSessionState; // rax
  CInputConfig *v2; // rax
  __int64 v3; // rcx
  CInputConfig *v4; // rbx

  UserSessionState = W32GetUserSessionState(a1);
  if ( !CEResourceLock::Initialize((CEResourceLock *)(UserSessionState + 18696)) )
    return 3221225495LL;
  v2 = (CInputConfig *)Win32AllocPoolZInitImpl(256LL, 0x5E8uLL, 0x496E436Fu);
  v4 = v2 ? CInputConfig::CInputConfig(v2) : 0LL;
  *(_QWORD *)(W32GetUserSessionState(v3) + 18688) = v4;
  if ( !v4 )
    return 3221225495LL;
  RegisterCoreMsgProviderPreferences(
    6,
    0,
    1,
    0,
    (__int64)lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_);
  return 0LL;
}
