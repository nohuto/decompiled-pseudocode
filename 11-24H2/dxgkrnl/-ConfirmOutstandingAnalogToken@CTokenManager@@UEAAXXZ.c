/*
 * XREFs of ?ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x14009A200
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D238 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D270 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::ConfirmOutstandingAnalogToken(CTokenManager *this)
{
  __int64 v2; // rcx

  CTokenManager::AcquireTokenManagerLock(this);
  v2 = *((_QWORD *)this + 42);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 40LL))(*((_QWORD *)this + 42));
    (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 152LL))(this);
  }
  CTokenManager::ReleaseTokenManagerLock(this);
}
