/*
 * XREFs of ?IsUMObserverRegistered@CBaseProcessor@@QEBA_NXZ @ 0x1400C1FE4
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x14005FD7C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1400C2150 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 */

char __fastcall CBaseProcessor::IsUMObserverRegistered(CBaseProcessor *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rcx
  char v5; // di
  bool v6; // si

  v2 = *(_QWORD *)(W32GetUserSessionState(this) + 18808);
  v3 = v2 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2 + 8, 0LL);
  v5 = 1;
  v6 = !CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase::InputThreadState *)(v2 + 16))
    && *(_QWORD *)(*(_QWORD *)(v2 + 24) + 496LL) == *(_QWORD *)(W32GetUserSessionState(v4) + 19200);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( !v6 || (*((_DWORD *)this + 2) & 6) == 0 )
    return 0;
  return v5;
}
