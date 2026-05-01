/*
 * XREFs of ?_FinalizeApplicationRecovery@CApplicationManager@@AEAAXXZ @ 0x1802B53C8
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800759E0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CApplicationManager::_FinalizeApplicationRecovery(CApplicationManager *this)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 i; // rbx
  __int64 v4; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *((_QWORD *)this + 80);
  for ( i = 0LL; i < v2; ++i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 79) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
