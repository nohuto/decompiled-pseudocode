/*
 * XREFs of ?_TrySwitchToMarkedWindow@CRealmActivationHistory@@AEAAJXZ @ 0x1802FEB20
 * Callers:
 *     ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x1801D23E0 (-SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRealmActivationHistory::_TrySwitchToMarkedWindow(CRealmActivationHistory *this)
{
  LPARAM lParam; // [rsp+38h] [rbp+10h] BYREF

  lParam = 0LL;
  EnumWindows((WNDENUMPROC)lambda_898c08e1df1d86c3a23ee6020b72647e_::_lambda_invoker_cdecl_, (LPARAM)&lParam);
  if ( lParam )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 50) + 128LL))(*((_QWORD *)this + 50), 8LL);
  else
    return 2147943568LL;
}
