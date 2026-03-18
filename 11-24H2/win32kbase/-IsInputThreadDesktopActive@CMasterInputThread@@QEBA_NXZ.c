/*
 * XREFs of ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1400C20B4
 * Callers:
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400C1FA0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1400C2150 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 */

bool __fastcall CMasterInputThread::IsInputThreadDesktopActive(CMasterInputThread *this)
{
  __int64 v2; // rcx
  bool v3; // di

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 8, 0LL);
  v3 = 0;
  if ( !CInputThreadBase::InputThreadState::IsEmpty((CMasterInputThread *)((char *)this + 16)) )
    v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 496LL) == *(_QWORD *)(W32GetUserSessionState(v2) + 19200);
  ExReleasePushLockSharedEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
