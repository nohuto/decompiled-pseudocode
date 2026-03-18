/*
 * XREFs of ?ReleasePDevDwmStateAndWin32kLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x140392524
 * Callers:
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1403924AC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x140394060 (-ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::ReleasePDevDwmStateAndWin32kLocks(MANAGEDPRIMARIESTRACKER *this)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rbx

  MANAGEDPRIMARIESTRACKER::ReleasePDevAndDwmStateLocks(this);
  if ( (*((_DWORD *)this + 104) & 1) != 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 1) + 88LL) + 184LL))();
    *((_DWORD *)this + 104) &= ~1u;
    *((_QWORD *)SessionData + 2409) = 0LL;
    ExReleasePushLockExclusiveEx((char *)SessionData + 19264, 0LL);
    KeLeaveCriticalRegion();
  }
}
