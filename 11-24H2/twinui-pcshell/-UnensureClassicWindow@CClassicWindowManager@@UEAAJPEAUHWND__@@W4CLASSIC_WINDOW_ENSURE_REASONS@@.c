/*
 * XREFs of ?UnensureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802F3110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D13C0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x18028DAB4 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$UnensureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802F2110 (--$UnensureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::UnensureClassicWindow(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF
  RTL_SRWLOCK *v12; // [rsp+48h] [rbp+20h] BYREF

  v11 = a3;
  if ( !a3 || ((a3 - 1LL) & a3) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8C9,
      (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
      a4);
  LODWORD(v12) = a2;
  CAppManagerTelemetry::UnensureClassicWindow<unsigned int,enum CLASSIC_WINDOW_ENSURE_REASONS &>(
    (int *)&v12,
    (int *)&v11);
  CIAMGlobals::AcquireExclusive(v8, &v12);
  if ( CClassicWindowManager::_HandleDestructionOrHide((CClassicWindowManager *)(a1 - 88), a2, 2, a3) )
  {
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8CF,
      (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
      (const char *)0x80004005LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    return 2147500037LL;
  }
}
